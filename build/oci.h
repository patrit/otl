#if !defined( __OCI_FAKE_H__)
#define __OCI_FAKE_H__



#define SQLCS_IMPLICIT             1

#define OCI_ATTR_CHAR_SIZE       1

#define SQLT_BLOB     113



#define SQLT_IBFLOAT   146
#define SQLT_IBDOUBLE   145
#define SQLT_BFLOAT   144
#define SQLT_BDOUBLE   143

#define OCI_ATTR_SUBSCR_PORTNO   42
#define OCI_SUBSCR_NAMESPACE_DBCHANGE   45
#define OCI_ATTR_CHNF_ROWIDS   48
#define OCI_ATTR_SUBSCR_TIMEOUT   52
#define OCI_ATTR_CHNF_REGHANDLE   53
#define OCI_DTYPE_CHDES   55
#define OCI_ATTR_CHDES_NFYTYPE   56
#define OCI_EVENT_STARTUP   57
#define OCI_EVENT_SHUTDOWN   58
#define OCI_EVENT_SHUTDOWN_ANY   59
#define OCI_EVENT_DEREG   60
#define OCI_EVENT_OBJCHANGE   61
#define OCI_ATTR_CHDES_TABLE_CHANGES   63
#define OCI_DTYPE_TABLE_CHDES   64
#define OCI_ATTR_CHDES_TABLE_NAME   65
#define OCI_ATTR_CHDES_TABLE_OPFLAGS   67
#define OCI_OPCODE_ALLROWS   68
#define OCI_OPCODE_ALTER   69
#define OCI_OPCODE_DROP   70
#define OCI_OPCODE_INSERT   71
#define OCI_OPCODE_UPDATE   72
#define OCI_OPCODE_DELETE   73
#define OCI_DTYPE_ROW_CHDES   80
#define OCI_ATTR_CHDES_ROW_ROWID  81
#define OCI_ATTR_CHDES_TABLE_ROW_CHANGES 82



/* ----- Temporary attribute value for UCS2 character set ID -------- */ 
#define OCI_UTF16ID                    1000              /* UTF16 charset ID */ 





#define CONST const


#define dvoid   void

#include <oledb.h>
#ifndef __RPCNDR_H_VERSION__
typedef int     boolean;
#endif

typedef struct OCIType    OCIType;
//struct Lda_Def;
//typedef struct Lda_Def    Lda_Def;
typedef struct nzttWallet    nzttWallet;
typedef struct nzttPersona    nzttPersona;
typedef struct nzttIdentType      nzttIdentType;
typedef struct nzttBufferBlock      nzttBufferBlock;
typedef struct nzttCipherType     nzttCipherType;
typedef struct nzttcef     nzttcef;
typedef struct nzttIdentityDesc     nzttIdentityDesc;
typedef struct nzttces     nzttces;
typedef struct nzttIdentity     nzttIdentity;
typedef struct OCIRaw     OCIRaw;
typedef struct nzttPersonaDesc   nzttPersonaDesc;
typedef struct nztttdufmt    nztttdufmt;
typedef struct nzttProtInfo     nzttProtInfo;
typedef struct OCISubscription     OCISubscription;
typedef struct OCIColl    OCIColl;





/*
 * $Header: oci.h 15-dec-97.11:06:29 esoyleme Exp $
 */

/* Copyright (c) Oracle Corporation 1995, 1996, 1997, 1998. All Rights Reserved. */
 
/* NOTE:  See 'header_template.doc' in the 'doc' dve under the 'forms' 
      directory for the header file template that includes instructions. 
*/
 
/* 
   NAME 
     oci.h - V8 Oracle Call Interface public definitions

   DESCRIPTION 
     This file defines all the constants and structures required by a V8
     OCI programmer.

   RELATED DOCUMENTS 
     V8 OCI Functional Specification 
     V8 OCI Design Specification
     Oracle Call Interface Programmer's Guide Vol 1 and 2
 
   INSPECTION STATUS 
     Inspection date: 
     Inspection status: 
     Estimated increasing cost defects per page: 
     Rule sets: 
 
   ACCEPTANCE REVIEW STATUS 
     Review date: 
     Review status: 
     Reviewers: 
 
   PUBLIC FUNCTION(S) 
     None

   PRIVATE FUNCTION(S) 
     None
 
   EXAMPLES 
 
   NOTES 


   MODIFIED   (MM/DD/YY)
   ekhor       06/11/98 - WIN32COMMON: added #if defined(__cplusplus) to 
                          get correct ansi prototypes
   aroy        12/19/97 - obsolete OCIStmtBindByPos
   skmishra    01/29/98 - Add OCI_ATTR_PARSE_ERROR_OFFSET
   dchatter    01/08/98 - more comments
   esoyleme    12/15/97 - support failover callback retry
   jwijaya     10/21/97 - change OCILobOffset/Length from ubig_ora to ub4
   cxcheng     07/28/97 - fix compile with SLSHORTNAME
   schandra    06/25/97 - AQ OCI interface
   sgollapu    07/25/97 - Add OCI_ATTR_DESC_PUBLIC
   cxcheng     06/16/97 - add OCI_ATTR_TDO
   skotsovo    06/05/97 - add fntcodes for lob buffering subsystem
   esoyleme    05/13/97 - move failover callback prototype
   skmishra    05/06/97 - stdc compiler fixes
   skmishra    04/22/97 - Provide C++ compatibility
   lchidamb    04/19/97 - add OCI_ATTR_SESSLANG
   ramkrish    04/15/97 - Add OCI_LOB_BUFFER_(NO)FREE
   sgollapu    04/18/97 - Add OCI_ATTR_TABLESPACE
   skaluska    04/17/97 - Add OCI_ATTR_SUB_NAME
   schandra    04/10/97 - Use long OCI names
   aroy        03/27/97 - add OCI_DTYPE_FILE
   sgollapu    03/26/97 - Add OCI_OTYPEs
   skmishra    04/09/97 - Added constant OCI_ROWID_LEN
   dchatter    03/21/97 - add attr OCI_ATTR_IN_V8_MODE
   lchidamb    03/21/97 - add OCI_COMMIT_ON_SUCCESS execution mode
   skmishra    03/20/97 - Added OCI_ATTR_LOBEMPTY
   sgollapu    03/19/97 - Add OCI_ATTR_OVRLD_ID
   aroy        03/17/97 - add postprocessing callback
   sgollapu    03/15/97 - Add OCI_ATTR_PARAM
   cxcheng     02/07/97 - change OCI_PTYPE codes for type method for consistenc
   cxcheng     02/05/97 - add OCI_PTYPE_TYPE_RESULT
   cxcheng     02/04/97 - rename OCI_PTYPE constants to be more consistent
   cxcheng     02/03/97 - add OCI_ATTR, OCI_PTYPE contants for describe type
   esoyleme    01/23/97 - merge neerja callback
   sgollapu    12/30/96 - Remove OCI_DTYPE_SECURITY
   asurpur     12/26/96 - CHanging OCI_NO_AUTH to OCI_AUTH
   sgollapu    12/23/96 - Add more attrs to COL, ARG, and SEQ
   sgollapu    12/12/96 - Add OCI_DESCRIBE_ONLY
   slari       12/11/96 - change prototype of OCICallbackInBind
   nbhatt      12/05/96 - "callback"
   lchidamb    11/19/96 - handle subclassing
   sgollapu    11/09/96 - OCI_PATTR_*
   dchatter    11/04/96 - add attr OCI_ATTR_CHRCNT
   mluong      11/01/96 - test
   cxcheng     10/31/96 - add #defines for OCILobLength etc
   dchatter    10/31/96 - add lob read write call back fp defs
   dchatter    10/30/96 - more changes
   rhari       10/30/96 - Include ociextp.h at the very end
   lchidamb    10/22/96 - add fdo attribute for bind/server handle
   dchatter    10/22/96 - change attr defn for prefetch parameters & lobs/file
                          calls
   slari       10/21/96 - add OCI_ENV_NO_MUTEX
   rhari       10/25/96 - Include ociextp.h
   rxgovind    10/25/96 - add OCI_LOBMAXSIZE, remove OCI_FILE_READWRITE
   sgollapu    10/24/96 - Correct OCILogon and OCILogoff
   sgollapu    10/24/96 - Correct to OCILogon and OCILogoff
   sgollapu    10/21/96 - Add ocilon and ociloff
   skaluska    10/31/96 - Add OCI_PTYPE values
   sgollapu    10/17/96 - correct OCI_ATTR_SVCCTX to OCI_ATTR_SERVER
   rwessman    10/16/96 - Added security functions and fixed olint errors.
   sthakur     10/14/96 - add more COR attributes
   cxcheng     10/14/96 - re-enable LOB functions
   sgollapu    10/10/96 - Add ocibdp and ocibdn
   slari       10/07/96 - add back OCIRowid
   aroy        10/08/96 -  add typedef ocibfill for PRO*C
   mluong      10/11/96 - replace OCI_ATTR_CHARSET* with OCI_ATTR_CHARSET_*
   cxcheng     10/10/96 - temporarily take out #define for lob functions
   sgollapu    10/02/96 - Rename OCI functions and datatypes
   skotsovo    10/01/96 - move orl lob fnts to oci
   aroy        09/10/96 - fix merge errors
   aroy        08/19/96 - NCHAR support
   jboonleu    09/05/96 - add OCI attributes for object cache
   dchatter    08/20/96 - HTYPE ranges from 1-50; DTYPE from 50-255
   slari       08/06/96 - define OCI_DTYPE_ROWID
   sthakur     08/14/96 - complex object support
   schandra    06/17/96 - Convert XA to use new OCI
   abrik       08/15/96 - OCI_ATTR_HEAPALLOC added
   aroy        07/17/96 - terminology change: ocilobd => ocilobl
   aroy        07/03/96 - add lob typedefs for Pro*C
   slari       06/28/96 - add OCI_ATTR_STMT_TYPE
   lchidamb    06/26/96 - reorg #ifndef
   schandra    05/31/96 - attribute types for internal and external client name
   asurpur     05/30/96 - Changing the value of mode
   schandra    05/18/96 - OCI_TRANS_TWOPHASE -> 0x00000001 to 0x00100000
   slari       05/30/96 - add callback function prototypes
   jbellemo    05/23/96 - remove ociisc
   schandra    04/23/96 - loosely-coupled branches
   asurpur     05/15/96 - New mode for ocicpw
   aroy        04/24/96 - making ocihandles opaque
   slari       04/18/96 - add missing defines
   schandra    03/27/96 - V8OCI - add transaction related calls
   dchatter    04/01/96 - add OCI_FILE options
   dchatter    03/21/96 - add oci2lda conversion routines
   dchatter    03/07/96 - add OCI piece definition
   slari       03/12/96 - add describe attributes
   slari       03/12/96 - add OCI_OTYPE_QUERY
   aroy        02/28/96 - Add column attributes
   slari       02/09/96 - add OCI_OBJECT
   slari       02/07/96 - add OCI_HYTPE_DSC
   aroy        01/10/96 - adding function code defines...
   dchatter    01/03/96 - define OCI_NON_BLOCKING
   dchatter    01/02/96 - Add Any descriptor
   dchatter    01/02/96 - Add Select List descriptor
   dchatter    12/29/95 - V8 OCI definitions
   dchatter    12/29/95 - Creation

*/

#ifdef __cplusplus
extern "C" {
#endif




#ifndef TRUE
# define TRUE  1
# define FALSE 0
#endif


typedef unsigned char  ub1;                   
typedef   signed char  sb1;                  
 
#define UB1MAXVAL ((ub1)UCHAR_MAX) 
#define UB1MINVAL ((ub1)        0) 
#define SB1MAXVAL ((sb1)SCHAR_MAX) 
#define SB1MINVAL ((sb1)SCHAR_MIN) 
#define MINUB1MAXVAL ((ub1)  255) 
#define MAXUB1MINVAL ((ub1)    0) 
#define MINSB1MAXVAL ((sb1)  127) 
#define MAXSB1MINVAL ((sb1) -127) 
 
 
typedef unsigned short    ub2;                
typedef   signed short    sb2;               

#define UB2MAXVAL ((ub2)USHRT_MAX) 
#define UB2MINVAL ((ub2)        0) 
#define SB2MAXVAL ((sb2) SHRT_MAX) 
#define SB2MINVAL ((sb2) SHRT_MIN) 
#define MINUB2MAXVAL ((ub2) 65535) 
#define MAXUB2MINVAL ((ub2)     0) 
#define MINSB2MAXVAL ((sb2) 32767) 
#define MAXSB2MINVAL ((sb2)-32767) 
  

typedef unsigned long  ub4;                   
typedef   signed long  sb4;                   
 
#define UB4MAXVAL ((ub4)ULONG_MAX) 
#define UB4MINVAL ((ub4)        0) 
#define SB4MAXVAL ((sb4) LONG_MAX) 
#define SB4MINVAL ((sb4) LONG_MIN) 
#define MINUB4MAXVAL ((ub4) 4294967295) 
#define MAXUB4MINVAL ((ub4)          0) 
#define MINSB4MAXVAL ((sb4) 2147483647) 
#define MAXSB4MINVAL ((sb4)-2147483647) 


#define UB1BITS          CHAR_BIT
#define UB1MASK          ((1 << ((uword)CHAR_BIT)) - 1)


typedef ub1   bitvec;    
#define BITVEC(n) (((n)+(UB1BITS-1))>>3)


typedef  unsigned char OraText;

#ifndef max
#define max(x, y)     (((x) < (y)) ?  (y) : (x))
#endif
#ifndef min
#define min(x, y)     (((x) < (y)) ?  (x) : (y))
#endif

typedef         ub4      duword;                   
typedef         sb4      dsword;                 
typedef         dsword   dword;


#define  DUWORDMAXVAL       UB4MAXVAL 
#define  DUWORDMINVAL       UB4MINVAL 
#define  DSWORDMAXVAL       SB4MAXVAL 
#define  DSWORDMINVAL       SB4MINVAL 
#define  MINDUWORDMAXVAL    MINUB4MAXVAL 
#define  MAXDUWORDMINVAL    MAXUB4MINVAL 
#define  MINDSWORDMAXVAL    MINSB4MAXVAL 
#define  MAXDSWORDMINVAL    MAXSB4MINVAL 
#define  DEWORDMAXVAL       EB4MAXVAL 
#define  DEWORDMINVAL       EB4MINVAL 
#define  MINDEWORDMAXVAL    MINEB4MAXVAL 
#define  MAXDEWORDMINVAL    MAXEB4MINVAL 
#define  DWORDMAXVAL        DSWORDMAXVAL 
#define  DWORDMINVAL        DSWORDMINVAL 
   


typedef ub4 dsize_t;  
 

# define DSIZE_TMAXVAL UB4MAXVAL           
# define MINDSIZE_TMAXVAL (dsize_t)65535 
 

typedef sb4 dboolean;  
 
 
typedef ub4 dptr_t; 


typedef          char     eb1;
typedef          short    eb2;               
typedef          long     eb4;               
typedef          eb4      deword;     


#define EB1MAXVAL      ((eb1)SCHAR_MAX) 
#define EB1MINVAL      ((eb1)        0) 
#define MINEB1MAXVAL   ((eb1)  127) 
#define MAXEB1MINVAL   ((eb1)    0) 
#define EB2MAXVAL      ((eb2) SHRT_MAX) 
#define EB2MINVAL      ((eb2)        0) 
#define MINEB2MAXVAL   ((eb2) 32767) 
#define MAXEB2MINVAL   ((eb2)     0) 
#define EB4MAXVAL      ((eb4) LONG_MAX) 
#define EB4MINVAL      ((eb4)        0) 
#define MINEB4MAXVAL   ((eb4) 2147483647) 
#define MAXEB4MINVAL   ((eb4)          0) 

typedef         sb1  b1;                   

#define  B1MAXVAL  SB1MAXVAL 
#define  B1MINVAL  SB1MINVAL 
 
typedef         sb2      b2;              

#define  B2MAXVAL  SB2MAXVAL 
#define  B2MINVAL  SB2MINVAL 
 
typedef         sb4    b4;                

# define  B4MAXVAL  SB4MAXVAL 
# define  B4MINVAL  SB4MINVAL 
 

#ifndef uiXT
typedef   ub1       BITS8;                              
typedef   ub2       BITS16;                              
typedef   ub4       BITS32;                              
#endif
 
#ifndef LUSEMFC
 typedef OraText text;
#endif

#define  M_IDEN    30

# define SLMXFNMLEN 512		        


typedef          int eword;                  
typedef unsigned int uword;                  
typedef   signed int sword;                  

#define  EWORDMAXVAL  ((eword) INT_MAX)
#define  EWORDMINVAL  ((eword)       0)
#define  UWORDMAXVAL  ((uword)UINT_MAX)
#define  UWORDMINVAL  ((uword)       0)
#define  SWORDMAXVAL  ((sword) INT_MAX)
#define  SWORDMINVAL  ((sword) INT_MIN)
#define  MINEWORDMAXVAL  ((eword)  32767)
#define  MAXEWORDMINVAL  ((eword)      0)
#define  MINUWORDMAXVAL  ((uword)  65535)
#define  MAXUWORDMINVAL  ((uword)      0)
#define  MINSWORDMAXVAL  ((sword)  32767)
#define  MAXSWORDMINVAL  ((sword) -32767)

 

typedef unsigned long  ubig_ora;             
typedef   signed long  sbig_ora;             

#define UBIG_ORAMAXVAL ((ubig_ora)ULONG_MAX)
#define UBIG_ORAMINVAL ((ubig_ora)        0)
#define SBIG_ORAMAXVAL ((sbig_ora) LONG_MAX)
#define SBIG_ORAMINVAL ((sbig_ora) LONG_MIN)
#define MINUBIG_ORAMAXVAL ((ubig_ora) 4294967295)
#define MAXUBIG_ORAMINVAL ((ubig_ora)          0)
#define MINSBIG_ORAMAXVAL ((sbig_ora) 2147483647)
#define MAXSBIG_ORAMINVAL ((sbig_ora)-2147483647)

#define UBIGORABITS      (UB1BITS * sizeof(ubig_ora))


#ifdef __BORLANDC__
# ifdef SLU8NATIVE
#  undef SLU8NATIVE
# endif
# ifdef SLS8NATIVE
#  undef SLS8NATIVE
# endif
#else
# define SLU8NATIVE
# define SLS8NATIVE
#endif

#ifdef SLU8NATIVE

typedef unsigned __int64 ub8;

#define UB8ZERO      ((ub8)0)

#define UB8MINVAL ((ub8)0)
#define UB8MAXVAL ((ub8)_UI64_MAX)

#define MAXUB8MINVAL ((ub8)0)
#define MINUB8MAXVAL ((ub8)_UI64_MAX)

#endif 


#ifdef SLS8NATIVE

typedef   signed __int64 sb8;

#define SB8ZERO      ((sb8)0)

#define SB8MINVAL ((sb8) _I64_MIN)
#define SB8MAXVAL ((sb8) _I64_MAX)

#define MAXSB8MINVAL ((sb8) _I64_MIN)
#define MINSB8MAXVAL ((sb8) _I64_MAX)

#endif 











/*
 * $Header: ocidfn.h,v 1.9 1995/08/25 16:13:37 slari Exp $ 
 */

/* Copyright (c) 1991, 1997 by Oracle Corporation */
/*
   NAME
     ocidfn.h - OCI Definations
   NOTES
     Shipped to users.
   MODIFIED   (MM/DD/YY)
    dchatter   03/18/97 -  porting exception 390897
    slari      08/24/95 -  b299432, define CDA_SIZE
    slari      05/11/95 -  add OCI_EV_DEF and OCI_EV_TSF
    dchatter   04/06/95 -  add ifdef flags around OCI_flags
    dchatter   03/08/95 -  piece values
    dchatter   03/06/95 -  merge changes from branch 1.2.720.3
    jfbrown    02/17/95 -  merge changes from branch 1.2.720.2
    dchatter   02/08/95 -  olog call modes
    jfbrown    02/03/95 -  remove non-printable characters
    lchidamb   12/06/94 -  merge changes from branch 1.2.720.1
    lchidamb   10/04/94 -  added field chk to cda_head, cda_def
    dchatter   07/05/94 -  SQLT_CUR added
    rkooi2     11/27/92 -  Changing e* datatypes to s* 
    rkooi2     10/26/92 -  More portability mods 
    rkooi2     10/22/92 -  Added #ifndef ORATYPES ... 
    rkooi2     10/18/92 -  Changes to make it portable. 
    sjain      03/16/92 -  Creation 
*/





















/*
 * $Header: ocidfn.h 30-jul-99.14:14:51 amangal Exp $ 
 */

/* Copyright (c) 1991, 1997, 1998, 1999 by Oracle Corporation */
/* Copyright (c) 1991, 1995, 1996, 1997, 1998, 1999 by Oracle Corporation */
/*
   NAME
     ocidfn.h - OCI Definations
   NOTES
     Shipped to users.
   MODIFIED   (MM/DD/YY)
    amangal    07/30/99 - Merge into 8.1.6 : Bug 879031
    tnbui      07/28/99 - Remove SQLT_TIMESTAMP_ITZ                            
    tnbui      07/21/99 - SQLT_TIMESTAMP_LTZ                                   
    tnbui      06/16/99 - TIMESTAMP WITH IMPLICIT TIME ZONE                    
    whe        04/07/99 - bug#810075
    whe        03/19/99 - lrg 32079 etc.: move HDA def from ocidem.h to ocidfn.
    skmishra   05/10/98 -
    vyanaman   04/16/98 - update sql92 datatypes
    khnguyen   01/16/98 -
    khnguyen   12/23/97 - SQLT* for datetimes and intervals
    tanguyen   08/19/97 -
    dchatter   03/18/97 -  porting exception 390897
    dchatter   05/02/97 -   merge porting exception
    dalpern    12/04/96 -   SQLCS_LIT_NULL added
    cxcheng    11/14/96 -   add SQLT_BFILE/SQLT_CFILE to fix compile prob
    cxcheng    11/12/96 -   add SQLT_NCO for named collection
    lchidamb   10/17/96 -   add SQLT_VST and SQLT_ODT
    sgollapu   10/14/96 -   Mutual exclusion of ocidfn and sqldef
    sgollapu   10/07/96 -   OCI Simplification
    aroy       09/09/96 -   add SQLCS* definitions
    slari      08/07/96 -  add SQLT_RDD, rowid descriptor
    slari      06/12/96 -  remove SQLT_TTBL
    dchatter   04/21/96 -  prepare for merge into main
    slari      08/24/95 -  b299432, define CDA_SIZE
    zwalcott   02/28/96 -  add SQLT_BFILEE and SQLT_CFILEE.
    lchidamb   02/22/96 -  make dtys consistent with dtydef.h
    lchidamb   02/16/96 -  add SQLT_BFILEE and SQLT_CFILEE
    lchidamb   01/30/96 -  rename new datatypes for v8
    lchidamb   09/06/95 -  add new datatypes
    slari      05/11/95 -  add OCI_EV_DEF and OCI_EV_TSF
    dchatter   04/06/95 -  add ifdef flags around OCI_flags
    dchatter   03/08/95 -  piece values
    dchatter   03/06/95 -  merge changes from branch 1.2.720.3
    jfbrown    02/17/95 -  merge changes from branch 1.2.720.2
    dchatter   02/08/95 -  olog call modes
    jfbrown    02/03/95 -  remove non-printable characters
    lchidamb   12/06/94 -  merge changes from branch 1.2.720.1
    lchidamb   10/04/94 -  added field chk to cda_head, cda_def
    dchatter   07/05/94 -  SQLT_CUR added
    rkooi2     11/27/92 -  Changing e* datatypes to s* 
    rkooi2     10/26/92 -  More portability mods 
    rkooi2     10/22/92 -  Added #ifndef ORATYPES ... 
    rkooi2     10/18/92 -  Changes to make it portable. 
    sjain      03/16/92 -  Creation 
*/

/*
 *  ocidfn.h
 *
 *  Common header file for OCI C sample programs.
 *  This header declares the cursor and logon data area structure.
 *  The types used are defined in <oratypes.h>.
 *
 */
 
#ifndef OCIDFN
#define OCIDFN

//#include <oratypes.h>

/* The cda_head struct is strictly PRIVATE.  It is used
   internally only. Do not use this struct in OCI programs. */

struct cda_head {
    sb2          v2_rc;
    ub2          ft;
    ub4          rpc;
    ub2          peo;
    ub1          fc;
    ub1          rcs1;
    ub2          rc;
    ub1          wrn;
    ub1          rcs2;
    sword        rcs3;
    struct {
        struct {
           ub4    rcs4;
           ub2    rcs5;
           ub1    rcs6;
        } rd;
        ub4    rcs7;
        ub2    rcs8;
    } rid;
    sword        ose;
    ub1		 chk;
    dvoid        *rcsp;
};

/*
** Size of HDA area:
** 512 for 64 bit arquitectures
** 256 for 32 bit arquitectures
*/

#if defined(SS_64BIT_SERVER) || defined(__64BIT__)
# define HDA_SIZE 512
#else
# define HDA_SIZE 256
#endif

#if defined(SS_64BIT_SERVER) || defined(__64BIT__)
#define CDA_SIZE 88
#else
# define CDA_SIZE 64
#endif

/* the real CDA, padded to CDA_SIZE bytes in size */
struct cda_def {
    sb2          v2_rc;                                    /* V2 return code */
    ub2          ft;                                    /* SQL function type */
    ub4          rpc;                                /* rows processed count */
    ub2          peo;                                  /* parse error offset */
    ub1          fc;                                    /* OCI function code */
    ub1          rcs1;                                        /* filler area */
    ub2          rc;                                       /* V7 return code */
    ub1          wrn;                                       /* warning flags */
    ub1          rcs2;                                           /* reserved */
    sword        rcs3;                                           /* reserved */
    struct {                                              /* rowid structure */
        struct {
           ub4    rcs4;
           ub2    rcs5;
           ub1    rcs6;
        } rd;
        ub4    rcs7;
        ub2    rcs8;
    } rid;
    sword        ose;                                 /* OSD dependent error */
    ub1		 chk;
    dvoid        *rcsp;                          /* pointer to reserved area */
    ub1          rcs9[CDA_SIZE - sizeof (struct cda_head)];        /* filler */
};

typedef struct cda_def Cda_Def;

/* the logon data area (LDA)
   is the same shape as the CDA */
typedef struct cda_def Lda_Def;

/* OCI Environment Modes for opinit call */
#define OCI_EV_DEF 0                  /* default single-threaded environment */
#define OCI_EV_TSF 1                              /* thread-safe environment */

/* OCI Logon Modes for olog call */
#define OCI_LM_DEF 0                                        /* default login */
#define OCI_LM_NBL 1                                   /* non-blocking logon */

/* 
 * since sqllib uses both ocidef and ocidfn the following defines
 * need to be guarded
 */
#ifndef OCI_FLAGS 
#define OCI_FLAGS

/* OCI_*_PIECE defines the piece types that are returned or set
*/
#define OCI_ONE_PIECE   0                 /* there or this is the only piece */
#define OCI_FIRST_PIECE 1                        /* the first of many pieces */
#define OCI_NEXT_PIECE  2                         /* the next of many pieces */
#define OCI_LAST_PIECE  3                   /* the last piece of this column */
#endif

#ifndef SQLDEF 

/* input data types */
#define SQLT_CHR  1                        /* (ORANET TYPE) character string */
#define SQLT_NUM  2                          /* (ORANET TYPE) oracle numeric */
#define SQLT_INT  3                                 /* (ORANET TYPE) integer */
#define SQLT_FLT  4                   /* (ORANET TYPE) Floating point number */
#define SQLT_STR  5                                /* zero terminated string */
#define SQLT_VNU  6                        /* NUM with preceding length byte */
#define SQLT_PDN  7                  /* (ORANET TYPE) Packed Decimal Numeric */
#define SQLT_LNG  8                                                  /* long */
#define SQLT_VCS  9                             /* Variable character string */
#define SQLT_NON  10                      /* Null/empty PCC Descriptor entry */
#define SQLT_RID  11                                                /* rowid */
#define SQLT_DAT  12                                /* date in oracle format */
#define SQLT_VBI  15                                 /* binary in VCS format */
#define SQLT_BIN  23                                  /* binary data(DTYBIN) */
#define SQLT_LBI  24                                          /* long binary */
#define SQLT_UIN  68                                     /* unsigned integer */
#define SQLT_SLS  91                        /* Display sign leading separate */
#define SQLT_LVC  94                                  /* Longer longs (char) */
#define SQLT_LVB  95                                  /* Longer long binary */ 
#define SQLT_AFC  96                                      /* Ansi fixed char */
#define SQLT_AVC  97                                        /* Ansi Var char */
#define SQLT_CUR  102                                        /* cursor  type */
#define SQLT_RDD  104                                    /* rowid descriptor */
#define SQLT_LAB  105                                          /* label type */
#define SQLT_OSL  106                                        /* oslabel type */

#define SQLT_NTY  108                                   /* named object type */
#define SQLT_REF  110                                            /* ref type */
#define SQLT_CLOB 112                                       /* character lob */
#define SQLT_BLOB 113                                          /* binary lob */
#define SQLT_BFILEE 114                                    /* binary file lob */
#define SQLT_CFILEE 115                                 /* character file lob */
#define SQLT_RSET 116                                     /* result set type */
#define SQLT_NCO  122      /* named collection type (varray or nested table) */
#define SQLT_VST  155                                      /* OCIString type */
#define SQLT_ODT  156                                        /* OCIDate type */

/* datetimes and intervals */
#define SQLT_DATE                      184                      /* ANSI Date */
#define SQLT_TIME                      185                           /* TIME */
#define SQLT_TIME_TZ                   186            /* TIME WITH TIME ZONE */
#define SQLT_TIMESTAMP                 187                      /* TIMESTAMP */
#define SQLT_TIMESTAMP_TZ              188       /* TIMESTAMP WITH TIME ZONE */
#define SQLT_INTERVAL_YM               189         /* INTERVAL YEAR TO MONTH */
#define SQLT_INTERVAL_DS               190         /* INTERVAL DAY TO SECOND */
#define SQLT_TIMESTAMP_LTZ             232        /* TIMESTAMP WITH LOCAL TZ */

/* cxcheng: this has been added for backward compatibility -
   it needs to be here because ocidfn.h can get included ahead of sqldef.h */
#define SQLT_FILE SQLT_BFILEE                              /* binary file lob */
#define SQLT_CFILE SQLT_CFILEE
#define SQLT_BFILE SQLT_BFILEE
 
/* CHAR/NCHAR/VARCHAR2/NVARCHAR2/CLOB/NCLOB char set "form" information */
#define SQLCS_IMPLICIT 1     /* for CHAR, VARCHAR2, CLOB w/o a specified set */
#define SQLCS_NCHAR    2                  /* for NCHAR, NCHAR VARYING, NCLOB */
#define SQLCS_EXPLICIT 3   /* for CHAR, etc, with "CHARACTER SET ..." syntax */
#define SQLCS_FLEXIBLE 4                 /* for PL/SQL "flexible" parameters */
#define SQLCS_LIT_NULL 5      /* for typecheck of NULL and empty_clob() lits */

#endif  /* SQLDEF */
#endif  /* OCIDFN */






























/*
 * $Header: oci.h 21-sep-99.10:37:47 porangas Exp $
 */

/* Copyright (c) Oracle Corporation 1995, 1996, 1997, 1998, 1999. 
All Rights Reserved. */
 
/* 
   NAME 
     oci.h - V8 Oracle Call Interface public definitions

   DESCRIPTION 
     This file defines all the constants and structures required by a V8
     OCI programmer.

   RELATED DOCUMENTS 
     V8 OCI Functional Specification 
     V8 OCI Design Specification
     Oracle Call Interface Programmer's Guide Vol 1 and 2
 
   INSPECTION STATUS 
     Inspection date: 
     Inspection status: 
     Estimated increasing cost defects per page: 
     Rule sets: 
 
   ACCEPTANCE REVIEW STATUS 
     Review date: 
     Review status: 
     Reviewers: 
 
   PUBLIC FUNCTION(S) 
     None

   PRIVATE FUNCTION(S) 
     None
 
   EXAMPLES 
 
   NOTES 


   MODIFIED   (MM/DD/YY)
   porangas    09/21/99 - Correct lines to 80 characters wide: 974710
   slari       08/23/99 - add OCI_DTYPE_UCB
   slari       08/20/99 - add OCI_UCBTYPE_REPLACE
   sgollapu    08/02/99 - oci sql routing
   slari       08/06/99 - rename values for OCI_SERVER_STATUS
   slari       08/02/99 - add OCI_ATTR_SERVER_STATUS
   tnbui       07/28/99 - Remove OCI_DTYPE_TIMESTAMP_ITZ                       
   amangal     07/19/99 - Merge into 8.1.6 : bug 785797
   tnbui       07/07/99 - Change ADJUSTMENT modes                              
   dsaha       07/07/99 - OCI_SAHRED_EXT
   dmwong      06/08/99 - add OCI_ATTR_APPCTX_*
   vyanaman    06/23/99 -
   vyanaman    06/21/99 - Add new OCI Datetime and Interval descriptors
   esoyleme    06/29/99 - expose MTS performance enhancements                  
   rshaikh     04/23/99 - add OCI_SQL_VERSION_*
   tnbui       05/24/99 - Remove OCIAdjStr                                     
   dsaha       05/21/99 - Add OCI_ADJUST_UNK
   mluong      05/17/99 - fix merge
   tnbui       04/05/99 - ADJUSTMENT values
   abrumm      04/16/99 - dpapi: more attributes
   dsaha       02/24/99 - Add OCI_SHOW_DML_WARNINGS
   jiyang      12/07/98 - Add OCI_NLS_DUAL_CURRENCY
   slari       12/07/98 - change OCI_NOMUTEX to OCI_NO_MUTEX
   aroy        11/30/98 - change OCI_NOCALLBACK to OCI_NO_UCB
   aroy        11/13/98 - add env modes to process modes
   slari       09/08/98 - add OCI_FNCODE_SVC2HST and _SVCRH
   aroy        09/04/98 - Add OCI_ATTR_MIGSESSION
   skray       08/14/98 - server groups for session switching
   mluong      08/11/98 - add back OCI_HTYPE_LAST.
   aroy        05/25/98 - add process handle type                              
   aroy        04/06/98 - add shared mode                                      
   slari       07/13/98 -  merge forward to 8.1.4
   slari       07/09/98 -  add OCI_BIND_RESERVED_2
   slari       07/08/98 -  add OCI_EXACT_FETCH_RESERVED_1
   dsaha       07/07/98 -  Add OCI_PARSE_ONLY
   dsaha       06/29/98 -  Add OCI_PARSE_ONLY
   slari       07/01/98 -  add OCI_BIND_RESERVED_2
   sgollapu    06/25/98 -  Fix bug 683565
   slari       06/17/98 -  remove OC_FETCH_RESERVED_2
   slari       06/11/98 -  add OCI_FETCH_RESERVED_1 and 2
   jhasenbe    05/27/98 -  Remove definitions for U-Calls (Unicode)
   jiyang      05/18/98 - remove OCI_ATTR_CARTLANG
   nbhatt      05/20/98 -  OCI_DEQ_REMOVE_NODATA
   nbhatt      05/19/98 - correct AQ opcode
   skmishra    05/06/98 - Add precision attribute to Attributes list
   aroy        04/20/98 - merge forward 8.0.5 -> 8.1.3
   schandra    05/01/98 - OCI sender id
   sgollapu    02/19/98 - enhanced array DML
   nbhatt      05/15/98 -  AQ listen call
   sgollapu    04/27/98 - more attributes
   skaluska    04/06/98 - Add OCI_PTYPE_SCHEMA, OCI_PTYPE_DATABASE
   slari       04/28/98 - add OCI_ATTR_PDPRC
   lchidamb    05/05/98 - change OCI_NAMESPACE_AQ to 1
   nbhatt      04/27/98 - AQ Notification Descriptor
   abrumm      06/24/98 - more direct path attributes
   abrumm      05/27/98 - OCI direct path interface support
   abrumm      05/08/98 - OCI direct path interface support
   lchidamb    03/02/98 - client notification additions
   kkarun      04/17/98 - Add more Interval functions
   vyanaman    04/16/98 - Add get/set TZ
   kkarun      04/14/98 - Add OCI Datetime shortnames
   vyanaman    04/13/98 - Add OCI DateTime and Interval check error codes
   kkarun      04/07/98 - Add OCI_DTYPE_DATETIME and OCI_DTYPE_INTERVAL
   esoyleme    12/15/97 - support failover callback retry
   esoyleme    04/22/98 - merge support for failover callback retry
   mluong      04/16/98 - add OCI_FNCODE_LOBLOCATORASSIGN
   rkasamse    04/17/98 - add short names for OCIPickler(Memory/Ctx) cart servi
   slari       04/10/98 - add OCI_FNCODE_SVCCTXTOLDA
   slari       04/09/98 - add OCI_FNCODE_RESET
   slari       04/07/98 - add OCI_FNCODE_LOBFILEISOPEN
   slari       04/06/98 - add OCI_FNCODE_LOBOPEN
   slari       03/20/98 - change OCI_CBTYPE_xxx to OCI_UCBTYPE_xxx
   slari       03/18/98 - add OCI_FNCODE_MAXFCN
   slari       02/12/98 - add OCI_ENV_NO_USRCB
   skabraha    04/09/98 - adding shortnames for OCIFile
   rhwu        04/03/98 - Add short names for the OCIThread package
   tanguyen    04/03/98 - add OCI_ATTR_xxxx for type inheritance
   rkasamse    04/02/98 - add OCI_ATTR_UCI_REFRESH
   nramakri    04/01/98 - Add short names for the OCIExtract package
   ewaugh      03/31/98 - Add short names for the OCIFormat package.
   jhasenbe    04/06/98 - Add definitions for U-Calls (Unicode)
                          (OCI_TEXT, OCI_UTEXT, OCI_UTEXT4)
   skmishra    03/03/98 - Add OCI_ATTR_PARSE_ERROR_OFFSET
   rwessman    03/11/98 - Added OCI_CRED_PROXY for proxy authentication
   abrumm      03/31/98 - OCI direct path interface support
   nmallava    03/03/98 - add constants for temp lob apis
   skotsovo    03/05/98 - resolve merge conflicts
   skotsovo    02/24/98 - add OCI_DTYPE_LOC
   skaluska    01/21/98 - Add OCI_ATTR_LTYPE
   rkasamse    01/06/98 - add OCI_ATTR* for obj cache enhancements
   dchatter    01/08/98 - more comments
   skabraha    12/02/97 - moved oci1.h to the front of include files.
   jiyang      12/18/97 - Add OCI_NLS_MAX_BUFSZ
   rhwu        12/02/97 - move oci1.h up
   ewaugh      12/15/97 - Add short names for the OCIFormat package.
   rkasamse    12/02/97 - Add a constant for memory cartridge services -- OCI_M
   nmallava    12/31/97 - open/close for internal lobs
   khnguyen    11/27/97 - add OCI_ATTR_LFPRECISION, OCI_ATTR_FSPRECISION
   rkasamse    11/03/97 - add types for pickler cartridge services
   mluong      11/20/97 - changed ubig_ora to ub4 per skotsovo
   ssamu       11/14/97 - add oci1.h
   jiyang      11/13/97 - Add NLS service for cartridge
   esoyleme    12/15/97 - support failover callback retry
   jwijaya     10/21/97 - change OCILobOffset/Length from ubig_ora to ub4
   cxcheng     07/28/97 - fix compile with SLSHORTNAME
   schandra    06/25/97 - AQ OCI interface
   sgollapu    07/25/97 - Add OCI_ATTR_DESC_PUBLIC
   cxcheng     06/16/97 - add OCI_ATTR_TDO
   skotsovo    06/05/97 - add fntcodes for lob buffering subsystem
   esoyleme    05/13/97 - move failover callback prototype
   skmishra    05/06/97 - stdc compiler fixes
   skmishra    04/22/97 - Provide C++ compatibility
   lchidamb    04/19/97 - add OCI_ATTR_SESSLANG
   ramkrish    04/15/97 - Add OCI_LOB_BUFFER_(NO)FREE
   sgollapu    04/18/97 - Add OCI_ATTR_TABLESPACE
   skaluska    04/17/97 - Add OCI_ATTR_SUB_NAME
   schandra    04/10/97 - Use long OCI names
   aroy        03/27/97 - add OCI_DTYPE_FILE
   sgollapu    03/26/97 - Add OCI_OTYPEs
   skmishra    04/09/97 - Added constant OCI_ROWID_LEN
   dchatter    03/21/97 - add attr OCI_ATTR_IN_V8_MODE
   lchidamb    03/21/97 - add OCI_COMMIT_ON_SUCCESS execution mode
   skmishra    03/20/97 - Added OCI_ATTR_LOBEMPTY
   sgollapu    03/19/97 - Add OCI_ATTR_OVRLD_ID
   aroy        03/17/97 - add postprocessing callback
   sgollapu    03/15/97 - Add OCI_ATTR_PARAM
   cxcheng     02/07/97 - change OCI_PTYPE codes for type method for consistenc
   cxcheng     02/05/97 - add OCI_PTYPE_TYPE_RESULT
   cxcheng     02/04/97 - rename OCI_PTYPE constants to be more consistent
   cxcheng     02/03/97 - add OCI_ATTR, OCI_PTYPE contants for describe type
   esoyleme    01/23/97 - merge neerja callback
   sgollapu    12/30/96 - Remove OCI_DTYPE_SECURITY
   asurpur     12/26/96 - CHanging OCI_NO_AUTH to OCI_AUTH
   sgollapu    12/23/96 - Add more attrs to COL, ARG, and SEQ
   sgollapu    12/12/96 - Add OCI_DESCRIBE_ONLY
   slari       12/11/96 - change prototype of OCICallbackInBind
   nbhatt      12/05/96 - "callback"
   lchidamb    11/19/96 - handle subclassing
   sgollapu    11/09/96 - OCI_PATTR_*
   dchatter    11/04/96 - add attr OCI_ATTR_CHRCNT
   mluong      11/01/96 - test
   cxcheng     10/31/96 - add #defines for OCILobLength etc
   dchatter    10/31/96 - add lob read write call back fp defs
   dchatter    10/30/96 - more changes
   rhari       10/30/96 - Include ociextp.h at the very end
   lchidamb    10/22/96 - add fdo attribute for bind/server handle
   dchatter    10/22/96 - change attr defn for prefetch parameters & lobs/file
                          calls
   slari       10/21/96 - add OCI_ENV_NO_MUTEX
   rhari       10/25/96 - Include ociextp.h
   rxgovind    10/25/96 - add OCI_LOBMAXSIZE, remove OCI_FILE_READWRITE
   sgollapu    10/24/96 - Correct OCILogon and OCILogoff
   sgollapu    10/24/96 - Correct to OCILogon and OCILogoff
   sgollapu    10/21/96 - Add ocilon and ociloff
   skaluska    10/31/96 - Add OCI_PTYPE values
   sgollapu    10/17/96 - correct OCI_ATTR_SVCCTX to OCI_ATTR_SERVER
   rwessman    10/16/96 - Added security functions and fixed olint errors.
   sthakur     10/14/96 - add more COR attributes
   cxcheng     10/14/96 - re-enable LOB functions
   sgollapu    10/10/96 - Add ocibdp and ocibdn
   slari       10/07/96 - add back OCIRowid
   aroy        10/08/96 -  add typedef ocibfill for PRO*C
   mluong      10/11/96 - replace OCI_ATTR_CHARSET* with OCI_ATTR_CHARSET_*
   cxcheng     10/10/96 - temporarily take out #define for lob functions
   sgollapu    10/02/96 - Rename OCI functions and datatypes
   skotsovo    10/01/96 - move orl lob fnts to oci
   aroy        09/10/96 - fix merge errors
   aroy        08/19/96 - NCHAR support
   jboonleu    09/05/96 - add OCI attributes for object cache
   dchatter    08/20/96 - HTYPE ranges from 1-50; DTYPE from 50-255
   slari       08/06/96 - define OCI_DTYPE_ROWID
   sthakur     08/14/96 - complex object support
   schandra    06/17/96 - Convert XA to use new OCI
   abrik       08/15/96 - OCI_ATTR_HEAPALLOC added
   aroy        07/17/96 - terminology change: ocilobd => ocilobl
   aroy        07/03/96 - add lob typedefs for Pro*C
   slari       06/28/96 - add OCI_ATTR_STMT_TYPE
   lchidamb    06/26/96 - reorg #ifndef
   schandra    05/31/96 - attribute types for internal and external client name
   asurpur     05/30/96 - Changing the value of mode
   schandra    05/18/96 - OCI_TRANS_TWOPHASE -> 0x00000001 to 0x00100000
   slari       05/30/96 - add callback function prototypes
   jbellemo    05/23/96 - remove ociisc
   schandra    04/23/96 - loosely-coupled branches
   asurpur     05/15/96 - New mode for ocicpw
   aroy        04/24/96 - making ocihandles opaque
   slari       04/18/96 - add missing defines
   schandra    03/27/96 - V8OCI - add transaction related calls
   dchatter    04/01/96 - add OCI_FILE options
   dchatter    03/21/96 - add oci2lda conversion routines
   dchatter    03/07/96 - add OCI piece definition
   slari       03/12/96 - add describe attributes
   slari       03/12/96 - add OCI_OTYPE_QUERY
   aroy        02/28/96 - Add column attributes
   slari       02/09/96 - add OCI_OBJECT
   slari       02/07/96 - add OCI_HYTPE_DSC
   aroy        01/10/96 - adding function code defines...
   dchatter    01/03/96 - define OCI_NON_BLOCKING
   dchatter    01/02/96 - Add Any descriptor
   dchatter    01/02/96 - Add Select List descriptor
   dchatter    12/29/95 - V8 OCI definitions
   dchatter    12/29/95 - Creation

*/

#ifdef __cplusplus
extern "C" {
#endif


#ifndef OCI_ORACLE
# define OCI_ORACLE

 
/*--------------------------------------------------------------------------- 
 Short names provided for platforms which do not allow extended symbolic names 
  ---------------------------------------------------------------------------*/




/*--------------------------------------------------------------------------- 
                     PUBLIC TYPES AND CONSTANTS 
  ---------------------------------------------------------------------------*/

/*-----------------------------Handle Types----------------------------------*/
                                           /* handle types range from 1 - 49 */
#define OCI_HTYPE_FIRST          1             /* start value of handle type */
#define OCI_HTYPE_ENV            1                     /* environment handle */
#define OCI_HTYPE_ERROR          2                           /* error handle */
#define OCI_HTYPE_SVCCTX         3                         /* service handle */
#define OCI_HTYPE_STMT           4                       /* statement handle */
#define OCI_HTYPE_BIND           5                            /* bind handle */
#define OCI_HTYPE_DEFINE         6                          /* define handle */
#define OCI_HTYPE_DESCRIBE       7                        /* describe handle */
#define OCI_HTYPE_SERVER         8                          /* server handle */
#define OCI_HTYPE_SESSION        9                  /* authentication handle */
#define OCI_HTYPE_TRANS         10                     /* transaction handle */
#define OCI_HTYPE_COMPLEXOBJECT 11        /* complex object retrieval handle */
#define OCI_HTYPE_SECURITY      12                        /* security handle */
#define OCI_HTYPE_SUBSCRIPTION  13                    /* subscription handle */
#define OCI_HTYPE_DIRPATH_CTX   14                    /* direct path context */
#define OCI_HTYPE_DIRPATH_COLUMN_ARRAY 15        /* direct path column array */
#define OCI_HTYPE_DIRPATH_STREAM       16              /* direct path stream */
#define OCI_HTYPE_PROC          17                         /* process handle */
#define OCI_HTYPE_LAST          17            /* last value of a handle type */

/*---------------------------------------------------------------------------*/


/*-------------------------Descriptor Types----------------------------------*/
                                    /* descriptor values range from 50 - 255 */
#define OCI_DTYPE_FIRST 50                 /* start value of descriptor type */
#define OCI_DTYPE_LOB 50                                     /* lob  locator */
#define OCI_DTYPE_SNAP 51                             /* snapshot descriptor */
#define OCI_DTYPE_RSET 52                           /* result set descriptor */
#define OCI_DTYPE_PARAM 53  /* a parameter descriptor obtained from ocigparm */
#define OCI_DTYPE_ROWID  54                              /* rowid descriptor */
#define OCI_DTYPE_COMPLEXOBJECTCOMP  55
                                      /* complex object retrieval descriptor */
#define OCI_DTYPE_FILE 56                                /* File Lob locator */
#define	OCI_DTYPE_AQENQ_OPTIONS 57			  /* enqueue options */
#define	OCI_DTYPE_AQDEQ_OPTIONS 58			  /* dequeue options */
#define OCI_DTYPE_AQMSG_PROPERTIES 59		       /* message properties */
#define OCI_DTYPE_AQAGENT 60					 /* aq agent */
#define OCI_DTYPE_LOCATOR 61                                  /* LOB locator */
#define OCI_DTYPE_INTERVAL_YM 62                 /* Interval year month */
#define OCI_DTYPE_INTERVAL_DS 63                 /* Interval day second */
#define OCI_DTYPE_AQNFY_DESCRIPTOR  64		     /* AQ notify descriptor */
#define OCI_DTYPE_DATE 65                            /* Date */
#define OCI_DTYPE_TIME 66                            /* Time */
#define OCI_DTYPE_TIME_TZ 67                         /* Time with timezone */
#define OCI_DTYPE_TIMESTAMP 68                       /* Timestamp */
#define OCI_DTYPE_TIMESTAMP_TZ 69                /* Timestamp with timezone */
#define OCI_DTYPE_TIMESTAMP_LTZ 70             /* Timestamp with local tz */
#define OCI_DTYPE_UCB		71               /* user callback descriptor */
#define OCI_DTYPE_LAST		71        /* last value of a descriptor type */
/*---------------------------------------------------------------------------*/

/*--------------------------------LOB types ---------------------------------*/
#define OCI_TEMP_BLOB 1                /* LOB type - BLOB ------------------ */
#define OCI_TEMP_CLOB 2                /* LOB type - CLOB ------------------ */
/*---------------------------------------------------------------------------*/

/*-------------------------Object Ptr Types----------------------------------*/
#define OCI_OTYPE_NAME 1				      /* object name */
#define OCI_OTYPE_REF  2				       /* REF to TDO */
#define OCI_OTYPE_PTR  3				       /* PTR to TDO */
/*---------------------------------------------------------------------------*/

/*=============================Attribute Types===============================*/
/* 
   Note: All attributes are global.  New attibutes should be added to the end
   of the list. Before you add an attribute see if an existing one can be 
   used for your handle. 

   If you see any holes please use the holes first. 
 
*/
/*===========================================================================*/


#define OCI_ATTR_FNCODE  1                          /* the OCI function code */
#define OCI_ATTR_OBJECT   2 /* is the environment initialized in object mode */
#define OCI_ATTR_NONBLOCKING_MODE  3                    /* non blocking mode */
#define OCI_ATTR_SQLCODE  4                                  /* the SQL verb */
#define OCI_ATTR_ENV  5                            /* the environment handle */
#define OCI_ATTR_SERVER 6                               /* the server handle */
#define OCI_ATTR_SESSION 7                        /* the user session handle */
#define OCI_ATTR_TRANS   8                         /* the transaction handle */
#define OCI_ATTR_ROW_COUNT   9                  /* the rows processed so far */
#define OCI_ATTR_SQLFNCODE 10               /* the SQL verb of the statement */
#define OCI_ATTR_PREFETCH_ROWS  11    /* sets the number of rows to prefetch */
#define OCI_ATTR_NESTED_PREFETCH_ROWS 12 /* the prefetch rows of nested table*/
#define OCI_ATTR_PREFETCH_MEMORY 13         /* memory limit for rows fetched */
#define OCI_ATTR_NESTED_PREFETCH_MEMORY 14   /* memory limit for nested rows */
#define OCI_ATTR_CHAR_COUNT  15 
                    /* this specifies the bind and define size in characters */
#define OCI_ATTR_PDSCL   16                          /* packed decimal scale */
#define OCI_ATTR_FSPRECISION OCI_ATTR_PDSCL   
                                          /* fs prec for datetime data types */
#define OCI_ATTR_PDPRC   17                         /* packed decimal format */
#define OCI_ATTR_LFPRECISION OCI_ATTR_PDPRC 
                                          /* fs prec for datetime data types */
#define OCI_ATTR_PARAM_COUNT 18       /* number of column in the select list */
#define OCI_ATTR_ROWID   19                                     /* the rowid */
#define OCI_ATTR_CHARSET  20                      /* the character set value */
#define OCI_ATTR_NCHAR   21                                    /* NCHAR type */
#define OCI_ATTR_USERNAME 22                           /* username attribute */
#define OCI_ATTR_PASSWORD 23                           /* password attribute */
#define OCI_ATTR_STMT_TYPE   24                            /* statement type */
#define OCI_ATTR_INTERNAL_NAME   25             /* user friendly global name */
#define OCI_ATTR_EXTERNAL_NAME   26      /* the internal name for global txn */
#define OCI_ATTR_XID     27           /* XOPEN defined global transaction id */
#define OCI_ATTR_TRANS_LOCK 28                                            /* */
#define OCI_ATTR_TRANS_NAME 29    /* string to identify a global transaction */
#define OCI_ATTR_HEAPALLOC 30                /* memory allocated on the heap */
#define OCI_ATTR_CHARSET_ID 31                           /* Character Set ID */
#define OCI_ATTR_CHARSET_FORM 32                       /* Character Set Form */
#define OCI_ATTR_MAXDATA_SIZE 33       /* Maximumsize of data on the server  */
#define OCI_ATTR_CACHE_OPT_SIZE 34              /* object cache optimal size */
#define OCI_ATTR_CACHE_MAX_SIZE 35   /* object cache maximum size percentage */
#define OCI_ATTR_PINOPTION 36             /* object cache default pin option */
#define OCI_ATTR_ALLOC_DURATION 37
                                 /* object cache default allocation duration */
#define OCI_ATTR_PIN_DURATION 38        /* object cache default pin duration */
#define OCI_ATTR_FDO          39       /* Format Descriptor object attribute */
#define OCI_ATTR_POSTPROCESSING_CALLBACK 40
                                         /* Callback to process outbind data */
#define OCI_ATTR_POSTPROCESSING_CONTEXT 41
                                 /* Callback context to process outbind data */
#define OCI_ATTR_ROWS_RETURNED 42
               /* Number of rows returned in current iter - for Bind handles */
#define OCI_ATTR_FOCBK        43              /* Failover Callback attribute */
#define OCI_ATTR_IN_V8_MODE   44 /* is the server/service context in V8 mode */
#define OCI_ATTR_LOBEMPTY     45                              /* empty lob ? */
#define OCI_ATTR_SESSLANG     46                  /* session language handle */

#define OCI_ATTR_VISIBILITY		47		       /* visibility */
#define OCI_ATTR_RELATIVE_MSGID		48  	      /* relative message id */
#define OCI_ATTR_SEQUENCE_DEVIATION	49	       /* sequence deviation */

#define OCI_ATTR_CONSUMER_NAME		50		    /* consumer name */
#define OCI_ATTR_DEQ_MODE		51		     /* dequeue mode */
#define OCI_ATTR_NAVIGATION		52		       /* navigation */
#define OCI_ATTR_WAIT			53			     /* wait */
#define OCI_ATTR_DEQ_MSGID		54	       /* dequeue message id */

#define OCI_ATTR_PRIORITY		55			 /* priority */
#define OCI_ATTR_DELAY			56			    /* delay */
#define OCI_ATTR_EXPIRATION		57		       /* expiration */
#define OCI_ATTR_CORRELATION		58		   /* correlation id */
#define OCI_ATTR_ATTEMPTS		59		    /* # of attempts */
#define OCI_ATTR_RECIPIENT_LIST		60		   /* recipient list */
#define OCI_ATTR_EXCEPTION_QUEUE	61	     /* exception queue name */
#define OCI_ATTR_ENQ_TIME		62 /* enqueue time (only OCIAttrGet) */
#define OCI_ATTR_MSG_STATE		63/* message state (only OCIAttrGet) */
                                                   /* NOTE: 64-66 used below */
#define OCI_ATTR_AGENT_NAME		64		       /* agent name */
#define OCI_ATTR_AGENT_ADDRESS		65		    /* agent address */
#define OCI_ATTR_AGENT_PROTOCOL		66		   /* agent protocol */

#define OCI_ATTR_SENDER_ID		68			/* sender id */
#define OCI_ATTR_ORIGINAL_MSGID		69	      /* original message id */

#define OCI_ATTR_QUEUE_NAME		70		       /* queue name */
#define OCI_ATTR_NFY_MSGID              71		       /* message id */
#define OCI_ATTR_MSG_PROP               72	       /* message properties */

#define OCI_ATTR_NUM_DML_ERRORS         73       /* num of errs in array DML */
#define OCI_ATTR_DML_ROW_OFFSET         74        /* row offset in the array */

#define OCI_ATTR_DATEFORMAT             75     /* default date format string */
#define OCI_ATTR_BUF_ADDR               76                 /* buffer address */
#define OCI_ATTR_BUF_SIZE               77                    /* buffer size */
#define OCI_ATTR_DIRPATH_MODE           78  /* mode of direct path operation */
#define OCI_ATTR_DIRPATH_NOLOG          79               /* nologging option */
#define OCI_ATTR_DIRPATH_PARALLEL       80     /* parallel (temp seg) option */
#define OCI_ATTR_NUM_ROWS               81 /* number of rows in column array */
                                  /* NOTE that OCI_ATTR_NUM_COLS is a column
				   * array attribute too.
				   */
#define OCI_ATTR_COL_COUNT              82        /* columns of column array
					             processed so far.       */
#define OCI_ATTR_STREAM_OFFSET          83  /* str off of last row processed */
#define OCI_ATTR_SHARED_HEAPALLOC       84    /* Shared Heap Allocation Size */

#define OCI_ATTR_SERVER_GROUP           85              /* server group name */

#define OCI_ATTR_MIGSESSION             86   /* migratable session attribute */

#define OCI_ATTR_NOCACHE                87                 /* Temporary LOBs */

#define OCI_ATTR_MEMPOOL_SIZE           88                      /* Pool Size */
#define OCI_ATTR_MEMPOOL_INSTNAME       89                  /* Instance name */
#define OCI_ATTR_MEMPOOL_APPNAME        90               /* Application name */
#define OCI_ATTR_MEMPOOL_HOMENAME       91            /* Home Directory name */
#define OCI_ATTR_MEMPOOL_MODEL          92     /* Pool Model (proc,thrd,both)*/
#define OCI_ATTR_MODES                  93                          /* Modes */

#define OCI_ATTR_SUBSCR_NAME            94           /* name of subscription */
#define OCI_ATTR_SUBSCR_CALLBACK        95            /* associated callback */
#define OCI_ATTR_SUBSCR_CTX             96    /* associated callback context */
#define OCI_ATTR_SUBSCR_PAYLOAD         97             /* associated payload */
#define OCI_ATTR_SUBSCR_NAMESPACE       98           /* associated namespace */

#define OCI_ATTR_PROXY_CREDENTIALS      99         /* Proxy user credentials */
#define OCI_ATTR_INITIAL_CLIENT_ROLES  100       /* Initial client role list */

#define OCI_ATTR_UNK              101                   /* unknown attribute */
#define OCI_ATTR_NUM_COLS         102                   /* number of columns */
#define OCI_ATTR_LIST_COLUMNS     103        /* parameter of the column list */
#define OCI_ATTR_RDBA             104           /* DBA of the segment header */
#define OCI_ATTR_CLUSTERED        105      /* whether the table is clustered */
#define OCI_ATTR_PARTITIONED      106    /* whether the table is partitioned */
#define OCI_ATTR_INDEX_ONLY       107     /* whether the table is index only */
#define OCI_ATTR_LIST_ARGUMENTS   108      /* parameter of the argument list */
#define OCI_ATTR_LIST_SUBPROGRAMS 109    /* parameter of the subprogram list */
#define OCI_ATTR_REF_TDO          110          /* REF to the type descriptor */
#define OCI_ATTR_LINK             111              /* the database link name */
#define OCI_ATTR_MIN              112                       /* minimum value */
#define OCI_ATTR_MAX              113                       /* maximum value */
#define OCI_ATTR_INCR             114                     /* increment value */
#define OCI_ATTR_CACHE            115   /* number of sequence numbers cached */
#define OCI_ATTR_ORDER            116     /* whether the sequence is ordered */
#define OCI_ATTR_HW_MARK          117                     /* high-water mark */
#define OCI_ATTR_TYPE_SCHEMA      118                  /* type's schema name */
#define OCI_ATTR_TIMESTAMP        119             /* timestamp of the object */
#define OCI_ATTR_NUM_ATTRS        120                /* number of sttributes */
#define OCI_ATTR_NUM_PARAMS       121                /* number of parameters */
#define OCI_ATTR_OBJID            122       /* object id for a table or view */
#define OCI_ATTR_PTYPE            123           /* type of info described by */
#define OCI_ATTR_PARAM            124                /* parameter descriptor */
#define OCI_ATTR_OVERLOAD_ID      125     /* overload ID for funcs and procs */
#define OCI_ATTR_TABLESPACE       126                    /* table name space */
#define OCI_ATTR_TDO              127                       /* TDO of a type */
#define OCI_ATTR_LTYPE            128                           /* list type */
#define OCI_ATTR_PARSE_ERROR_OFFSET 129                /* Parse Error offset */
#define OCI_ATTR_IS_TEMPORARY     130          /* whether table is temporary */
#define OCI_ATTR_IS_TYPED         131              /* whether table is typed */
#define OCI_ATTR_DURATION         132         /* duration of temporary table */
#define OCI_ATTR_IS_INVOKER_RIGHTS 133                  /* is invoker rights */
#define OCI_ATTR_OBJ_NAME         134		/* top level schema obj name */
#define OCI_ATTR_OBJ_SCHEMA       135			      /* schema name */
#define OCI_ATTR_OBJ_ID           136          /* top level schema object id */

#define OCI_ATTR_DIRPATH_SORTED_INDEX    137 /* index that data is sorted on */

            /* direct path index maint method (see oci8dp.h) */
#define OCI_ATTR_DIRPATH_INDEX_MAINT_METHOD 138

    /* parallel load: db file, initial and next extent sizes */

#define OCI_ATTR_DIRPATH_FILE               139      /* DB file to load into */
#define OCI_ATTR_DIRPATH_STORAGE_INITIAL    140       /* initial extent size */
#define OCI_ATTR_DIRPATH_STORAGE_NEXT       141          /* next extent size */


#define OCI_ATTR_TRANS_TIMEOUT              142       /* transaction timeout */
#define OCI_ATTR_SERVER_STATUS		    143 /* state of the server handle */
#define OCI_ATTR_STATEMENT                  144 /* statement txt in stmt hdl */


/* ----- Temporary attribute value for UCS2 character set ID -------- */ 
#define OCI_UCS2ID            1000                        /* UCS2 charset ID */

/*============================== End OCI Attribute Types ====================*/

/*---------------- Server Handle Attribute Values ---------------------------*/

/* OCI_ATTR_SERVER_STATUS */
#define OCI_SERVER_NOT_CONNECTED	0x0 
#define OCI_SERVER_NORMAL      		0x1 

/*---------------------------------------------------------------------------*/

/*------------------------- Supported Namespaces  ---------------------------*/
#define OCI_SUBSCR_NAMESPACE_ANONYMOUS   0            /* Anonymous Namespace */
#define OCI_SUBSCR_NAMESPACE_AQ          1                /* Advanced Queues */
#define OCI_SUBSCR_NAMESPACE_MAX         2          /* Max Name Space Number */


/*-------------------------Credential Types----------------------------------*/
#define OCI_CRED_RDBMS    1                    /* database username/password */
#define OCI_CRED_EXT      2               /* externally provided credentials */
#define OCI_CRED_PROXY    3                          /* proxy authentication */
/*---------------------------------------------------------------------------*/

/*------------------------Error Return Values--------------------------------*/
#define OCI_SUCCESS 0                      /* maps to SQL_SUCCESS of SAG CLI */
#define OCI_SUCCESS_WITH_INFO 1             /* maps to SQL_SUCCESS_WITH_INFO */
#define OCI_RESERVED_FOR_INT_USE 200            /* reserved for internal use */ 
#define OCI_NO_DATA 100                               /* maps to SQL_NO_DATA */
#define OCI_ERROR -1                                    /* maps to SQL_ERROR */
#define OCI_INVALID_HANDLE -2                  /* maps to SQL_INVALID_HANDLE */
#define OCI_NEED_DATA 99                            /* maps to SQL_NEED_DATA */
#define OCI_STILL_EXECUTING -3123                   /* OCI would block error */
#define OCI_CONTINUE -24200    /* Continue with the body of the OCI function */
/*---------------------------------------------------------------------------*/

/*------------------DateTime and Interval check Error codes------------------*/

/* DateTime Error Codes used by OCIDateTimeCheck() */
#define   OCI_DT_INVALID_DAY         0x1                          /* Bad day */
#define   OCI_DT_DAY_BELOW_VALID     0x2      /* Bad DAy Low/high bit (1=low)*/
#define   OCI_DT_INVALID_MONTH       0x4                       /*  Bad MOnth */
#define   OCI_DT_MONTH_BELOW_VALID   0x8   /* Bad MOnth Low/high bit (1=low) */
#define   OCI_DT_INVALID_YEAR        0x10                        /* Bad YeaR */
#define   OCI_DT_YEAR_BELOW_VALID    0x20  /*  Bad YeaR Low/high bit (1=low) */
#define   OCI_DT_INVALID_HOUR        0x40                       /*  Bad HouR */
#define   OCI_DT_HOUR_BELOW_VALID    0x80   /* Bad HouR Low/high bit (1=low) */
#define   OCI_DT_INVALID_MINUTE      0x100                     /* Bad MiNute */
#define   OCI_DT_MINUTE_BELOW_VALID  0x200 /*Bad MiNute Low/high bit (1=low) */
#define   OCI_DT_INVALID_SECOND      0x400                    /*  Bad SeCond */
#define   OCI_DT_SECOND_BELOW_VALID  0x800  /*bad second Low/high bit (1=low)*/
#define   OCI_DT_DAY_MISSING_FROM_1582 0x1000     
                                 /*  Day is one of those "missing" from 1582 */
#define   OCI_DT_YEAR_ZERO           0x2000       /* Year may not equal zero */
#define   OCI_DT_INVALID_TIMEZONE    0x4000                 /*  Bad Timezone */
#define   OCI_DT_INVALID_FORMAT      0x8000         /* Bad date format input */


/* Interval Error Codes used by OCIInterCheck() */
#define   OCI_INTER_INVALID_DAY         0x1                       /* Bad day */
#define   OCI_INTER_DAY_BELOW_VALID     0x2  /* Bad DAy Low/high bit (1=low) */
#define   OCI_INTER_INVALID_MONTH       0x4                     /* Bad MOnth */
#define   OCI_INTER_MONTH_BELOW_VALID   0x8 /*Bad MOnth Low/high bit (1=low) */
#define   OCI_INTER_INVALID_YEAR        0x10                     /* Bad YeaR */
#define   OCI_INTER_YEAR_BELOW_VALID    0x20 /*Bad YeaR Low/high bit (1=low) */
#define   OCI_INTER_INVALID_HOUR        0x40                     /* Bad HouR */
#define   OCI_INTER_HOUR_BELOW_VALID    0x80 /*Bad HouR Low/high bit (1=low) */
#define   OCI_INTER_INVALID_MINUTE      0x100                  /* Bad MiNute */
#define   OCI_INTER_MINUTE_BELOW_VALID  0x200 
                                            /*Bad MiNute Low/high bit(1=low) */
#define   OCI_INTER_INVALID_SECOND      0x400                  /* Bad SeCond */
#define   OCI_INTER_SECOND_BELOW_VALID  0x800   
                                            /*bad second Low/high bit(1=low) */
#define   OCI_INTER_INVALID_FRACSEC     0x1000      /* Bad Fractional second */
#define   OCI_INTER_FRACSEC_BELOW_VALID 0x2000  
                                           /* Bad fractional second Low/High */


/*------------------------Parsing Syntax Types-------------------------------*/
#define OCI_V7_SYNTAX 2       /* V815 language - for backwards compatibility */
#define OCI_V8_SYNTAX 3       /* V815 language - for backwards compatibility */
#define OCI_NTV_SYNTAX 1    /* Use what so ever is the native lang of server */
                     /* these values must match the values defined in kpul.h */
/*---------------------------------------------------------------------------*/

/*------------------------Scrollable Cursor Options--------------------------*/
#define OCI_FETCH_NEXT 0x02                                      /* next row */
#define OCI_FETCH_FIRST 0x04                  /* first row of the result set */
#define OCI_FETCH_LAST 0x08                /* the last row of the result set */
#define OCI_FETCH_PRIOR 0x10         /* the previous row relative to current */
#define OCI_FETCH_ABSOLUTE 0x20                /* absolute offset from first */
#define OCI_FETCH_RELATIVE 0x40                /* offset relative to current */
#define OCI_FETCH_RESERVED_1 0x80               /* reserved for internal use */

/*---------------------------------------------------------------------------*/

/*------------------------Bind and Define Options----------------------------*/
#define OCI_SB2_IND_PTR   0x01                                     /* unused */
#define OCI_DATA_AT_EXEC  0x02                       /* data at execute time */
#define OCI_DYNAMIC_FETCH 0x02                          /* fetch dynamically */
#define OCI_PIECEWISE     0x04                    /* piecewise DMLs or fetch */
#define OCI_DEFINE_RESERVED_1 0x08              /* reserved for internal use */
#define OCI_BIND_RESERVED_2   0x10              /* reserved for internal use */
#define OCI_DEFINE_RESERVED_2 0x20              /* reserved for internal use */
/*---------------------------------------------------------------------------*/

/*-----------------------------  Various Modes ------------------------------*/
#define OCI_DEFAULT  0x00 /* the default value for parameters and attributes */

/*-------------OCIInitialize Modes / OCICreateEnvironment Modes -------------*/
#define OCI_THREADED  0x01     /* the application is in threaded environment */
#define OCI_OBJECT    0x02       /* the application is in object environment */
#define OCI_EVENTS    0x04          /* the application is enabled for events */
#define OCI_RESERVED1 0x08                      /* Reserved for internal use */
#define OCI_SHARED    0x10              /* the application is in shared mode */
#define OCI_RESERVED2 0x20                      /* Reserved for internal use */
/* The following *TWO* are only valid for OCICreateEnvironment call */
#define OCI_NO_UCB    0x40            /* No user callback called during init */
#define OCI_NO_MUTEX  0x80            /* the environment handle will not be  */
                                         /*  protected by a mutex internally */
#define OCI_SHARED_EXT 0x100                        /* Used for shared forms */
#define OCI_CACHE     0x200                                /* used by iCache */

/*---------------------------------------------------------------------------*/

/*----------------------------- OCIEnvInit Modes ----------------------------*/
/* NOTE: NO NEW MODES SHOULD BE ADDED HERE BECAUSE THE RECOMMENDED METHOD 
 * IS TO USE THE NEW OCICreateEnvironment MODES.
 */
#define OCI_ENV_NO_UCB 0x01         /* A user callback will not be called in
                                       OCIEnvInit() */
#define OCI_ENV_NO_MUTEX 0x08 /* the environment handle will not be protected
				 by a mutex internally */
/*---------------------------------------------------------------------------*/

/*------------------------ Parse Modes --------------------------------------*/
#define OCI_NO_SHARING        0x01      /* turn off statement handle sharing */
                  /* This flag is only valid when process is in sharing mode */
/*---------------------------------------------------------------------------*/

/*----------------------- Execution Modes -----------------------------------*/
#define OCI_BATCH_MODE        0x01  /* batch the oci statement for execution */
#define OCI_EXACT_FETCH       0x02         /* fetch the exact rows specified */
#define OCI_KEEP_FETCH_STATE  0x04                                 /* unused */
#define OCI_SCROLLABLE_CURSOR 0x08                      /* cursor scrollable */
#define OCI_DESCRIBE_ONLY     0x10            /* only describe the statement */
#define OCI_COMMIT_ON_SUCCESS 0x20        /* commit, if successful execution */
#define OCI_NON_BLOCKING      0x40                           /* non-blocking */
#define OCI_BATCH_ERRORS      0x80             /* batch errors in array dmls */
#define OCI_PARSE_ONLY       0x100               /* only parse the statement */
#define OCI_EXACT_FETCH_RESERVED_1 0x200        /* reserved for internal use */
#define OCI_SHOW_DML_WARNINGS 0x400
            /* return OCI_SUCCESS_WITH_INFO for del/upd with no where clause */

/*---------------------------------------------------------------------------*/

/*------------------------Authentication Modes-------------------------------*/
#define OCI_MIGRATE     0x0001                    /* migratable auth context */
#define OCI_SYSDBA      0x0002                   /* for SYSDBA authorization */
#define OCI_SYSOPER     0x0004                  /* for SYSOPER authorization */
#define OCI_PRELIM_AUTH 0x0008              /* for preliminary authorization */
/*---------------------------------------------------------------------------*/
/*-----------------------------End Various Modes ----------------------------*/

/*------------------------Piece Information----------------------------------*/
#define OCI_PARAM_IN 0x01                                    /* in parameter */
#define OCI_PARAM_OUT 0x02                                  /* out parameter */
/*---------------------------------------------------------------------------*/

/*------------------------ Transaction Start Flags --------------------------*/
/* NOTE: OCI_TRANS_JOIN and OCI_TRANS_NOMIGRATE not supported in 8.0.X       */
#define OCI_TRANS_NEW          0x00000001 /* starts a new transaction branch */
#define OCI_TRANS_JOIN         0x00000002    /* join an existing transaction */
#define OCI_TRANS_RESUME       0x00000004         /* resume this transaction */
#define OCI_TRANS_STARTMASK    0x000000ff

#define OCI_TRANS_READONLY     0x00000100   /* starts a readonly transaction */
#define OCI_TRANS_READWRITE    0x00000200 /* starts a read-write transaction */
#define OCI_TRANS_SERIALIZABLE 0x00000400
                                        /* starts a serializable transaction */
#define OCI_TRANS_ISOLMASK     0x0000ff00

#define OCI_TRANS_LOOSE        0x00010000        /* a loosely coupled branch */
#define OCI_TRANS_TIGHT        0x00020000        /* a tightly coupled branch */
#define OCI_TRANS_TYPEMASK     0x000f0000

#define OCI_TRANS_NOMIGRATE    0x00100000      /* non migratable transaction */

/*---------------------------------------------------------------------------*/

/*------------------------ Transaction End Flags ----------------------------*/
#define OCI_TRANS_TWOPHASE      0x01000000           /* use two phase commit */
/*---------------------------------------------------------------------------*/

/*------------------------- AQ Constants ------------------------------------
 * NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
 * The following constants must match the PL/SQL dbms_aq constants
 * NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
 */
/* ------------------------- Visibility flags -------------------------------*/
#define OCI_ENQ_IMMEDIATE	1   /* enqueue is an independent transaction */
#define OCI_ENQ_ON_COMMIT	2  /* enqueue is part of current transaction */

/* ----------------------- Dequeue mode flags -------------------------------*/
#define OCI_DEQ_BROWSE		1   /* read message without acquiring a lock */
#define OCI_DEQ_LOCKED		2   /* read and obtain write lock on message */
#define OCI_DEQ_REMOVE		3          /* read the message and delete it */
#define OCI_DEQ_REMOVE_NODATA   4    /* delete message w'o returning payload */

/* ----------------- Dequeue navigation flags -------------------------------*/
#define OCI_DEQ_FIRST_MSG	 1     /* get first message at head of queue */
#define OCI_DEQ_NEXT_MSG	 3         /* next message that is available */
#define OCI_DEQ_NEXT_TRANSACTION 2    /* get first message of next txn group */

/* --------------------- Message states -------------------------------------*/
#define OCI_MSG_WAITING		1 /* the message delay has not yet completed */
#define OCI_MSG_READY		0    /* the message is ready to be processed */
#define OCI_MSG_PROCESSED	2          /* the message has been processed */
#define OCI_MSG_EXPIRED		3    /* message has moved to exception queue */

/* --------------------- Sequence deviation ---------------------------------*/
#define OCI_ENQ_BEFORE		2  /* enqueue message before another message */
#define OCI_ENQ_TOP		3     /* enqueue message before all messages */

/* ------------------------- Visibility flags -------------------------------*/
#define OCI_DEQ_IMMEDIATE	1   /* dequeue is an independent transaction */
#define OCI_DEQ_ON_COMMIT	2  /* dequeue is part of current transaction */

/* ------------------------ Wait --------------------------------------------*/
#define OCI_DEQ_WAIT_FOREVER 	-1   /* wait forever if no message available */
#define OCI_DEQ_NO_WAIT	 	0  /* do not wait if no message is available */

/* ------------------------ Delay -------------------------------------------*/
#define OCI_MSG_NO_DELAY	0        /* message is available immediately */

/* ------------------------- Expiration -------------------------------------*/
#define OCI_MSG_NO_EXPIRATION -1                /* message will never expire */

/* -------------------------- END AQ Constants ----------------------------- */

/* --------------------END DateTime and Interval Constants ------------------*/

/*-----------------------Object Types----------------------------------------*/
/*-----------Object Types **** Not to be Used **** --------------------------*/
/* Deprecated */
#define OCI_OTYPE_UNK           0
#define OCI_OTYPE_TABLE         1
#define OCI_OTYPE_VIEW          2
#define OCI_OTYPE_SYN           3
#define OCI_OTYPE_PROC          4
#define OCI_OTYPE_FUNC          5
#define OCI_OTYPE_PKG           6
#define OCI_OTYPE_STMT          7
/*---------------------------------------------------------------------------*/

/*=======================Describe Handle Parameter Attributes ===============*/
/* 
   These attributes are orthogonal to the other set of attributes defined 
   above.  These attrubutes are tobe used only for the desscribe handle 
*/
/*===========================================================================*/
/* Attributes common to Columns and Stored Procs */
#define OCI_ATTR_DATA_SIZE      1                /* maximum size of the data */
#define OCI_ATTR_DATA_TYPE      2     /* the SQL type of the column/argument */
#define OCI_ATTR_DISP_SIZE      3                        /* the display size */
#define OCI_ATTR_NAME           4         /* the name of the column/argument */
#define OCI_ATTR_PRECISION      5                /* precision if number type */
#define OCI_ATTR_SCALE          6                    /* scale if number type */
#define OCI_ATTR_IS_NULL        7                            /* is it null ? */
#define OCI_ATTR_TYPE_NAME      8
  /* name of the named data type or a package name for package private types */
#define OCI_ATTR_SCHEMA_NAME    9             /* the schema name */
#define OCI_ATTR_SUB_NAME       10      /* type name if package private type */
#define OCI_ATTR_POSITION       11
                    /* relative position of col/arg in the list of cols/args */
/* complex object retrieval parameter attributes */
#define OCI_ATTR_COMPLEXOBJECTCOMP_TYPE		50 
#define OCI_ATTR_COMPLEXOBJECTCOMP_TYPE_LEVEL	51
#define OCI_ATTR_COMPLEXOBJECT_LEVEL		52
#define OCI_ATTR_COMPLEXOBJECT_COLL_OUTOFLINE   53

/* Only Columns */
#define OCI_ATTR_DISP_NAME      100                      /* the display name */

/*Only Stored Procs */
#define OCI_ATTR_OVERLOAD       210           /* is this position overloaded */
#define OCI_ATTR_LEVEL          211            /* level for structured types */
#define OCI_ATTR_HAS_DEFAULT    212                   /* has a default value */
#define OCI_ATTR_IOMODE         213                         /* in, out inout */
#define OCI_ATTR_RADIX          214                       /* returns a radix */
#define OCI_ATTR_NUM_ARGS       215             /* total number of arguments */

/* only named type attributes */
#define OCI_ATTR_TYPECODE                  216       /* object or collection */
#define OCI_ATTR_COLLECTION_TYPECODE       217     /* varray or nested table */
#define OCI_ATTR_VERSION                   218      /* user assigned version */
#define OCI_ATTR_IS_INCOMPLETE_TYPE        219 /* is this an incomplete type */
#define OCI_ATTR_IS_SYSTEM_TYPE            220              /* a system type */
#define OCI_ATTR_IS_PREDEFINED_TYPE        221          /* a predefined type */
#define OCI_ATTR_IS_TRANSIENT_TYPE         222           /* a transient type */
#define OCI_ATTR_IS_SYSTEM_GENERATED_TYPE  223      /* system generated type */
#define OCI_ATTR_HAS_NESTED_TABLE          224 /* contains nested table attr */
#define OCI_ATTR_HAS_LOB                   225        /* has a lob attribute */
#define OCI_ATTR_HAS_FILE                  226       /* has a file attribute */
#define OCI_ATTR_COLLECTION_ELEMENT        227 /* has a collection attribute */
#define OCI_ATTR_NUM_TYPE_ATTRS            228  /* number of attribute types */
#define OCI_ATTR_LIST_TYPE_ATTRS           229    /* list of type attributes */
#define OCI_ATTR_NUM_TYPE_METHODS          230     /* number of type methods */
#define OCI_ATTR_LIST_TYPE_METHODS         231       /* list of type methods */
#define OCI_ATTR_MAP_METHOD                232         /* map method of type */
#define OCI_ATTR_ORDER_METHOD              233       /* order method of type */

/* only collection element */
#define OCI_ATTR_NUM_ELEMS                 234         /* number of elements */

/* only type methods */
#define OCI_ATTR_ENCAPSULATION             235        /* encapsulation level */
#define OCI_ATTR_IS_SELFISH                236             /* method selfish */
#define OCI_ATTR_IS_VIRTUAL                237                    /* virtual */
#define OCI_ATTR_IS_INLINE                 238                     /* inline */
#define OCI_ATTR_IS_CONSTANT               239                   /* constant */
#define OCI_ATTR_HAS_RESULT                240                 /* has result */
#define OCI_ATTR_IS_CONSTRUCTOR            241                /* constructor */
#define OCI_ATTR_IS_DESTRUCTOR             242                 /* destructor */
#define OCI_ATTR_IS_OPERATOR               243                   /* operator */
#define OCI_ATTR_IS_MAP                    244               /* a map method */
#define OCI_ATTR_IS_ORDER                  245               /* order method */
#define OCI_ATTR_IS_RNDS                   246  /* read no data state method */
#define OCI_ATTR_IS_RNPS                   247      /* read no process state */
#define OCI_ATTR_IS_WNDS                   248 /* write no data state method */
#define OCI_ATTR_IS_WNPS                   249     /* write no process state */

#define OCI_ATTR_DESC_PUBLIC               250              /* public object */

/* Object Cache Enhancements : attributes for User Constructed Instances     */
#define OCI_ATTR_CACHE_CLIENT_CONTEXT      251
#define OCI_ATTR_UCI_CONSTRUCT		   252
#define OCI_ATTR_UCI_DESTRUCT 		   253
#define OCI_ATTR_UCI_COPY 		   254
#define OCI_ATTR_UCI_PICKLE 		   255
#define OCI_ATTR_UCI_UNPICKLE 		   256
#define OCI_ATTR_UCI_REFRESH 		   257

/* for type inheritance */
#define OCI_ATTR_IS_SUBTYPE                258
#define OCI_ATTR_SUPERTYPE_SCHEMA_NAME     259
#define OCI_ATTR_SUPERTYPE_NAME            260

/* for schemas */
#define OCI_ATTR_LIST_OBJECTS              261	/* list of objects in schema */

/* for database */
#define OCI_ATTR_NCHARSET_ID               262		      /* char set id */
#define OCI_ATTR_LIST_SCHEMAS              263		  /* list of schemas */
#define OCI_ATTR_MAX_PROC_LEN              264	     /* max procedure length */
#define OCI_ATTR_MAX_COLUMN_LEN            265	   /* max column name length */
#define OCI_ATTR_CURSOR_COMMIT_BEHAVIOR    266	   /* cursor commit behavior */
#define OCI_ATTR_MAX_CATALOG_NAMELEN       267	       /* catalog namelength */
#define OCI_ATTR_CATALOG_LOCATION          268		 /* catalog location */
#define OCI_ATTR_SAVEPOINT_SUPPORT         269		/* savepoint support */
#define OCI_ATTR_NOWAIT_SUPPORT            270		   /* nowait support */
#define OCI_ATTR_AUTOCOMMIT_DDL            271		   /* autocommit DDL */
#define OCI_ATTR_LOCKING_MODE              272		     /* locking mode */

/* for externally initialized context */
#define OCI_ATTR_APPCTX_SIZE               273 /* count of context to be init*/
#define OCI_ATTR_APPCTX_LIST               274 /* count of context to be init*/
#define OCI_ATTR_APPCTX_NAME               275 /* name  of context to be init*/
#define OCI_ATTR_APPCTX_ATTR               276 /* attr  of context to be init*/
#define OCI_ATTR_APPCTX_VALUE              277 /* value of context to be init*/

/*---------------------------End Describe Handle Attributes -----------------*/

/*---------------- Describe Handle Parameter Attribute Values ---------------*/

/* OCI_ATTR_CURSOR_COMMIT_BEHAVIOR */
#define OCI_CURSOR_OPEN   0 
#define OCI_CURSOR_CLOSED 1

/* OCI_ATTR_CATALOG_LOCATION */
#define OCI_CL_START 0
#define OCI_CL_END   1

/* OCI_ATTR_SAVEPOINT_SUPPORT */
#define OCI_SP_SUPPORTED   0
#define OCI_SP_UNSUPPORTED 1

/* OCI_ATTR_NOWAIT_SUPPORT */
#define OCI_NW_SUPPORTED   0
#define OCI_NW_UNSUPPORTED 1

/* OCI_ATTR_AUTOCOMMIT_DDL */
#define OCI_AC_DDL    0
#define OCI_NO_AC_DDL 1

/* OCI_ATTR_LOCKING_MODE */
#define OCI_LOCK_IMMEDIATE 0
#define OCI_LOCK_DELAYED   1

/*---------------------------------------------------------------------------*/

/*---------------------------OCIPasswordChange-------------------------------*/
#define OCI_AUTH         0x08        /* Change the password but do not login */


/*------------------------Other Constants------------------------------------*/
#define OCI_MAX_FNS   100                     /* max number of OCI Functions */
#define OCI_SQLSTATE_SIZE 5  
#define OCI_ERROR_MAXMSG_SIZE   1024         /* max size of an error message */
#define OCI_LOBMAXSIZE MINUB4MAXVAL                 /* maximum lob data size */
#define OCI_ROWID_LEN             23 
/*---------------------------------------------------------------------------*/

/*------------------------ Fail Over Events ---------------------------------*/
#define OCI_FO_END          0x00000001
#define OCI_FO_ABORT        0x00000002   
#define OCI_FO_REAUTH       0x00000004
#define OCI_FO_BEGIN        0x00000008 
#define OCI_FO_ERROR        0x00000010
/*---------------------------------------------------------------------------*/

/*------------------------ Fail Over Callback Return Codes ------------------*/
#define OCI_FO_RETRY        25410
/*---------------------------------------------------------------------------*/

/*------------------------- Fail Over Types ---------------------------------*/
#define OCI_FO_NONE           0x00000001
#define OCI_FO_SESSION        0x00000002
#define OCI_FO_SELECT         0x00000004
#define OCI_FO_TXNAL          0x00000008
/*---------------------------------------------------------------------------*/

/*-----------------------Function Codes--------------------------------------*/
#define OCI_FNCODE_INITIALIZE     1                         /* OCIInitialize */
#define OCI_FNCODE_HANDLEALLOC  2                          /* OCIHandleAlloc */
#define OCI_FNCODE_HANDLEFREE  3                            /* OCIHandleFree */
#define OCI_FNCODE_DESCRIPTORALLOC  4                  /* OCIDescriptorAlloc */
#define OCI_FNCODE_DESCRIPTORFREE  5                    /* OCIDescriptorFree */
#define OCI_FNCODE_ENVINIT   6                                 /* OCIEnvInit */
#define OCI_FNCODE_SERVERATTACH   7                       /* OCIServerAttach */
#define OCI_FNCODE_SERVERDETACH   8                       /* OCIServerDetach */
/* unused         9 */ 
#define OCI_FNCODE_SESSIONBEGIN  10                       /* OCISessionBegin */
#define OCI_FNCODE_SESSIONEND   11                          /* OCISessionEnd */
#define OCI_FNCODE_PASSWORDCHANGE   12                  /* OCIPasswordChange */
#define OCI_FNCODE_STMTPREPARE   13                        /* OCIStmtPrepare */
                                                      /* unused       14- 16 */
#define OCI_FNCODE_BINDDYNAMIC   17                        /* OCIBindDynamic */
#define OCI_FNCODE_BINDOBJECT  18                           /* OCIBindObject */
                                                                /* 19 unused */
#define OCI_FNCODE_BINDARRAYOFSTRUCT   20            /* OCIBindArrayOfStruct */
#define OCI_FNCODE_STMTEXECUTE  21                         /* OCIStmtExecute */
                                                             /* unused 22-24 */
#define OCI_FNCODE_DEFINEOBJECT  25                       /* OCIDefineObject */
#define OCI_FNCODE_DEFINEDYNAMIC   26                    /* OCIDefineDynamic */
#define OCI_FNCODE_DEFINEARRAYOFSTRUCT  27         /* OCIDefineArrayOfStruct */
#define OCI_FNCODE_STMTFETCH   28                            /* OCIStmtFetch */
#define OCI_FNCODE_STMTGETBIND   29                    /* OCIStmtGetBindInfo */
                                                            /* 30, 31 unused */
#define OCI_FNCODE_DESCRIBEANY  32                         /* OCIDescribeAny */
#define OCI_FNCODE_TRANSSTART  33                           /* OCITransStart */
#define OCI_FNCODE_TRANSDETACH  34                         /* OCITransDetach */
#define OCI_FNCODE_TRANSCOMMIT  35                         /* OCITransCommit */
                                                                /* 36 unused */
#define OCI_FNCODE_ERRORGET   37                              /* OCIErrorGet */
#define OCI_FNCODE_LOBOPENFILE  38                         /* OCILobFileOpen */
#define OCI_FNCODE_LOBCLOSEFILE  39                       /* OCILobFileClose */
                                             /* 40 was LOBCREATEFILE, unused */
                                         /* 41 was OCILobFileDelete, unused  */
#define OCI_FNCODE_LOBCOPY  42                                 /* OCILobCopy */
#define OCI_FNCODE_LOBAPPEND  43                             /* OCILobAppend */
#define OCI_FNCODE_LOBERASE  44                               /* OCILobErase */
#define OCI_FNCODE_LOBLENGTH  45                          /* OCILobGetLength */
#define OCI_FNCODE_LOBTRIM  46                                 /* OCILobTrim */
#define OCI_FNCODE_LOBREAD  47                                 /* OCILobRead */
#define OCI_FNCODE_LOBWRITE  48                               /* OCILobWrite */
                                                                /* 49 unused */
#define OCI_FNCODE_SVCCTXBREAK 50                                /* OCIBreak */
#define OCI_FNCODE_SERVERVERSION  51                     /* OCIServerVersion */
/* unused 52, 53 */
#define OCI_FNCODE_ATTRGET 54                                  /* OCIAttrGet */
#define OCI_FNCODE_ATTRSET 55                                  /* OCIAttrSet */
#define OCI_FNCODE_PARAMSET 56                                /* OCIParamSet */
#define OCI_FNCODE_PARAMGET 57                                /* OCIParamGet */
#define OCI_FNCODE_STMTGETPIECEINFO   58              /* OCIStmtGetPieceInfo */
#define OCI_FNCODE_LDATOSVCCTX 59                          /* OCILdaToSvcCtx */
                                                                /* 60 unused */
#define OCI_FNCODE_STMTSETPIECEINFO   61              /* OCIStmtSetPieceInfo */
#define OCI_FNCODE_TRANSFORGET 62                          /* OCITransForget */
#define OCI_FNCODE_TRANSPREPARE 63                        /* OCITransPrepare */
#define OCI_FNCODE_TRANSROLLBACK  64                     /* OCITransRollback */
#define OCI_FNCODE_DEFINEBYPOS 65                          /* OCIDefineByPos */
#define OCI_FNCODE_BINDBYPOS 66                              /* OCIBindByPos */
#define OCI_FNCODE_BINDBYNAME 67                            /* OCIBindByName */
#define OCI_FNCODE_LOBASSIGN  68                             /* OCILobAssign */
#define OCI_FNCODE_LOBISEQUAL  69                           /* OCILobIsEqual */
#define OCI_FNCODE_LOBISINIT  70                      /* OCILobLocatorIsInit */
/* 71 was lob locator size in beta2 */
#define OCI_FNCODE_LOBENABLEBUFFERING  71           /* OCILobEnableBuffering */
#define OCI_FNCODE_LOBCHARSETID  72                       /* OCILobCharSetID */
#define OCI_FNCODE_LOBCHARSETFORM  73                   /* OCILobCharSetForm */
#define OCI_FNCODE_LOBFILESETNAME  74                   /* OCILobFileSetName */
#define OCI_FNCODE_LOBFILEGETNAME  75                   /* OCILobFileGetName */
#define OCI_FNCODE_LOGON 76                                      /* OCILogon */
#define OCI_FNCODE_LOGOFF 77                                    /* OCILogoff */
#define OCI_FNCODE_LOBDISABLEBUFFERING 78          /* OCILobDisableBuffering */
#define OCI_FNCODE_LOBFLUSHBUFFER 79                    /* OCILobFlushBuffer */
#define OCI_FNCODE_LOBLOADFROMFILE 80                  /* OCILobLoadFromFile */

#define OCI_FNCODE_LOBOPEN  81                                 /* OCILobOpen */
#define OCI_FNCODE_LOBCLOSE  82                               /* OCILobClose */
#define OCI_FNCODE_LOBISOPEN  83                             /* OCILobIsOpen */
#define OCI_FNCODE_LOBFILEISOPEN  84                     /* OCILobFileIsOpen */
#define OCI_FNCODE_LOBFILEEXISTS  85                     /* OCILobFileExists */
#define OCI_FNCODE_LOBFILECLOSEALL  86                 /* OCILobFileCloseAll */
#define OCI_FNCODE_LOBCREATETEMP  87                /* OCILobCreateTemporary */
#define OCI_FNCODE_LOBFREETEMP  88                    /* OCILobFreeTemporary */
#define OCI_FNCODE_LOBISTEMP  89                        /* OCILobIsTemporary */

#define OCI_FNCODE_AQENQ  90                                     /* OCIAQEnq */
#define OCI_FNCODE_AQDEQ  91                                     /* OCIAQDeq */
#define OCI_FNCODE_RESET  92                                     /* OCIReset */
#define OCI_FNCODE_SVCCTXTOLDA  93                         /* OCISvcCtxToLda */
#define OCI_FNCODE_LOBLOCATORASSIGN 94                /* OCILobLocatorAssign */

#define OCI_FNCODE_UBINDBYNAME 95

#define OCI_FNCODE_AQLISTEN  96				      /* OCIAQListen */

#define OCI_FNCODE_SVC2HST 97                                    /* reserved */
#define OCI_FNCODE_SVCRH   98                                    /* reserved */
                           /* 97 and 98 are reserved for Oracle internal use */

#define OCI_FNCODE_TRANSMULTIPREPARE   99            /* OCITransMultiPrepare */
#define OCI_FNCODE_MAXFCN 99                    /* maximum OCI function code */


/*---------------------------------------------------------------------------*/

/*-----------------------Handle Definitions----------------------------------*/
typedef struct OCIEnv           OCIEnv;            /* OCI environment handle */
typedef struct OCIError         OCIError;                /* OCI error handle */
typedef struct OCISvcCtx        OCISvcCtx;             /* OCI service handle */
typedef struct OCIStmt          OCIStmt;             /* OCI statement handle */
typedef struct OCIBind          OCIBind;                  /* OCI bind handle */
typedef struct OCIDefine        OCIDefine;              /* OCI Define handle */
typedef struct OCIDescribe      OCIDescribe;          /* OCI Describe handle */
typedef struct OCIServer        OCIServer;              /* OCI Server handle */
typedef struct OCISession       OCISession;     /* OCI Authentication handle */
typedef struct OCIComplexObject OCIComplexObject;          /* OCI COR handle */
typedef struct OCITrans         OCITrans;          /* OCI Transaction handle */
typedef struct OCISecurity      OCISecurity;          /* OCI Security handle */
typedef struct OCISubscription  OCISubscription;      /* subscription handle */

/*-----------------------Descriptor Definitions------------------------------*/
typedef struct OCISnapshot      OCISnapshot;      /* OCI snapshot descriptor */
typedef struct OCIResult        OCIResult;      /* OCI Result Set Descriptor */
typedef struct OCILobLocator    OCILobLocator; /* OCI Lob Locator descriptor */
typedef struct OCIParam         OCIParam;        /* OCI PARameter descriptor */
typedef struct OCIComplexObjectComp OCIComplexObjectComp;
                                                       /* OCI COR descriptor */
typedef struct OCIRowid OCIRowid;                    /* OCI ROWID descriptor */

typedef struct OCIDateTime OCIDateTime;           /* OCI DateTime descriptor */
typedef struct OCIInterval OCIInterval;           /* OCI Interval descriptor */

typedef struct OCIUcb 		OCIUcb;      /* OCI User Callback descriptor */

/*-------------------------- AQ Descriptors ---------------------------------*/
typedef struct OCIAQEnqOptions    OCIAQEnqOptions; /* AQ Enqueue Options hdl */
typedef struct OCIAQDeqOptions    OCIAQDeqOptions; /* AQ Dequeue Options hdl */
typedef struct OCIAQMsgProperties OCIAQMsgProperties;  /* AQ Mesg Properties */
typedef struct OCIAQAgent	  OCIAQAgent;	      /* AQ Agent descriptor */
typedef struct OCIAQNfyDescriptor OCIAQNfyDescriptor;	/* AQ Nfy descriptor */
/*---------------------------------------------------------------------------*/
 
/* Lob typedefs for Pro*C */
typedef struct OCILobLocator OCIClobLocator;    /* OCI Character LOB Locator */
typedef struct OCILobLocator OCIBlobLocator;       /* OCI Binary LOB Locator */
typedef struct OCILobLocator OCIBFileLocator; /* OCI Binary LOB File Locator */
/*---------------------------------------------------------------------------*/

/* Undefined value for tz in interval types*/
#define OCI_INTHR_UNK 24

  /* These defined adjustment values */
#define OCI_ADJUST_UNK            10
#define OCI_ORACLE_DATE           0
#define OCI_ANSI_DATE             1

/*------------------------ Lob-specific Definitions -------------------------*/

/*
 * ociloff - OCI Lob OFFset
 *
 * The offset in the lob data.  The offset is specified in terms of bytes for
 * BLOBs and BFILes.  Character offsets are used for CLOBs, NCLOBs.
 * The maximum size of internal lob data is 4 gigabytes.  FILE LOB 
 * size is limited by the operating system.
 */
typedef ub4 OCILobOffset;

/*
 * ocillen - OCI Lob LENgth (of lob data)
 *
 * Specifies the length of lob data in bytes for BLOBs and BFILes and in 
 * characters for CLOBs, NCLOBs.  The maximum length of internal lob
 * data is 4 gigabytes.  The length of FILE LOBs is limited only by the
 * operating system.
 */
typedef ub4 OCILobLength;
/*
 * ocilmo - OCI Lob open MOdes
 *
 * The mode specifies the planned operations that will be performed on the
 * FILE lob data.  The FILE lob can be opened in read-only mode only.
 * 
 * In the future, we may include read/write, append and truncate modes.  Append
 * is equivalent to read/write mode except that the FILE is positioned for
 * writing to the end.  Truncate is equivalent to read/write mode except that
 * the FILE LOB data is first truncated to a length of 0 before use.
 */
enum OCILobMode
{
  OCI_LOBMODE_READONLY = 1,                                     /* read-only */
  OCI_LOBMODE_READWRITE = 2             /* read_write for internal lobs only */
};
typedef enum OCILobMode OCILobMode;

/*---------------------------------------------------------------------------*/


/*----------------------------Piece Definitions------------------------------*/

/* if ocidef.h is being included in the app, ocidef.h should precede oci.h */

/* 
 * since clients may  use oci.h, ocidef.h and ocidfn.h the following defines
 * need to be guarded, usually internal clients
 */

#ifndef OCI_FLAGS
#define OCI_FLAGS
#define OCI_ONE_PIECE 0                                         /* one piece */
#define OCI_FIRST_PIECE 1                                 /* the first piece */
#define OCI_NEXT_PIECE 2                          /* the next of many pieces */
#define OCI_LAST_PIECE 3                                   /* the last piece */
#endif
/*---------------------------------------------------------------------------*/

/*--------------------------- FILE open modes -------------------------------*/
#define OCI_FILE_READONLY 1             /* readonly mode open for FILE types */
/*---------------------------------------------------------------------------*/
/*--------------------------- LOB open modes --------------------------------*/
#define OCI_LOB_READONLY 1              /* readonly mode open for ILOB types */
#define OCI_LOB_READWRITE 2                /* read write mode open for ILOBs */

/*----------------------- LOB Buffering Flush Flags -------------------------*/
#define OCI_LOB_BUFFER_FREE   1 
#define OCI_LOB_BUFFER_NOFREE 2
/*---------------------------------------------------------------------------*/

/*--------------------------- OCI Statement Types ---------------------------*/

#define  OCI_STMT_SELECT  1                              /* select statement */
#define  OCI_STMT_UPDATE  2                              /* update statement */
#define  OCI_STMT_DELETE  3                              /* delete statement */
#define  OCI_STMT_INSERT  4                              /* Insert Statement */
#define  OCI_STMT_CREATE  5                              /* create statement */
#define  OCI_STMT_DROP    6                                /* drop statement */
#define  OCI_STMT_ALTER   7                               /* alter statement */
#define  OCI_STMT_BEGIN   8                   /* begin ... (pl/sql statement)*/
#define  OCI_STMT_DECLARE 9                /* declare .. (pl/sql statement ) */
/*---------------------------------------------------------------------------*/

/*--------------------------- OCI Parameter Types ---------------------------*/
#define OCI_PTYPE_UNK           0                               /* unknown   */
#define OCI_PTYPE_TABLE		1                               /* table     */
#define OCI_PTYPE_VIEW		2                               /* view      */
#define OCI_PTYPE_PROC		3                               /* procedure */
#define OCI_PTYPE_FUNC		4                               /* function  */
#define OCI_PTYPE_PKG		5                               /* package   */
#define OCI_PTYPE_TYPE          6                       /* user-defined type */
#define OCI_PTYPE_SYN		7                               /* synonym   */
#define OCI_PTYPE_SEQ		8                               /* sequence  */
#define OCI_PTYPE_COL		9                               /* column    */
#define OCI_PTYPE_ARG		10                              /* argument  */
#define OCI_PTYPE_LIST		11                              /* list      */
#define OCI_PTYPE_TYPE_ATTR     12          /* user-defined type's attribute */
#define OCI_PTYPE_TYPE_COLL     13              /* collection type's element */
#define OCI_PTYPE_TYPE_METHOD   14             /* user-defined type's method */
#define OCI_PTYPE_TYPE_ARG      15    /* user-defined type method's argument */
#define OCI_PTYPE_TYPE_RESULT   16      /* user-defined type method's result */
#define OCI_PTYPE_SCHEMA	17                                 /* schema */
#define OCI_PTYPE_DATABASE      18                               /* database */
/*---------------------------------------------------------------------------*/

/*----------------------------- OCI List Types ------------------------------*/
#define OCI_LTYPE_UNK           0                               /* unknown   */
#define OCI_LTYPE_COLUMN        1                             /* column list */
#define OCI_LTYPE_ARG_PROC      2                 /* procedure argument list */
#define OCI_LTYPE_ARG_FUNC      3                  /* function argument list */
#define OCI_LTYPE_SUBPRG        4                         /* subprogram list */
#define OCI_LTYPE_TYPE_ATTR     5                          /* type attribute */
#define OCI_LTYPE_TYPE_METHOD   6                             /* type method */
#define OCI_LTYPE_TYPE_ARG_PROC 7    /* type method w/o result argument list */
#define OCI_LTYPE_TYPE_ARG_FUNC 8      /* type method w/result argument list */
#define OCI_LTYPE_SCH_OBJ       9                      /* schema object list */
#define OCI_LTYPE_DB_SCH        10                   /* database schema list */

/*---------------------------------------------------------------------------*/

/*-------------------------- Memory Cartridge Services ---------------------*/
#define OCI_MEMORY_CLEARED  1

/*-------------------------- Pickler Cartridge Services ---------------------*/
typedef struct OCIPicklerTdsCtx OCIPicklerTdsCtx;
typedef struct OCIPicklerTds OCIPicklerTds;
typedef struct OCIPicklerImage OCIPicklerImage;
typedef struct OCIPicklerFdo OCIPicklerFdo;
typedef ub4 OCIPicklerTdsElement;

/*---------------------------------------------------------------------------*/

/*--------------------------- User Callback Constants -----------------------*/
#define OCI_UCBTYPE_ENTRY	1                          /* entry callback */
#define OCI_UCBTYPE_EXIT	2                           /* exit callback */
#define OCI_UCBTYPE_REPLACE	3                    /* replacement callback */

/*---------------------------------------------------------------------------*/

/*--------------------- NLS service type and constance ----------------------*/
#define OCI_NLS_DAYNAME1      1                    /* Native name for Monday */
#define OCI_NLS_DAYNAME2      2                   /* Native name for Tuesday */
#define OCI_NLS_DAYNAME3      3                 /* Native name for Wednesday */
#define OCI_NLS_DAYNAME4      4                  /* Native name for Thursday */
#define OCI_NLS_DAYNAME5      5                    /* Native name for Friday */
#define OCI_NLS_DAYNAME6      6              /* Native name for for Saturday */
#define OCI_NLS_DAYNAME7      7                /* Native name for for Sunday */
#define OCI_NLS_ABDAYNAME1    8        /* Native abbreviated name for Monday */
#define OCI_NLS_ABDAYNAME2    9       /* Native abbreviated name for Tuesday */
#define OCI_NLS_ABDAYNAME3    10    /* Native abbreviated name for Wednesday */
#define OCI_NLS_ABDAYNAME4    11     /* Native abbreviated name for Thursday */
#define OCI_NLS_ABDAYNAME5    12       /* Native abbreviated name for Friday */
#define OCI_NLS_ABDAYNAME6    13 /* Native abbreviated name for for Saturday */
#define OCI_NLS_ABDAYNAME7    14   /* Native abbreviated name for for Sunday */
#define OCI_NLS_MONTHNAME1    15                  /* Native name for January */
#define OCI_NLS_MONTHNAME2    16                 /* Native name for February */
#define OCI_NLS_MONTHNAME3    17                    /* Native name for March */
#define OCI_NLS_MONTHNAME4    18                    /* Native name for April */
#define OCI_NLS_MONTHNAME5    19                      /* Native name for May */
#define OCI_NLS_MONTHNAME6    20                     /* Native name for June */
#define OCI_NLS_MONTHNAME7    21                     /* Native name for July */
#define OCI_NLS_MONTHNAME8    22                   /* Native name for August */
#define OCI_NLS_MONTHNAME9    23                /* Native name for September */
#define OCI_NLS_MONTHNAME10   24                  /* Native name for October */
#define OCI_NLS_MONTHNAME11   25                 /* Native name for November */
#define OCI_NLS_MONTHNAME12   26                 /* Native name for December */
#define OCI_NLS_ABMONTHNAME1  27      /* Native abbreviated name for January */
#define OCI_NLS_ABMONTHNAME2  28     /* Native abbreviated name for February */
#define OCI_NLS_ABMONTHNAME3  29        /* Native abbreviated name for March */
#define OCI_NLS_ABMONTHNAME4  30        /* Native abbreviated name for April */
#define OCI_NLS_ABMONTHNAME5  31          /* Native abbreviated name for May */
#define OCI_NLS_ABMONTHNAME6  32         /* Native abbreviated name for June */
#define OCI_NLS_ABMONTHNAME7  33         /* Native abbreviated name for July */
#define OCI_NLS_ABMONTHNAME8  34       /* Native abbreviated name for August */
#define OCI_NLS_ABMONTHNAME9  35    /* Native abbreviated name for September */
#define OCI_NLS_ABMONTHNAME10 36      /* Native abbreviated name for October */
#define OCI_NLS_ABMONTHNAME11 37     /* Native abbreviated name for November */
#define OCI_NLS_ABMONTHNAME12 38     /* Native abbreviated name for December */
#define OCI_NLS_YES           39   /* Native string for affirmative response */
#define OCI_NLS_NO            40                 /* Native negative response */
#define OCI_NLS_AM            41           /* Native equivalent string of AM */
#define OCI_NLS_PM            42           /* Native equivalent string of PM */
#define OCI_NLS_AD            43           /* Native equivalent string of AD */
#define OCI_NLS_BC            44           /* Native equivalent string of BC */
#define OCI_NLS_DECIMAL       45                        /* decimal character */
#define OCI_NLS_GROUP         46                          /* group separator */
#define OCI_NLS_DEBIT         47                   /* Native symbol of debit */
#define OCI_NLS_CREDIT        48                  /* Native sumbol of credit */
#define OCI_NLS_DATEFORMAT    49                       /* Oracle date format */
#define OCI_NLS_INT_CURRENCY  50            /* International currency symbol */
#define OCI_NLS_LOC_CURRENCY  51                   /* Locale currency symbol */
#define OCI_NLS_LANGUAGE      52                            /* Language name */
#define OCI_NLS_ABLANGUAGE    53           /* Abbreviation for language name */
#define OCI_NLS_TERRITORY     54                           /* Territory name */
#define OCI_NLS_CHARACTER_SET 55                       /* Character set name */
#define OCI_NLS_LINGUISTIC_NAME    56                     /* Linguistic name */
#define OCI_NLS_CALENDAR      57                            /* Calendar name */
#define OCI_NLS_DUAL_CURRENCY 78                     /* Dual currency symbol */

#define OCI_NLS_MAXBUFSZ   100 /* Max buffer size may need for OCINlsGetInfo */

#define OCI_NLS_BINARY            0x1           /* for the binary comparison */
#define OCI_NLS_LINGUISTIC        0x2           /* for linguistic comparison */
#define OCI_NLS_CASE_INSENSITIVE  0x10    /* for case-insensitive comparison */

#define OCI_NLS_UPPERCASE         0x20               /* convert to uppercase */
#define OCI_NLS_LOWERCASE         0x40               /* convert to lowercase */

typedef struct OCIMsg  OCIMsg;
typedef ub4            OCIWchar;


/*--------------------------------------------------------------------------- 
                     PRIVATE TYPES AND CONSTANTS 
  ---------------------------------------------------------------------------*/
 
/* None */

/*--------------------------------------------------------------------------- 
                           PUBLIC FUNCTIONS 
  ---------------------------------------------------------------------------*/

/* see ociap.h or ocikp.h */
 
/*--------------------------------------------------------------------------- 
                          PRIVATE FUNCTIONS 
  ---------------------------------------------------------------------------*/

/* None */

 
#endif                                              /* OCI_ORACLE */




 /// internal DATE representation
struct OCIDateTime {
ub1 century;
ub1 year;
ub1 month;
ub1 day;
ub1 hour;
ub1 minute;
ub1 second;
};





#ifdef __cplusplus
}
#endif /* __cplusplus */





#ifndef OCI_ORACLE
# define OCI_ORACLE


 
/*--------------------------------------------------------------------------- 
                     PUBLIC TYPES AND CONSTANTS 
  ---------------------------------------------------------------------------*/

/*-----------------------------Modes ----------------------------------------*/
#define OCI_DEFAULT  0x00 /* the default value for parameters and attributes */
#define OCI_THREADED 0x01      /* the application is in threaded environment */
#define OCI_OBJECT   0x02        /* the application is in object environment */
#define OCI_NON_BLOCKING 0x04              /* non blocking mode of operation */
#define OCI_ENV_NO_MUTEX 0x08 /* the environment handle will not be protected
				 by a mutex internally */

/*-----------------------------Handle Types----------------------------------*/
                                           /* handle types range from 1 - 49 */
#define OCI_HTYPE_FIRST 1                      /* start value of handle type */
#define OCI_HTYPE_ENV 1                                /* environment handle */
#define OCI_HTYPE_ERROR 2                                    /* error handle */
#define OCI_HTYPE_SVCCTX 3                                 /* service handle */
#define OCI_HTYPE_STMT 4                                 /* statement handle */
#define OCI_HTYPE_BIND 5                                      /* bind handle */
#define OCI_HTYPE_DEFINE 6                                  /* define handle */
#define OCI_HTYPE_DESCRIBE 7                              /* describe handle */
#define OCI_HTYPE_SERVER 8                                  /* server handle */
#define OCI_HTYPE_SESSION 9                         /* authentication handle */
#define OCI_HTYPE_TRANS 10                             /* transaction handle */
#define OCI_HTYPE_COMPLEXOBJECT 11        /* complex object retrieval handle */
#define OCI_HTYPE_SECURITY 12                             /* security handle */
#define OCI_HTYPE_LAST 12                     /* last value of a handle type */
/*---------------------------------------------------------------------------*/


/*-------------------------Descriptor Types----------------------------------*/
                                    /* descriptor values range from 50 - 255 */
#define OCI_DTYPE_FIRST 50                 /* start value of descriptor type */
#define OCI_DTYPE_LOB 50                                     /* lob  locator */
#define OCI_DTYPE_SNAP 51                             /* snapshot descriptor */
#define OCI_DTYPE_RSET 52                           /* result set descriptor */
#define OCI_DTYPE_PARAM 53  /* a parameter descriptor obtained from ocigparm */
#define OCI_DTYPE_ROWID  54                              /* rowid descriptor */
#define OCI_DTYPE_COMPLEXOBJECTCOMP  55
                                      /* complex object retrieval descriptor */
#define OCI_DTYPE_FILE 56                                /* File Lob locator */
#define	OCI_DTYPE_AQENQ_OPTIONS 57			  /* enqueue options */
#define	OCI_DTYPE_AQDEQ_OPTIONS 58			  /* dequeue options */
#define OCI_DTYPE_AQMSG_PROPERTIES 59		       /* message properties */
#define OCI_DTYPE_AQAGENT 60					 /* aq agent */
#define OCI_DTYPE_LAST 60                 /* last value of a descriptor type */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/

/*-------------------------Object Ptr Types----------------------------------*/
#define OCI_OTYPE_NAME 1				      /* object name */
#define OCI_OTYPE_REF  2				       /* REF to TDO */
#define OCI_OTYPE_PTR  3				       /* PTR to TDO */
/*---------------------------------------------------------------------------*/

/*-----------------------------Attribute Types-------------------------------*/
#define OCI_ATTR_FNCODE  1                          /* the OCI function code */
#define OCI_ATTR_OBJECT   2 /* is the environment initialized in object mode */
#define OCI_ATTR_NONBLOCKING_MODE  3                    /* non blocking mode */
#define OCI_ATTR_SQLCODE  4                                  /* the SQL verb */
#define OCI_ATTR_ENV  5                            /* the environment handle */
#define OCI_ATTR_SERVER 6                               /* the server handle */
#define OCI_ATTR_SESSION 7                        /* the user session handle */
#define OCI_ATTR_TRANS   8                         /* the transaction handle */
#define OCI_ATTR_ROW_COUNT   9                  /* the rows processed so far */
#define OCI_ATTR_SQLFNCODE 10               /* the SQL verb of the statement */
#define OCI_ATTR_PREFETCH_ROWS  11    /* sets the number of rows to prefetch */
#define OCI_ATTR_NESTED_PREFETCH_ROWS 12 /* the prefetch rows of nested table*/
#define OCI_ATTR_PREFETCH_MEMORY 13         /* memory limit for rows fetched */
#define OCI_ATTR_NESTED_PREFETCH_MEMORY 14   /* memory limit for nested rows */
#define OCI_ATTR_CHAR_COUNT  15 
                    /* this specifies the bind and define size in characters */
#define OCI_ATTR_PDSCL   16                          /* packed decimal scale */
#define OCI_ATTR_PDFMT   17                         /* packed decimal format */
#define OCI_ATTR_PARAM_COUNT 18       /* number of column in the select list */
#define OCI_ATTR_ROWID   19                                     /* the rowid */
#define OCI_ATTR_CHARSET  20                      /* the character set value */
#define OCI_ATTR_NCHAR   21                                    /* NCHAR type */
#define OCI_ATTR_USERNAME 22                           /* username attribute */
#define OCI_ATTR_PASSWORD 23                           /* password attribute */
#define OCI_ATTR_STMT_TYPE   24                            /* statement type */
#define OCI_ATTR_INTERNAL_NAME   25             /* user friendly global name */
#define OCI_ATTR_EXTERNAL_NAME   26      /* the internal name for global txn */
#define OCI_ATTR_XID     27           /* XOPEN defined global transaction id */
#define OCI_ATTR_TRANS_LOCK 28                                            /* */
#define OCI_ATTR_TRANS_NAME 29    /* string to identify a global transaction */
#define OCI_ATTR_HEAPALLOC 30                /* memory allocated on the heap */
#define OCI_ATTR_CHARSET_ID 31                           /* Character Set ID */
#define OCI_ATTR_CHARSET_FORM 32                       /* Character Set Form */
#define OCI_ATTR_MAXDATA_SIZE 33       /* Maximumsize of data on the server  */
#define OCI_ATTR_CACHE_OPT_SIZE 34              /* object cache optimal size */
#define OCI_ATTR_CACHE_MAX_SIZE 35   /* object cache maximum size percentage */
#define OCI_ATTR_PINOPTION 36             /* object cache default pin option */
#define OCI_ATTR_ALLOC_DURATION 37
                                 /* object cache default allocation duration */
#define OCI_ATTR_PIN_DURATION 38        /* object cache default pin duration */
#define OCI_ATTR_FDO          39       /* Format Descriptor object attribute */
#define OCI_ATTR_POSTPROCESSING_CALLBACK 40
                                         /* Callback to process outbind data */
#define OCI_ATTR_POSTPROCESSING_CONTEXT 41
                                 /* Callback context to process outbind data */
#define OCI_ATTR_ROWS_RETURNED 42
               /* Number of rows returned in current iter - for Bind handles */
#define OCI_ATTR_FOCBK        43              /* Failover Callback attribute */
#define OCI_ATTR_IN_V8_MODE   44 /* is the server/service context in V8 mode */
#define OCI_ATTR_LOBEMPTY     45                              /* empty lob ? */
#define OCI_ATTR_SESSLANG     46                  /* session language handle */

/* ----------------------- AQ Attribute Types -------------------------------*/
/* ----------------------- Enqueue Options ----------------------------------*/
#define OCI_ATTR_VISIBILITY		47		       /* visibility */
#define OCI_ATTR_RELATIVE_MSGID		48  	      /* relative message id */
#define OCI_ATTR_SEQUENCE_DEVIATION	49	       /* sequence deviation */

/* ----------------------- Dequeue Options ----------------------------------*/
#define OCI_ATTR_CONSUMER_NAME		50		    /* consumer name */
#define OCI_ATTR_DEQ_MODE		51		     /* dequeue mode */
#define OCI_ATTR_NAVIGATION		52		       /* navigation */
#define OCI_ATTR_WAIT			53			     /* wait */
#define OCI_ATTR_DEQ_MSGID		54	       /* dequeue message id */

/* ----------------------- Message Properties -------------------------------*/
#define OCI_ATTR_PRIORITY		55			 /* priority */
#define OCI_ATTR_DELAY			56			    /* delay */
#define OCI_ATTR_EXPIRATION		57		       /* expiration */
#define OCI_ATTR_CORRELATION		58		   /* correlation id */
#define OCI_ATTR_ATTEMPTS		59		    /* # of attempts */
#define OCI_ATTR_RECIPIENT_LIST		60		   /* recipient list */
#define OCI_ATTR_EXCEPTION_QUEUE	61	     /* exception queue name */
#define OCI_ATTR_ENQ_TIME		62 /* enqueue time (only OCIAttrGet) */
#define OCI_ATTR_MSG_STATE		63/* message state (only OCIAttrGet) */

/* ----------------------- AQ Agent -----------------------------------------*/
#define OCI_ATTR_AGENT_NAME		64		       /* agent name */
#define OCI_ATTR_AGENT_ADDRESS		65		    /* agent address */
#define OCI_ATTR_AGENT_PROTOCOL		66		   /* agent protocol */

/*-------------------------Parameter Attribute Types-------------------------*/

#define OCI_ATTR_UNK              101                   /* unknown attribute */
#define OCI_ATTR_NUM_COLS         102                   /* number of columns */
#define OCI_ATTR_LIST_COLUMNS     103        /* parameter of the column list */
#define OCI_ATTR_RDBA             104           /* DBA of the segment header */
#define OCI_ATTR_CLUSTERED        105      /* whether the table is clustered */
#define OCI_ATTR_PARTITIONED      106    /* whether the table is partitioned */
#define OCI_ATTR_INDEX_ONLY       107     /* whether the table is index only */
#define OCI_ATTR_LIST_ARGUMENTS   108      /* parameter of the argument list */
#define OCI_ATTR_LIST_SUBPROGRAMS 109    /* parameter of the subprogram list */
#define OCI_ATTR_REF_TDO          110          /* REF to the type descriptor */
#define OCI_ATTR_LINK             111              /* the database link name */
#define OCI_ATTR_MIN              112                       /* minimum value */
#define OCI_ATTR_MAX              113                       /* maximum value */
#define OCI_ATTR_INCR             114                     /* increment value */
#define OCI_ATTR_CACHE            115   /* number of sequence numbers cached */
#define OCI_ATTR_ORDER            116     /* whether the sequence is ordered */
#define OCI_ATTR_HW_MARK          117                     /* high-water mark */
#define OCI_ATTR_TYPE_SCHEMA      118                  /* type's schema name */
#define OCI_ATTR_TIMESTAMP        119             /* timestamp of the object */
#define OCI_ATTR_NUM_ATTRS        120                /* number of sttributes */
#define OCI_ATTR_NUM_PARAMS       121                /* number of parameters */
#define OCI_ATTR_OBJID            122       /* object id for a table or view */
#define OCI_ATTR_PTYPE            123           /* type of info described by */
#define OCI_ATTR_PARAM            124                /* parameter descriptor */
#define OCI_ATTR_OVERLOAD_ID      125     /* overload ID for funcs and procs */
#define OCI_ATTR_TABLESPACE       126                    /* table name space */
#define OCI_ATTR_TDO              127                       /* TDO of a type */
#define OCI_ATTR_PARSE_ERROR_OFFSET        128         /* Parse Error offset */
/*-------------------------Credential Types----------------------------------*/
#define OCI_CRED_RDBMS    1                    /* database username/password */
#define OCI_CRED_EXT      2               /* externally provided credentials */
/*---------------------------------------------------------------------------*/

/*------------------------Error Return Values--------------------------------*/
#define OCI_SUCCESS 0                      /* maps to SQL_SUCCESS of SAG CLI */
#define OCI_SUCCESS_WITH_INFO 1             /* maps to SQL_SUCCESS_WITH_INFO */
#define OCI_NO_DATA 100                               /* maps to SQL_NO_DATA */
#define OCI_ERROR -1                                    /* maps to SQL_ERROR */
#define OCI_INVALID_HANDLE -2                  /* maps to SQL_INVALID_HANDLE */
#define OCI_NEED_DATA 99                            /* maps to SQL_NEED_DATA */
#define OCI_STILL_EXECUTING -3123                   /* OCI would block error */
#define OCI_CONTINUE -24200    /* Continue with the body of the OCI function */
/*---------------------------------------------------------------------------*/

/*------------------------Parsing Syntax Types-------------------------------*/
#define OCI_V7_SYNTAX 2                                       /* V7 language */
#define OCI_V8_SYNTAX 3                                       /* V8 language */
#define OCI_NTV_SYNTAX 1    /* Use what so ever is the native lang of server */
                     /* these values must match the values defined in kpul.h */
/*---------------------------------------------------------------------------*/

/*------------------------Scrollable Cursor Options--------------------------*/
#define OCI_FETCH_NEXT 0x02                                      /* next row */
#define OCI_FETCH_FIRST 0x04                  /* first row of the result set */
#define OCI_FETCH_LAST 0x08                /* the last row of the result set */
#define OCI_FETCH_PRIOR 0x10         /* the previous row relative to current */
#define OCI_FETCH_ABSOLUTE 0x20                /* absolute offset from first */
#define OCI_FETCH_RELATIVE 0x40                /* offset relative to current */
/*---------------------------------------------------------------------------*/

/*------------------------Bind and Define Options----------------------------*/
#define OCI_SB2_IND_PTR   0x01                                     /* unused */
#define OCI_DATA_AT_EXEC  0x02                       /* data at execute time */
#define OCI_DYNAMIC_FETCH 0x02                          /* fetch dynamically */
#define OCI_PIECEWISE     0x04                    /* piecewise DMLs or fetch */
/*---------------------------------------------------------------------------*/

/*------------------------Execution Modes------------------------------------*/
#define OCI_BATCH_MODE        0x01  /* batch the oci statement for execution */
#define OCI_EXACT_FETCH       0x02         /* fetch the exact rows specified */
#define OCI_KEEP_FETCH_STATE  0x04                                 /* unused */
#define OCI_SCROLLABLE_CURSOR 0x08                      /* cursor scrollable */
#define OCI_DESCRIBE_ONLY     0x10            /* only describe the statement */
#define OCI_COMMIT_ON_SUCCESS 0x20        /* commit, if successful execution */
/*---------------------------------------------------------------------------*/

/*------------------------Authentication Modes-------------------------------*/
#define OCI_MIGRATE     0x0001                    /* migratable auth context */
#define OCI_SYSDBA      0x0002                   /* for SYSDBA authorization */
#define OCI_SYSOPER     0x0004                  /* for SYSOPER authorization */
#define OCI_PRELIM_AUTH 0x0008              /* for preliminary authorization */
/*---------------------------------------------------------------------------*/

/*------------------------Piece Information----------------------------------*/
#define OCI_PARAM_IN 0x01                                    /* in parameter */
#define OCI_PARAM_OUT 0x02                                  /* out parameter */
/*---------------------------------------------------------------------------*/

/*------------------------ Transaction Start Flags --------------------------*/
/* NOTE: OCI_TRANS_JOIN and OCI_TRANS_NOMIGRATE not supported in 8.0.X       */
#define OCI_TRANS_NEW          0x00000001 /* starts a new transaction branch */
#define OCI_TRANS_JOIN         0x00000002    /* join an existing transaction */
#define OCI_TRANS_RESUME       0x00000004         /* resume this transaction */
#define OCI_TRANS_STARTMASK    0x000000ff

#define OCI_TRANS_READONLY     0x00000100   /* starts a readonly transaction */
#define OCI_TRANS_READWRITE    0x00000200 /* starts a read-write transaction */
#define OCI_TRANS_SERIALIZABLE 0x00000400
                                        /* starts a serializable transaction */
#define OCI_TRANS_ISOLMASK     0x0000ff00

#define OCI_TRANS_LOOSE        0x00010000        /* a loosely coupled branch */
#define OCI_TRANS_TIGHT        0x00020000        /* a tightly coupled branch */
#define OCI_TRANS_TYPEMASK     0x000f0000

#define OCI_TRANS_NOMIGRATE    0x00100000      /* non migratable transaction */

/*---------------------------------------------------------------------------*/

/*------------------------ Transaction End Flags ----------------------------*/
#define OCI_TRANS_TWOPHASE      0x01000000           /* use two phase commit */
/*---------------------------------------------------------------------------*/

/*------------------------- AQ Constants ------------------------------------
 * NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
 * The following constants must match the PL/SQL dbms_aq constants
 * NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE
 */
/* ------------------------- Visibility flags -------------------------------*/
#define OCI_ENQ_IMMEDIATE	1   /* enqueue is an independent transaction */
#define OCI_ENQ_ON_COMMIT	2  /* enqueue is part of current transaction */

/* ----------------------- Dequeue mode flags -------------------------------*/
#define OCI_DEQ_BROWSE		1   /* read message without acquiring a lock */
#define OCI_DEQ_LOCKED		2   /* read and obtain write lock on message */
#define OCI_DEQ_REMOVE		3          /* read the message and delete it */

/* ----------------- Dequeue navigation flags -------------------------------*/
#define OCI_DEQ_FIRST_MSG	 1     /* get first message at head of queue */
#define OCI_DEQ_NEXT_MSG	 3         /* next message that is available */
#define OCI_DEQ_NEXT_TRANSACTION 2    /* get first message of next txn group */

/* --------------------- Message states -------------------------------------*/
#define OCI_MSG_WAITING		1 /* the message delay has not yet completed */
#define OCI_MSG_READY		0    /* the message is ready to be processed */
#define OCI_MSG_PROCESSED	2          /* the message has been processed */
#define OCI_MSG_EXPIRED		3    /* message has moved to exception queue */

/* --------------------- Sequence deviation ---------------------------------*/
#define OCI_ENQ_BEFORE		2  /* enqueue message before another message */
#define OCI_ENQ_TOP		3     /* enqueue message before all messages */

/* ------------------------- Visibility flags -------------------------------*/
#define OCI_DEQ_IMMEDIATE	1   /* dequeue is an independent transaction */
#define OCI_DEQ_ON_COMMIT	2  /* dequeue is part of current transaction */

/* ------------------------ Wait --------------------------------------------*/
#define OCI_DEQ_WAIT_FOREVER 	-1   /* wait forever if no message available */
#define OCI_DEQ_NO_WAIT	 	0  /* do not wait if no message is available */

/* ------------------------ Delay -------------------------------------------*/
#define OCI_MSG_NO_DELAY	0        /* message is available immediately */

/* ------------------------- Expiration -------------------------------------*/
#define OCI_MSG_NO_EXPIRATION -1                /* message will never expire */

/* -------------------------- END AQ Constants ----------------------------- */

/*-----------Object Types **** Not to be Used **** --------------------------*/
/* Deprecated */
#define OCI_OTYPE_UNK           0
#define OCI_OTYPE_TABLE         1
#define OCI_OTYPE_VIEW          2
#define OCI_OTYPE_SYN           3
#define OCI_OTYPE_PROC          4
#define OCI_OTYPE_FUNC          5
#define OCI_OTYPE_PKG           6
#define OCI_OTYPE_STMT          7
/*---------------------------------------------------------------------------*/

/*-----------------------Describe Handle Parameter Attributes ---------------*/
/* Attributes common to Columns and Stored Procs */
#define OCI_ATTR_DATA_SIZE      1                /* maximum size of the data */
#define OCI_ATTR_DATA_TYPE      2     /* the SQL type of the column/argument */
#define OCI_ATTR_DISP_SIZE      3                        /* the display size */
#define OCI_ATTR_NAME           4         /* the name of the column/argument */
#define OCI_ATTR_PRECISION      5                /* precision if number type */
#define OCI_ATTR_SCALE          6                    /* scale if number type */
#define OCI_ATTR_IS_NULL        7                            /* is it null ? */
#define OCI_ATTR_TYPE_NAME      8
  /* name of the named data type or a package name for package private types */
#define OCI_ATTR_SCHEMA_NAME    9             /* the schema name */
#define OCI_ATTR_SUB_NAME       10      /* type name if package private type */
#define OCI_ATTR_POSITION       11
                    /* relative position of col/arg in the list of cols/args */

/* complex object retrieval parameter attributes */
#define OCI_ATTR_COMPLEXOBJECTCOMP_TYPE		50 
#define OCI_ATTR_COMPLEXOBJECTCOMP_TYPE_LEVEL	51
#define OCI_ATTR_COMPLEXOBJECT_LEVEL		52
#define OCI_ATTR_COMPLEXOBJECT_COLL_OUTOFLINE   53

/* Only Columns */
#define OCI_ATTR_DISP_NAME      100                      /* the display name */

/*Only Stored Procs */
#define OCI_ATTR_OVERLOAD       210           /* is this position overloaded */
#define OCI_ATTR_LEVEL          211            /* level for structured types */
#define OCI_ATTR_HAS_DEFAULT    212                   /* has a default value */
#define OCI_ATTR_IOMODE         213                         /* in, out inout */
#define OCI_ATTR_RADIX          214                       /* returns a radix */
#define OCI_ATTR_NUM_ARGS       215             /* total number of arguments */

/* only named type attributes */
#define OCI_ATTR_TYPECODE                  216       /* object or collection */
#define OCI_ATTR_COLLECTION_TYPECODE       217     /* varray or nested table */
#define OCI_ATTR_VERSION                   218      /* user assigned version */
#define OCI_ATTR_IS_INCOMPLETE_TYPE        219 /* is this an incomplete type */
#define OCI_ATTR_IS_SYSTEM_TYPE            220              /* a system type */
#define OCI_ATTR_IS_PREDEFINED_TYPE        221          /* a predefined type */
#define OCI_ATTR_IS_TRANSIENT_TYPE         222           /* a transient type */
#define OCI_ATTR_IS_SYSTEM_GENERATED_TYPE  223      /* system generated type */
#define OCI_ATTR_HAS_NESTED_TABLE          224 /* contains nested table attr */
#define OCI_ATTR_HAS_LOB                   225        /* has a lob attribute */
#define OCI_ATTR_HAS_FILE                  226       /* has a file attribute */
#define OCI_ATTR_COLLECTION_ELEMENT        227 /* has a collection attribute */
#define OCI_ATTR_NUM_TYPE_ATTRS            228  /* number of attribute types */
#define OCI_ATTR_LIST_TYPE_ATTRS           229    /* list of type attributes */
#define OCI_ATTR_NUM_TYPE_METHODS          230     /* number of type methods */
#define OCI_ATTR_LIST_TYPE_METHODS         231       /* list of type methods */
#define OCI_ATTR_MAP_METHOD                232         /* map method of type */
#define OCI_ATTR_ORDER_METHOD              233       /* order method of type */

/* only collection element */
#define OCI_ATTR_NUM_ELEMS                 234         /* number of elements */

/* only type methods */
#define OCI_ATTR_ENCAPSULATION             235        /* encapsulation level */
#define OCI_ATTR_IS_SELFISH                236             /* method selfish */
#define OCI_ATTR_IS_VIRTUAL                237                    /* virtual */
#define OCI_ATTR_IS_INLINE                 238                     /* inline */
#define OCI_ATTR_IS_CONSTANT               239                   /* constant */
#define OCI_ATTR_HAS_RESULT                240                 /* has result */
#define OCI_ATTR_IS_CONSTRUCTOR            241                /* constructor */
#define OCI_ATTR_IS_DESTRUCTOR             242                 /* destructor */
#define OCI_ATTR_IS_OPERATOR               243                   /* operator */
#define OCI_ATTR_IS_MAP                    244               /* a map method */
#define OCI_ATTR_IS_ORDER                  245               /* order method */
#define OCI_ATTR_IS_RNDS                   246  /* read no data state method */
#define OCI_ATTR_IS_RNPS                   247      /* read no process state */
#define OCI_ATTR_IS_WNDS                   248 /* write no data state method */
#define OCI_ATTR_IS_WNPS                   249     /* write no process state */

/* describing public objects */
#define OCI_ATTR_DESC_PUBLIC               250              /* public object */
/*---------------------------------------------------------------------------*/

/*---------------------------OCIPasswordChange-------------------------------*/
#define OCI_AUTH         0x08        /* Change the password but do not login */


/*------------------------Other Constants------------------------------------*/
#define OCI_MAX_FNS   100                     /* max number of OCI Functions */
#define OCI_SQLSTATE_SIZE 5  
#define OCI_ERROR_MAXMSG_SIZE   1024         /* max size of an error message */
#define OCI_LOBMAXSIZE MINUB4MAXVAL                 /* maximum lob data size */
#define OCI_ROWID_LEN             23 
/*---------------------------------------------------------------------------*/

/*------------------------ Fail Over Events ---------------------------------*/
#define OCI_FO_END          0x00000001
#define OCI_FO_ABORT        0x00000002   
#define OCI_FO_REAUTH       0x00000004
#define OCI_FO_BEGIN        0x00000008 
#define OCI_FO_ERROR        0x00000010
/*---------------------------------------------------------------------------*/

/*------------------------- Fail Over Types ---------------------------------*/
#define OCI_FO_NONE           0x00000001
#define OCI_FO_SESSION        0x00000002
#define OCI_FO_SELECT         0x00000004
#define OCI_FO_TXNAL          0x00000008
/*---------------------------------------------------------------------------*/

/*-----------------------Function Codes--------------------------------------*/
#define OCI_FNCODE_INITIALIZE     1                         /* OCIInitialize */
#define OCI_FNCODE_HANDLEALLOC  2                          /* OCIHandleAlloc */
#define OCI_FNCODE_HANDLEFREE  3                            /* OCIHandleFree */
#define OCI_FNCODE_DESCRIPTORALLOC  4                  /* OCIDescriptorAlloc */
#define OCI_FNCODE_DESCRIPTORFREE  5                    /* OCIDescriptorFree */
#define OCI_FNCODE_ENVINIT   6                                 /* OCIEnvInit */
#define OCI_FNCODE_SERVERATTACH   7                       /* OCIServerAttach */
#define OCI_FNCODE_SERVERDETACH   8                       /* OCIServerDetach */
/* unused         9 */ 
#define OCI_FNCODE_SESSIONBEGIN  10                       /* OCISessionBegin */
#define OCI_FNCODE_SESSIONEND   11                          /* OCISessionEnd */
#define OCI_FNCODE_PASSWORDCHANGE   12                  /* OCIPasswordChange */
#define OCI_FNCODE_STMTPREPARE   13                        /* OCIStmtPrepare */
                                                      /* unused       14- 16 */
#define OCI_FNCODE_BINDDYNAMIC   17                        /* OCIBindDynamic */
#define OCI_FNCODE_BINDOBJECT  18                           /* OCIBindObject */
                                                                /* 19 unused */
#define OCI_FNCODE_BINDARRAYOFSTRUCT   20            /* OCIBindArrayOfStruct */
#define OCI_FNCODE_STMTEXECUTE  21                         /* OCIStmtExecute */
                                                             /* unused 22-24 */
#define OCI_FNCODE_DEFINEOBJECT  25                       /* OCIDefineObject */
#define OCI_FNCODE_DEFINEDYNAMIC   26                    /* OCIDefineDynamic */
#define OCI_FNCODE_DEFINEARRAYOFSTRUCT  27         /* OCIDefineArrayOfStruct */
#define OCI_FNCODE_STMTFETCH   28                            /* OCIStmtFetch */
#define OCI_FNCODE_STMTGETBIND   29                    /* OCIStmtGetBindInfo */
                                                            /* 30, 31 unused */
#define OCI_FNCODE_DESCRIBEANY  32                         /* OCIDescribeAny */
#define OCI_FNCODE_TRANSSTART  33                           /* OCITransStart */
#define OCI_FNCODE_TRANSDETACH  34                         /* OCITransDetach */
#define OCI_FNCODE_TRANSCOMMIT  35                         /* OCITransCommit */
                                                                /* 36 unused */
#define OCI_FNCODE_ERRORGET   37                              /* OCIErrorGet */
#define OCI_FNCODE_LOBOPENFILE  38                         /* OCILobFileOpen */
#define OCI_FNCODE_LOBCLOSEFILE  39                       /* OCILobFileClose */
                                             /* 40 was LOBCREATEFILE, unused */
                                         /* 41 was OCILobFileDelete, unused  */
#define OCI_FNCODE_LOBCOPY  42                                 /* OCILobCopy */
#define OCI_FNCODE_LOBAPPEND  43                             /* OCILobAppend */
#define OCI_FNCODE_LOBERASE  44                               /* OCILobErase */
#define OCI_FNCODE_LOBLENGTH  45                          /* OCILobGetLength */
#define OCI_FNCODE_LOBTRIM  46                                 /* OCILobTrim */
#define OCI_FNCODE_LOBREAD  47                                 /* OCILobRead */
#define OCI_FNCODE_LOBWRITE  48                               /* OCILobWrite */
                                                                /* 49 unused */
#define OCI_FNCODE_SVCCTXBREAK 50                                /* OCIBreak */
#define OCI_FNCODE_SERVERVERSION  51                     /* OCIServerVersion */
/* unused 52, 53 */
#define OCI_FNCODE_ATTRGET 54                                  /* OCIAttrGet */
#define OCI_FNCODE_ATTRSET 55                                  /* OCIAttrSet */
#define OCI_FNCODE_PARAMSET 56                                /* OCIParamSet */
#define OCI_FNCODE_PARAMGET 57                                /* OCIParamGet */
#define OCI_FNCODE_STMTGETPIECEINFO   58              /* OCIStmtGetPieceInfo */
#define OCI_FNCODE_LDATOSVCCTX 59                          /* OCILdaToSvcCtx */
                                                                /* 60 unused */
#define OCI_FNCODE_STMTSETPIECEINFO   61              /* OCIStmtSetPieceInfo */
#define OCI_FNCODE_TRANSFORGET 62                          /* OCITransForget */
#define OCI_FNCODE_TRANSPREPARE 63                        /* OCITransPrepare */
#define OCI_FNCODE_TRANSROLLBACK  64                     /* OCITransRollback */
#define OCI_FNCODE_DEFINEBYPOS 65                          /* OCIDefineByPos */
#define OCI_FNCODE_BINDBYPOS 66                              /* OCIBindByPos */
#define OCI_FNCODE_BINDBYNAME 67                            /* OCIBindByName */
#define OCI_FNCODE_LOBASSIGN  68                             /* OCILobAssign */
#define OCI_FNCODE_LOBISEQUAL  69                           /* OCILobIsEqual */
#define OCI_FNCODE_LOBISINIT  70                      /* OCILobLocatorIsInit */
/* 71 was lob locator size in beta2 */
#define OCI_FNCODE_LOBENABLEBUFFERING  71           /* OCILobEnableBuffering */
#define OCI_FNCODE_LOBCHARSETID  72                       /* OCILobCharSetID */
#define OCI_FNCODE_LOBCHARSETFORM  73                   /* OCILobCharSetForm */
#define OCI_FNCODE_LOBFILESETNAME  74                   /* OCILobFileSetName */
#define OCI_FNCODE_LOBFILEGETNAME  75                   /* OCILobFileGetName */
#define OCI_FNCODE_LOGON 76                                      /* OCILogon */
#define OCI_FNCODE_LOGOFF 77                                    /* OCILogoff */
#define OCI_FNCODE_LOBDISABLEBUFFERING 78          /* OCILobDisableBuffering */
#define OCI_FNCODE_LOBFLUSHBUFFER 79                    /* OCILobFlushBuffer */
#define OCI_FNCODE_LOBLOADFROMFILE 80                  /* OCILobLoadFromFile */


/*---------------------------------------------------------------------------*/

/*-----------------------Handle Definitions----------------------------------*/
typedef struct OCIEnv           OCIEnv;            /* OCI environment handle */
typedef struct OCIError         OCIError;                /* OCI error handle */
typedef struct OCISvcCtx        OCISvcCtx;             /* OCI service handle */
typedef struct OCIStmt          OCIStmt;             /* OCI statement handle */
typedef struct OCIBind          OCIBind;                  /* OCI bind handle */
typedef struct OCIDefine        OCIDefine;              /* OCI Define handle */
typedef struct OCIDescribe      OCIDescribe;          /* OCI Describe handle */
typedef struct OCIServer        OCIServer;              /* OCI Server handle */
typedef struct OCISession       OCISession;     /* OCI Authentication handle */
typedef struct OCIComplexObject OCIComplexObject;          /* OCI COR handle */
typedef struct OCITrans         OCITrans;          /* OCI Transaction handle */
typedef struct OCISecurity      OCISecurity;          /* OCI Security handle */

/*-----------------------Descriptor Definitions------------------------------*/
typedef struct OCISnapshot      OCISnapshot;      /* OCI snapshot descriptor */
typedef struct OCIResult        OCIResult;      /* OCI Result Set Descriptor */
typedef struct OCILobLocator    OCILobLocator; /* OCI Lob Locator descriptor */
typedef struct OCIParam         OCIParam;        /* OCI PARameter descriptor */
typedef struct OCIComplexObjectComp OCIComplexObjectComp;
                                                       /* OCI COR descriptor */
typedef struct OCIRowid OCIRowid;                      /* OCI ROWID descriptor */

/*-------------------------- AQ Descriptors ---------------------------------*/
typedef struct OCIAQEnqOptions    OCIAQEnqOptions; /* AQ Enqueue Options hdl */
typedef struct OCIAQDeqOptions    OCIAQDeqOptions; /* AQ Dequeue Options hdl */
typedef struct OCIAQMsgProperties OCIAQMsgProperties;  /* AQ Mesg Properties */
typedef struct OCIAQAgent	  OCIAQAgent;	      /* AQ Agent descriptor */
/*---------------------------------------------------------------------------*/
 
/* Lob typedefs for Pro*C */
typedef struct OCILobLocator OCIClobLocator;    /* OCI Character LOB Locator */
typedef struct OCILobLocator OCIBlobLocator;       /* OCI Binary LOB Locator */
typedef struct OCILobLocator OCIBFileLocator; /* OCI Binary LOB File Locator */
/*---------------------------------------------------------------------------*/


/*------------------------ Lob-specific Definitions -------------------------*/

/*
 * ociloff - OCI Lob OFFset
 *
 * The offset in the lob data.  The offset is specified in terms of bytes for
 * BLOBs and BFILes.  Character offsets are used for CLOBs, NCLOBs.
 * The maximum size of internal lob data is 4 gigabytes.  FILE LOB 
 * size is limited by the operating system.
 */
typedef ub4 OCILobOffset;

/*
 * ocillen - OCI Lob LENgth (of lob data)
 *
 * Specifies the length of lob data in bytes for BLOBs and BFILes and in 
 * characters for CLOBs, NCLOBs.  The maximum length of internal lob
 * data is 4 gigabytes.  The length of FILE LOBs is limited only by the
 * operating system.
 */
typedef ub4 OCILobLength;
/*
 * ocilmo - OCI Lob open MOdes
 *
 * The mode specifies the planned operations that will be performed on the
 * FILE lob data.  The FILE lob can be opened in read-only mode only.
 * 
 * In the future, we may include read/write, append and truncate modes.  Append
 * is equivalent to read/write mode except that the FILE is positioned for
 * writing to the end.  Truncate is equivalent to read/write mode except that
 * the FILE LOB data is first truncated to a length of 0 before use.
 */
enum OCILobMode
{
  OCI_LOBMODE_READONLY = 1                                      /* read-only */
};
typedef enum OCILobMode OCILobMode;

/*---------------------------------------------------------------------------*/


/*----------------------------Piece Definitions------------------------------*/

/* if ocidef.h is being included in the app, ocidef.h should precede oci.h */

/* 
 * since clients may  use oci.h, ocidef.h and ocidfn.h the following defines
 * need to be guarded, usually internal clients
 */

#ifndef OCI_FLAGS
#define OCI_FLAGS
#define OCI_ONE_PIECE 0                                         /* one piece */
#define OCI_FIRST_PIECE 1                                 /* the first piece */
#define OCI_NEXT_PIECE 2                          /* the next of many pieces */
#define OCI_LAST_PIECE 3                                   /* the last piece */
#endif
/*---------------------------------------------------------------------------*/

/*--------------------------- FILE open modes -------------------------------*/
#define OCI_FILE_READONLY 1             /* readonly mode open for FILE types */
/*---------------------------------------------------------------------------*/

/*----------------------- LOB Buffering Flush Flags -------------------------*/
#define OCI_LOB_BUFFER_FREE   1 
#define OCI_LOB_BUFFER_NOFREE 2
/*---------------------------------------------------------------------------*/

/*--------------------------- OCI Statement Types ---------------------------*/

#define  OCI_STMT_SELECT  1                              /* select statement */
#define  OCI_STMT_UPDATE  2                              /* update statement */
#define  OCI_STMT_DELETE  3                              /* delete statement */
#define  OCI_STMT_INSERT  4                              /* Insert Statement */
#define  OCI_STMT_CREATE  5                              /* create statement */
#define  OCI_STMT_DROP    6                                /* drop statement */
#define  OCI_STMT_ALTER   7                               /* alter statement */
#define  OCI_STMT_BEGIN   8                   /* begin ... (pl/sql statement)*/
#define  OCI_STMT_DECLARE 9                /* declare .. (pl/sql statement ) */
/*---------------------------------------------------------------------------*/

/*--------------------------- OCI Parameter Types ---------------------------*/
#define OCI_PTYPE_UNK           0                               /* unknown   */
#define OCI_PTYPE_TABLE		1                               /* table     */
#define OCI_PTYPE_VIEW		2                               /* view      */
#define OCI_PTYPE_PROC		3                               /* procedure */
#define OCI_PTYPE_FUNC		4                               /* function  */
#define OCI_PTYPE_PKG		5                               /* package   */
#define OCI_PTYPE_TYPE          6                       /* user-defined type */
#define OCI_PTYPE_SYN		7                               /* synonym   */
#define OCI_PTYPE_SEQ		8                               /* sequence  */
#define OCI_PTYPE_COL		9                               /* column    */
#define OCI_PTYPE_ARG		10                              /* argument  */
#define OCI_PTYPE_LIST		11                              /* list      */
#define OCI_PTYPE_TYPE_ATTR     12          /* user-defined type's attribute */
#define OCI_PTYPE_TYPE_COLL     13              /* collection type's element */
#define OCI_PTYPE_TYPE_METHOD   14             /* user-defined type's method */
#define OCI_PTYPE_TYPE_ARG      15    /* user-defined type method's argument */
#define OCI_PTYPE_TYPE_RESULT   16      /* user-defined type method's result */
/*---------------------------------------------------------------------------*/

/*----------------------------- OCI List Types ------------------------------*/
#define OCI_LTYPE_UNK           0                               /* unknown   */
#define OCI_LTYPE_COLUMN        1                             /* column list */
#define OCI_LTYPE_ARG_PROC      2                 /* procedure argument list */
#define OCI_LTYPE_ARG_FUNC      3                  /* function argument list */
#define OCI_LTYPE_SUBPRG        4                         /* subprogram list */
#define OCI_LTYPE_TYPE_ATTR     5                          /* type attribute */
#define OCI_LTYPE_TYPE_METHOD   6                             /* type method */
#define OCI_LTYPE_TYPE_ARG_PROC 7    /* type method w/o result argument list */
#define OCI_LTYPE_TYPE_ARG_FUNC 8      /* type method w/result argument list */
/*---------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------- 
                     PRIVATE TYPES AND CONSTANTS 
  ---------------------------------------------------------------------------*/
 
/* None */

/*--------------------------------------------------------------------------- 
                           PUBLIC FUNCTIONS 
  ---------------------------------------------------------------------------*/

/* see ociap.h or ocikp.h */
 
/*--------------------------------------------------------------------------- 
                          PRIVATE FUNCTIONS 
  ---------------------------------------------------------------------------*/

/* None */

/*--------------------------------------------------------------------------- 
 Short names provided for platforms which do not allow extended symbolic names 
  ---------------------------------------------------------------------------*/

#ifdef SLSHORTNAME
/* Translation of the long function/type names to short names for IBM only */
/* maybe lint will use this too */
#define OCISessionEnd              ocitac
#define OCIResultSetToStmt         ocirs2sh
#define OCISessionBegin            ociauth
#define OCIServerAttach            ociatch
#define OCIDescriptorAlloc         ocigdesc
#define OCIServerDetach            ocidtch
#define OCIDescriptorFree          ocifdesc
#define OCIServerVersion           ocivers
#define OCIDescribeAny             ocidsca
#define OCIBindDynamic             ocibda
#define OCIBindByName              ocibdn
#define OCIBindByPos               ocibdp
#define OCIErrorGet                ocigdr
#define OCIBindArrayOfStruct       ocibsa
#define OCIEnvInit                 ociinit
#define OCIBindObject              ocibndt
#define OCIHandleAlloc             ocighndl
#define OCIStmtBindByPos           ocibndp
#define OCIHandleFree              ocifhndl
#define OCIStmtBindByName          ocibndn
#define OCIAttrGet                 ocigattr
#define OCIDefineByPos             ocidfne
#define OCIAttrSet                 ocisattr
#define OCIDefineDynamic           ociddf
#define OCILdaToSvcCtx             ocild2sv
#define OCIDefineArrayOfStruct     ocidarr
#define OCIInitialize              ocipi
#define OCIDefineObject            ocidndt
#define OCIStmtExecute             ociexec
#define OCILobAppend               ocilfap
#define OCILobOpenFile             ocifopn
#define OCILobCloseFile            ocifcls
#define OCILobLocator              ocilobd
#define OCILobCopy                 ocilfcp
#define OCILobFileCreate           ocifcrt
#define OCILobFileDelete           ocifdel
#define OCILobGetLength            ocilfln
#define OCILobWrite                ocilfwr
#define OCILobRead                 ocilfrd
#define OCILobErase                ocilfer
#define OCILobTrim                 ocilftr

#define OCIStmtFetch               ocifch
#define OCIStmtGetBindInfo         ocigbp
#define OCIStmtGetPieceInfo        ocigpi
#define OCIStmtPrepare             ocireq
#define OCIStmtSetPieceInfo        ocispi
#define OCISvcCtxToLda             ocisv2ld
#define OCITransCommit             ocitxcm
#define OCITransDetach             ocitxdt
#define OCITransForget             ocitxfgt
#define OCITransPrepare            ocitxpre
#define OCITransRollback           ocitxrl
#define OCIPasswordChange          ocicpw
#define OCITransStart              ocitxst
#define OCIBreak                   ocibreak
#define OCIParamGet                ocigparm
#define OCIParamSet                ocisparm

#define OCISecurityOpenWallet           ocizwOpenWallet
#define OCISecurityCloseWallet          ocizwCloseWallet
#define OCISecurityCreateWallet         ocizwCreateWallet
#define OCISecurityDestroyWallet        ocizwDestroyWallet
#define OCISecurityStorePersona         ocizeStorePersona
#define OCISecurityOpenPersona          ocizeOpenPersona
#define OCISecurityClosePersona         ocizeClosePersona
#define OCISecurityRemovePersona        ocizeRemovePersona
#define OCISecurityCreatePersona        ocizeCreatePersona
#define OCISecuritySetProtection        ocizeSetProtection
#define OCISecurityGetProtection        ocizeGetProtection
#define OCISecurityRemoveIdentity       ociziRemoveIdentity
#define OCISecurityCreateIdentity       ociziCreateIdentity
#define OCISecurityAbortIdentity        ociziAbortIdentity
#define OCISecurityFreeIdentity         ociziFreeIdentity
#define OCISecurityStoreTrustedIdentity ociziStoreTrustedIdentity
#define OCISecuritySign                 ocizSign
#define OCISecuritySignExpansion        ocizxSignExpansion
#define OCISecurityVerify               ocizVerify
#define OCISecurityValidate             ocizValidate
#define OCISecuritySignDetached         ocizsd_SignDetached
#define OCISecuritySignDetExpansion     ocizxsd_SignDetachedExpansion
#define OCISecurityVerifyDetached       ocizved_VerifyDetached
#define OCISecurity_PKEncrypt           ocizkec_PKEncrypt
#define OCISecurityPKEncryptExpansion   ocizxkec_PKEncryptExpansion
#define OCISecurityPKDecrypt            ocizkdc_PKDecrypt
#define OCISecurityEncrypt              ocizEncrypt
#define OCISecurityEncryptExpansion     ocizxEncryptExpansion
#define OCISecurityDecrypt              ocizDecrypt
#define OCISecurityEnvelope             ocizEnvelope
#define OCISecurityDeEnvelope           ocizDeEnvelope
#define OCISecurityKeyedHash            ocizKeyedHash
#define OCISecurityKeyedHashExpansion   ocizxKeyedHashExpansion
#define OCISecurityHash                 ocizHash
#define OCISecurityHashExpansion        ocizxHashExpansion
#define OCISecuritySeedRandom           ocizSeedRandom
#define OCISecurityRandomBytes          ocizrb_RandomBytes
#define OCISecurityRandomNumber         ocizrn_RandomNumber
#define OCISecurityInitBlock            ocizibInitBlock
#define OCISecurityReuseBlock           ocizrbReuseBlock
#define OCISecurityPurgeBlock           ocizpbPurgeBlock
#define OCISecuritySetBlock             ocizsbSetBlock
#define OCISecurityGetIdentity          ocizgi_GetIdentity

/* Translation between the old and new datatypes */

#define OCISession                 ociusrh
#define OCIBind                    ocibndh
#define OCIDescribe                ocidsch
#define OCIDefine                  ocidfnh
#define OCIEnv                     ocienvh
#define OCIError                   ocierrh

#define OCILob                     ocilobd
#define OCILobLength               ocillen
#define OCILobMode                 ocilmo
#define OCILobOffset               ociloff

#define OCILobLocator              ocilobd
#define OCIBlobLocator		   ociblobl
#define OCIClobLocator		   ociclobl
#define OCIBFileLocator            ocibfilel

#define OCIParam                   ocipard
#define OCIResult                  ocirstd
#define OCISnapshot                ocisnad
#define OCIServer                  ocisrvh
#define OCIStmt                    ocistmh
#define OCISvcCtx                  ocisvch
#define OCITrans                   ocitxnh
#define OCICallbackInBind          ocibicfp
#define OCICallbackOutBind         ocibocfp
#define OCICallbackDefine          ocidcfp
#define OCICallbackLobRead         ocilrfp
#define OCICallbackLobWrite        ocilwfp
#define OCISecurity                ociossh
#define OCIComplexObject           ocicorh
#define OCIComplexObjectComp       ocicord
#define OCIRowid                   ociridd

#endif /* ifdef SLSHORTNAME */
 
#endif                                              /* OCI_ORACLE */





/* more includes */

#if defined(__STDC__) || defined(__cplusplus)
#include <ociapr.h>
#endif





















/*
 * $Header: ociap.h 19-aug-97.14:17:58 tanguyen Exp $
 */

/* Copyright (c) Oracle Corporation 1996, 1997, 1998. All Rights Reserved. */ 
 
/* NOTE:  See 'header_template.doc' in the 'doc' dve under the 'forms' 
      directory for the header file template that includes instructions. 
*/
 
/* 
   NAME 
     ociap.h - Oracle Call Interface - Ansi Prototypes

   DESCRIPTION 
     defines all the OCI entry points with ANSI conformance. If you are adding
     new functions/comments here, please make sure the K&R prototypes
     comments are added in ocikp.h.

   RELATED DOCUMENTS 
     V8 OCI Functional Specification 
     V8 OCI Design Specification
     Oracle Call Interface Programmer's Guide Vol 1 and 2
 
   INSPECTION STATUS 
     Inspection date: 
     Inspection status: 
     Estimated increasing cost defects per page: 
     Rule sets: 
 
   ACCEPTANCE REVIEW STATUS 
     Review date: 
     Review status: 
     Reviewers: 
 
   PUBLIC FUNCTION(S) 

     OCIAQDeq() 
     OCIAQEnq() 
     OCIAttrGet() 
     OCIAttrSet() 
     OCIBindArrayOfStruct() 
     OCIBindByName() 
     OCIBindByPos() 
     OCIBindDynamic() 
     OCIBindObject() 
     OCIBreak() 
     OCIDefineArrayOfStruct() 
     OCIDefineByPos() 
     OCIDefineDynamic() 
     OCIDefineObject() 
     OCIDescribeAny() 
     OCIDescriptorAlloc() 
     OCIDescriptorFree() 
     OCIEnvInit() 
     OCIErrorGet() 
     OCIHandleAlloc() 
     OCIHandleFree() 
     OCIInitialize() 
     OCILdaToSvcCtx() 
     OCILobAppend() 
     OCILobAssign() 
     OCILobCharSetForm() 
     OCILobCharSetId() 
     OCILobCopy() 
     OCILobDisableBuffering() 
     OCILobEnableBuffering() 
     OCILobErase() 
     OCILobFileClose() 
     OCILobFileCloseAll() 
     OCILobFileExists() 
     OCILobFileGetName() 
     OCILobFileIsOpen() 
     OCILobFileOpen() 
     OCILobFileSetName() 
     OCILobFlushBuffer() 
     OCILobGetLength() 
     OCILobIsEqual() 
     OCILobLoadFromFile() 
     OCILobLocatorIsInit() 
     OCILobRead() 
     OCILobTrim() 
     OCILobWrite() 
     OCILogoff() 
     OCILogon() 
     OCIParamGet() 
     OCIParamSet() 
     OCIPasswordChange() 
     OCIServerAttach() 
     OCIServerDetach() 
     OCIServerVersion() 
     OCISessionBegin() 
     OCISessionEnd() 
     OCIStmtExecute() 
     OCIStmtFetch() 
     OCIStmtGetBindInfo() 
     OCIStmtGetPieceInfo() 
     OCIStmtPrepare() 
     OCIStmtSetPieceInfo() 
     OCISvcCtxToLda() 
     OCITransCommit() 
     OCITransDetach() 
     OCITransForget() 
     OCITransPrepare() 
     OCITransRollback() 
     OCITransStart() 

   PRIVATE FUNCTION(S)
    None.

   EXAMPLES

   NOTES
     examples in this file could be in K&R manner, since they have been 
     duplicated from ocikp.h, and the examples are for the sake of illustration

   MODIFIED   (MM/DD/YY)
   dsaha       04/15/98 - OCI Non Blocking
   dchatter    01/09/98 - update comments
   tanguyen    08/19/97 -
   cxcheng     07/30/97 - replace OCISvcCtx with OCISvcCtx
   schandra    06/25/97 - AQ OCI interface
   bnainani    07/21/97 - add prototypes for Oracle XA extensions
   esoyleme    05/13/97 - move failover callback prototype
   skmishra    05/06/97 - stdc compiler fixes
   skmishra    04/24/97 - C++ Compatibility changes
   skotsovo    04/21/97 - make lob parameter names consistent
   rwhitman    04/16/97 - Fix LOB prototypes - Olint OCI 8.0.3
   ramkrish    04/15/97 - Add free flag to OCILobFlushBuffer
   dchatter    04/10/97 - add nzt.h inclusion
   cxcheng     04/09/97 - change objnamp from CONST text* to dvoid*
   cxcheng     04/08/97 - fix prototype of OCIDescribeAny()
   skotsovo    03/31/97 - remove OCILobLocatorSize
   skotsovo    03/27/97 - add OCILobLoadFromFile
   bcchang     02/18/97 - Fix syntax error
   dchatter    01/13/97 - fix comments on LOB calls
   aroy        01/10/97 - remove ocilobfilecreate delete
   sgollapu    12/27/96 - Correct OCILogon prototype
   dchatter    01/04/97 - comments to describe the functions
   sgollapu    11/25/96 - Change OCILobFileIsExistent
   schandra    11/18/96 - Remove xa.h include
   sgollapu    11/09/96 - Change prototype of OCIDescribeAny
   dchatter    10/31/96 - delete CONST from lob write cb fn
   dchatter    10/30/96 - more changes
   dchatter    10/26/96 - lob/file long name corrections
   slari       10/16/96 - delete unused calls
   rwessman    10/29/96 - Fixed OCISecurityGetIdentity prototype
   bcchang     10/25/96 - Fix syntax error
   sgollapu    10/22/96 - Add OCILogon and OCILogoff
   rwessman    10/16/96 - Added cryptographic and digital signature functions
   sgollapu    10/10/96 - Add ocibdp and ocibdn
   rxgovind    10/07/96 - add oci file calls
   skotsovo    10/01/96 - move orl lob fnts to oci
   skotsovo    09/20/96 - in OCILobGetLength(), remove the 'isnull' parameter.
   aroy        08/29/96 - change prototype for Nchar Lob support
   dchatter    08/21/96 - OCIResultSetToStmt prototype change
   sthakur     08/14/96 - add OCIParamSet
   schandra    07/26/96 - TX OCI return values - sb4->sword
   aroy        07/17/96 - terminology change: OCILobLocator => OCILobLocator
   dchatter    07/01/96 - create ANSI prototypes
   dchatter    07/01/96 - Creation

*/

 
#ifndef OCIAP_ORACLE
# define OCIAP_ORACLE

 
#ifndef OCI_ORACLE
#include <oci.h>
#endif


/*---------------------------------------------------------------------------
                     PUBLIC TYPES AND CONSTANTS
  ---------------------------------------------------------------------------*/

/* defined in  oci.h */

/*---------------------------------------------------------------------------
                     PRIVATE TYPES AND CONSTANTS
  ---------------------------------------------------------------------------*/
                                                                     
/* none */

/*---------------------------------------------------------------------------
                           PUBLIC FUNCTIONS
  ---------------------------------------------------------------------------*/

/*****************************************************************************
                              DESCRIPTION
******************************************************************************
Note: the descriptions of the functions are alphabetically arranged. Please 
maintain the arrangement when adding a new function description. The actual 
prototypes are below this comment section and do not follow any alphabetical 
ordering. All references to pages, appendixes and sections are to the OCI 
Programmer's Guide Vol 1 and 2.

-------------------------------OCIAQDeq---------------------------------------

OCIAQDeq()


NAME
OCI Advanced Queuing DEQueue

PURPOSE
This call is used for an advanced queueing dequeue. 

SYNTAX
sword OCIAQDeq ( OCISvcCtx           *svch,
                 OCIError            *errh,
                 text                *queue_name,
                 OCIAQDeqOptions     *dequeue_options,
                 OCIAQMsgProperties  *message_properties,
                 OCIType             *payload_tdo,
                 dvoid               **payload,
                 dvoid               **payload_ind,
                 OCIRaw              **msgid,
                 ub4                 flags );

PARAMETERS
svch (IN)
OCI service context. 

errh (IN)
An error handle which can be passed to OCIErrorGet() for diagnostic 
information in the event of an error. 

queue_name (IN)
The target queue for the dequeue operation. 

dequeue_options (IN)
The options for the dequeue operation; stored in an OCIAQDeqOptions descriptor.
 

message_properties (OUT)
The message properties for the message; stored in an OCIAQMsgProperties 
descriptor. 

payload_tdo (IN)
The TDO (type descriptor object) of an object type. For a raw queue, this 
parameter should point to the TDO of SYS.RAW. 

payload (IN/OUT)
A pointer to a pointer to a program variable buffer that is an instance of an 
object type. For a raw queue, this parameter should point to an instance of
OCIRaw. 
Memory for the payload is dynamically allocated in the object cache. The 
application can optionally call OCIObjectFree() to deallocate the payload 
instance when it is no longer needed. If the pointer to the program variable 
buffer ( *payload) is passed as NULL, the buffer is implicitly allocated in 
the cache. The application may choose to pass NULL for payload the first time 
OCIAQDeq() is called, and let the OCI allocate the memory for the payload. It 
can then use a pointer to that previously allocated memory in subsequent calls
to OCIAQDeq(). 
The OCI provides functions which allow the user to set attributes of the 
payload, such as its text. For information about setting these attributes, 
refer to "Manipulating Object Attributes" on page 8-13. 

payload_ind (IN/OUT)
A pointer to a pointer to the program variable buffer containing the parallel 
indicator structure for the object type. 
The memory allocation rules for payload_ind are the same as those for payload,
above. 

msgid (OUT)
The message ID. 

flags (IN)
Not currently used; pass as OCI_DEFAULT. 

COMMENTS
This function is used to perform an Advanced Queueing dequeue operation using 
the OCI. Users must have the aq_user_role or privileges to execute the 
dbms_aq package in order to use this call. 

The OCI environment must be initialized in object mode (using 
OCIInitialize()) to use this call. 

For more information about OCI and Advanced Queueing, refer to "OCI and 
Advanced Queueing" on page 7-40. 

For additional information about Advanced Queueing, refer to Oracle8 
Application Developer's Guide. 

To obtain a TDO for the payload, use OCITypeByName(), or OCITypeByRef(). 

EXAMPLES
For examples demonstrating the use of OCIAQDeq(), refer to the description of 
OCIAQEnq() on page 13-11. 

RELATED FUNCTIONS
OCIAQEnq(), OCIInitialize() 



-------------------------------OCIAQEnq---------------------------------------

OCIAQEnq()

NAME
OCI Advanced Queuing ENQueue

PURPOSE

This call is used for an advanced queueing enqueue. 

SYNTAX

sword OCIAQEnq ( OCISvcCtx           *svch,
                 OCIError            *errh,
                 text                *queue_name,
                 OCIAQEnqOptions     *enqueue_options,
                 OCIAQMsgProperties  *message_properties,
                 OCIType             *payload_tdo,
                 dvoid               **payload,
                 dvoid               **payload_ind,
                 OCIRaw              **msgid,
                 ub4                 flags );

PARAMETERS

svch (IN)

OCI service context. 

errh (IN)

An error handle which can be passed to OCIErrorGet() for diagnostic 
information in the event of an error. 

queue_name (IN)

The target queue for the enqueue operation. 

enqueue_options (IN)

The options for the enqueue operation; stored in an OCIAQEnqOptions 
descriptor. 

message_properties (IN)

The message properties for the message; stored in an OCIAQMsgProperties 
descriptor. 

payload_tdo (IN)

The TDO (type descriptor object) of an object type. For a raw queue, this 
parameter should point to the TDO of SYS.RAW. 

payload (IN)

A pointer to a pointer to an instance of an object type. For a raw queue, this parameter should point to an instance of OCIRaw. 

The OCI provides functions which allow the user to set attributes of the 
payload, such as its text. For information about setting these attributes, 
refer to "Manipulating Object Attributes" on page 8-13. 

payload_ind (IN)

A pointer to a pointer to the program variable buffer containing the parallel 
indicator structure for the object type. 

msgid (OUT)

The message ID. 

flags (IN)

Not currently used; pass as OCI_DEFAULT. 

COMMENTS

This function is used to perform an Advanced Queueing enqueue operation. Users
must have the aq_user_role or privileges to execute the dbms_aq package in 
order to use this call. The OCI environment must be initialized in object 
mode (using OCIInitialize()) to use this call. 

For more information about OCI and Advanced Queueing, refer to "OCI and 
Advanced Queueing" on page 7-40. For additional information about Advanced 
Queueing, refer to Oracle8 Application Developer's Guide. 

To obtain a TDO for the payload, use OCITypeByName(), or OCITypeByRef(). 

EXAMPLES

The following four examples demonstrate the use of OCIAQEnq() and OCIAQDeq() 
in several different situations. 

These examples assume that the database is set up as illustrated in the 
section "Oracle Advanced Queueing By Example" in the advanced queueing chapter
of the Oracle8 Application Developer's Guide. 

Example 1

Enqueue and dequeue of a payload object. 

struct message
{
  OCIString   *subject;
  OCIString   *data;
};
typedef struct message message;

struct null_message
{
  OCIInd    null_adt;
  OCIInd    null_subject;
  OCIInd    null_data;
};
typedef struct null_message null_message;

int main()
{
  OCIEnv *envhp;
  OCIServer *srvhp;
  OCIError *errhp;
  OCISvcCtx *svchp;
  dvoid     *tmp;
  OCIType *mesg_tdo = (OCIType *) 0;
  message  msg;
  null_message nmsg;
  message *mesg = &msg;
  null_message *nmesg = &nmsg;
  message *deqmesg = (message *)0;
  null_message *ndeqmesg = (null_message *)0;
  
  OCIInitialize((ub4) OCI_OBJECT, (dvoid *)0,  (dvoid * (*)()) 0,
                (dvoid * (*)()) 0,  (void (*)()) 0 );
  
  OCIHandleAlloc( (dvoid *) NULL, (dvoid **) &envhp, (ub4) OCI_HTYPE_ENV,
                  52, (dvoid **) &tmp);
  
  OCIEnvInit( &envhp, (ub4) OCI_DEFAULT, 21, (dvoid **) &tmp  );
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4) OCI_HTYPE_ERROR,
                    52, (dvoid **) &tmp);
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) OCI_HTYPE_SERVER,
                    52, (dvoid **) &tmp);
  
  OCIServerAttach( srvhp, errhp, (text *) 0, (sb4) 0, (ub4) OCI_DEFAULT);
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) OCI_HTYPE_SVCCTX,
                  52, (dvoid **) &tmp);
  OCIAttrSet( (dvoid *) svchp, (ub4) OCI_HTYPE_SVCCTX, (dvoid *)srvhp, (ub4) 0,
                  (ub4) OCI_ATTR_SERVER, (OCIError *) errhp);
 
  OCILogon(envhp, errhp, &svchp, "AQ", strlen("AQ"), "AQ", strlen("AQ"), 0, 0);

  /o obtain TDO of message_type o/
  OCITypeByName(envhp, errhp, svchp, (CONST text *)"AQ", strlen("AQ"),
                (CONST text *)"MESSAGE_TYPE", strlen("MESSAGE_TYPE"), 
                (text *)0, 0, OCI_DURATION_SESSION, OCI_TYPEGET_ALL, &mesg_tdo);

  /o prepare the message payload o/
  mesg->subject = (OCIString *)0;
  mesg->data = (OCIString *)0;
  OCIStringAssignText(envhp, errhp, (CONST text *)"NORMAL MESSAGE",
                 strlen("NORMAL MESSAGE"), &mesg->subject);
  OCIStringAssignText(envhp, errhp,(CONST text *)"OCI ENQUEUE",
                 strlen("OCI ENQUEUE"), &mesg->data);
  nmesg->null_adt = nmesg->null_subject = nmesg->null_data = OCI_IND_NOTNULL;  

  /o enqueue into the msg_queue o/
  OCIAQEnq(svchp, errhp, (CONST text *)"msg_queue", 0, 0,
                  mesg_tdo, (dvoid **)&mesg, (dvoid **)&nmesg, 0, 0);
  OCITransCommit(svchp, errhp, (ub4) 0);

  /o dequeue from the msg_queue o/
  OCIAQDeq(svchp, errhp, (CONST text *)"msg_queue", 0, 0,
                   mesg_tdo, (dvoid **)&deqmesg, (dvoid **)&ndeqmesg, 0, 0);
  printf("Subject: %s\n", OCIStringPtr(envhp, deqmesg->subject));
  printf("Text: %s\n", OCIStringPtr(envhp, deqmesg->data));
  OCITransCommit(svchp, errhp, (ub4) 0);
}

Example 2

Enqueue and dequeue using correlation IDs. 

struct message
{
  OCIString   *subject;
  OCIString   *data;
};
typedef struct message message;

struct null_message
{
  OCIInd    null_adt;
  OCIInd    null_subject;
  OCIInd    null_data;
};
typedef struct null_message null_message;

int main()
{
  OCIEnv *envhp;
  OCIServer *srvhp;
  OCIError *errhp;
  OCISvcCtx *svchp;
  dvoid     *tmp;
  OCIType *mesg_tdo = (OCIType *) 0;
  message  msg;
  null_message nmsg;
  message *mesg = &msg;
  null_message *nmesg = &nmsg;
  message *deqmesg = (message *)0;
  null_message *ndeqmesg = (null_message *)0;
  OCIRaw*firstmsg = (OCIRaw *)0;
  OCIAQMsgProperties *msgprop = (OCIAQMsgProperties *)0;
  OCIAQDeqOptions *deqopt = (OCIAQDeqOptions *)0;
  text correlation1[30], correlation2[30];
  
  OCIInitialize((ub4) OCI_OBJECT, (dvoid *)0,  (dvoid * (*)()) 0,
                (dvoid * (*)()) 0,  (void (*)()) 0 );
  OCIHandleAlloc( (dvoid *) NULL, (dvoid **) &envhp, (ub4) OCI_HTYPE_ENV,
                 52, (dvoid **) &tmp);
  
  OCIEnvInit( &envhp, (ub4) OCI_DEFAULT, 21, (dvoid **) &tmp  );
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4) OCI_HTYPE_ERROR,
                 52, (dvoid **) &tmp);
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) OCI_HTYPE_SERVER,
                 52, (dvoid **) &tmp);
  
  OCIServerAttach( srvhp, errhp, (text *) 0, (sb4) 0, (ub4) OCI_DEFAULT);
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) OCI_HTYPE_SVCCTX,
                 52, (dvoid **) &tmp);
  OCIAttrSet( (dvoid *) svchp, (ub4) OCI_HTYPE_SVCCTX, (dvoid *)srvhp, (ub4) 0,
                 (ub4) OCI_ATTR_SERVER, (OCIError *) errhp);
 
  OCILogon(envhp, errhp, &svchp, "AQ", strlen("AQ"), "AQ", strlen("AQ"), 0, 0);

  /o allocate message properties descriptor o/
  OCIDescriptorAlloc(envhp, (dvoid **)&msgprop, 
                   OCI_DTYPE_AQMSG_PROPERTIES, 0, (dvoid **)0);
  strcpy(correlation1, "1st message");
  OCIAttrSet(msgprop, OCI_DTYPE_AQMSG_PROPERTIES, (dvoid *)&correlation1, 
                   strlen(correlation1), OCI_ATTR_CORRELATION, errhp);

  /o obtain TDO of message_type o/
  OCITypeByName(envhp, errhp, svchp, (CONST text *)"AQ", strlen("AQ"),
                (CONST text *)"MESSAGE_TYPE", strlen("MESSAGE_TYPE"), 
                (text *)0, 0, OCI_DURATION_SESSION, OCI_TYPEGET_ALL, &mesg_tdo);

  /o prepare the message payload o/
  mesg->subject = (OCIString *)0;
  mesg->data = (OCIString *)0;
  OCIStringAssignText(envhp, errhp, (CONST text *)"NORMAL ENQUEUE1", 
                  strlen("NORMAL ENQUEUE1"), &mesg->subject);
  OCIStringAssignText(envhp, errhp,(CONST text *)"OCI ENQUEUE",
                  strlen("OCI ENQUEUE"), &mesg->data);
  nmesg->null_adt = nmesg->null_subject = nmesg->null_data = OCI_IND_NOTNULL;  

  /o enqueue into the msg_queue, store the message id into firstmsg o/
  OCIAQEnq(svchp, errhp, (CONST text *)"msg_queue", 0, msgprop,
                   mesg_tdo, (dvoid **)&mesg, (dvoid **)&nmesg, &firstmsg, 0);

  /o enqueue into the msg_queue with a different correlation id o/
  strcpy(correlation2, "2nd message");
  OCIAttrSet(msgprop, OCI_DTYPE_AQMSG_PROPERTIES, (dvoid*)&correlation2, 
                  strlen(correlation2), OCI_ATTR_CORRELATION, errhp);
  OCIStringAssignText(envhp, errhp, (CONST text *)"NORMAL ENQUEUE2", 
                  strlen("NORMAL ENQUEUE2"), &mesg->subject);
  OCIAQEnq(svchp, errhp, (CONST text *)"msg_queue", 0, msgprop,
                  mesg_tdo, (dvoid **)&mesg, (dvoid **)&nmesg, 0, 0);

  OCITransCommit(svchp, errhp, (ub4) 0);

  /o first dequeue by correlation id "2nd message" o/
  /o allocate dequeue options descriptor and set the correlation option o/
  OCIDescriptorAlloc(envhp, (dvoid **)&deqopt, 
                   OCI_DTYPE_AQDEQ_OPTIONS, 0, (dvoid **)0);
  OCIAttrSet(deqopt, OCI_DTYPE_AQDEQ_OPTIONS, (dvoid *)correlation2, 

                   strlen(correlation2),  OCI_ATTR_CORRELATION, errhp);

  /o dequeue from the msg_queue o/
  OCIAQDeq(svchp, errhp, (CONST text *)"msg_queue", deqopt, 0,
                   mesg_tdo, (dvoid **)&deqmesg, (dvoid **)&ndeqmesg, 0, 0);
  printf("Subject: %s\n", OCIStringPtr(envhp, deqmesg->subject));
  printf("Text: %s\n", OCIStringPtr(envhp, deqmesg->data));
  OCITransCommit(svchp, errhp, (ub4) 0);

  /o second dequeue by message id o/
  OCIAttrSet(deqopt, OCI_DTYPE_AQDEQ_OPTIONS, (dvoid *)&firstmsg,    
  OCIRawSize(envhp, firstmsg), OCI_ATTR_DEQ_MSGID, errhp);
  /o clear correlation id option o/
  OCIAttrSet(deqopt, OCI_DTYPE_AQDEQ_OPTIONS, 
             (dvoid *)correlation2, 0, OCI_ATTR_CORRELATION, errhp);

  /o dequeue from the msg_queue o/
  OCIAQDeq(svchp, errhp, (CONST text *)"msg_queue", deqopt, 0,
              mesg_tdo, (dvoid **)&deqmesg, (dvoid **)&ndeqmesg, 0, 0);
  printf("Subject: %s\n", OCIStringPtr(envhp, deqmesg->subject));
  printf("Text: %s\n", OCIStringPtr(envhp, deqmesg->data));
  OCITransCommit(svchp, errhp, (ub4) 0);
}


Example 3

Enqueue and dequeue of a raw queue. 

int main()
{
  OCIEnv *envhp;
  OCIServer *srvhp;
  OCIError *errhp;
  OCISvcCtx *svchp;
  dvoid     *tmp;
  OCIType *mesg_tdo = (OCIType *) 0;
  char  msg_text[100];
  OCIRaw  *mesg = (OCIRaw *)0;
  OCIRaw*deqmesg = (OCIRaw *)0;
  OCIInd   ind = 0;
  dvoid  *indptr = (dvoid *)&ind;
  inti;
  
  OCIInitialize((ub4) OCI_OBJECT, (dvoid *)0,  (dvoid * (*)()) 0,
               (dvoid * (*)()) 0,  (void (*)()) 0 );
  OCIHandleAlloc( (dvoid *) NULL, (dvoid **) &envhp, (ub4) OCI_HTYPE_ENV,
                  52, (dvoid **) &tmp);
  
  OCIEnvInit( &envhp, (ub4) OCI_DEFAULT, 21, (dvoid **) &tmp  );
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4) OCI_HTYPE_ERROR,
                  52, (dvoid **) &tmp);
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) OCI_HTYPE_SERVER,
                  52, (dvoid **) &tmp);
  
  OCIServerAttach( srvhp, errhp, (text *) 0, (sb4) 0, (ub4) OCI_DEFAULT);
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) OCI_HTYPE_SVCCTX,
                  52, (dvoid **) &tmp);
  OCIAttrSet( (dvoid *) svchp, (ub4) OCI_HTYPE_SVCCTX, (dvoid *)srvhp, (ub4) 0,
                  (ub4) OCI_ATTR_SERVER, (OCIError *) errhp);
 
  OCILogon(envhp, errhp, &svchp, "AQ", strlen("AQ"), "AQ", strlen("AQ"), 0, 0);

  /o obtain the TDO of the RAW data type o/
  OCITypeByName(envhp, errhp, svchp, (CONST text *)"SYS", strlen("SYS"),
                (CONST text *)"RAW", strlen("RAW"), 
                (text *)0, 0, OCI_DURATION_SESSION, OCI_TYPEGET_ALL, &mesg_tdo);

  /o prepare the message payload o/
  strcpy(msg_text, "Enqueue to a RAW queue");
  OCIRawAssignBytes(envhp, errhp, msg_text, strlen(msg_text), &mesg);

  /o enqueue the message into raw_msg_queue o/
  OCIAQEnq(svchp, errhp, (CONST text *)"raw_msg_queue", 0, 0,
                 mesg_tdo, (dvoid **)&mesg, (dvoid **)&indptr, 0, 0);
  OCITransCommit(svchp, errhp, (ub4) 0);

  /o dequeue the same message into C variable deqmesg o/
  OCIAQDeq(svchp, errhp, (CONST text *)"raw_msg_queue", 0, 0, 
   mesg_tdo, (dvoid **)&deqmesg, (dvoid **)&indptr, 0, 0);
  for (i = 0; i < OCIRawSize(envhp, deqmesg); i++)
    printf("%c", *(OCIRawPtr(envhp, deqmesg) + i));
  OCITransCommit(svchp, errhp, (ub4) 0);
}

Example 4

Enqueue and dequeue using OCIAQAgent. 

struct message
{
  OCIString   *subject;
  OCIString   *data;
};
typedef struct message message;

struct null_message
{
  OCIInd    null_adt;
  OCIInd    null_subject;
  OCIInd    null_data;
};
typedef struct null_message null_message;

int main()
{
  OCIEnv *envhp;
  OCIServer *srvhp;
  OCIError *errhp;
  OCISvcCtx *svchp;
  dvoid     *tmp;
  OCIType *mesg_tdo = (OCIType *) 0;
  message  msg;
  null_message nmsg;
  message *mesg = &msg;
  null_message *nmesg = &nmsg;
  message *deqmesg = (message *)0;
  null_message *ndeqmesg = (null_message *)0;
  OCIAQMsgProperties *msgprop = (OCIAQMsgProperties *)0;
  OCIAQAgent *agents[2];
  OCIAQDeqOptions *deqopt = (OCIAQDeqOptions *)0;
  ub4wait = OCI_DEQ_NO_WAIT;
  ub4 navigation = OCI_DEQ_FIRST_MSG;
  
  OCIInitialize((ub4) OCI_OBJECT, (dvoid *)0,  (dvoid * (*)()) 0,
                (dvoid * (*)()) 0,  (void (*)()) 0 );
  
  OCIHandleAlloc( (dvoid *) NULL, (dvoid **) &envhp, (ub4) OCI_HTYPE_ENV,
                52, (dvoid **) &tmp);
  
  OCIEnvInit( &envhp, (ub4) OCI_DEFAULT, 21, (dvoid **) &tmp  );
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4) OCI_HTYPE_ERROR,
                   52, (dvoid **) &tmp);
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) OCI_HTYPE_SERVER,
                   52, (dvoid **) &tmp);
  
  OCIServerAttach( srvhp, errhp, (text *) 0, (sb4) 0, (ub4) OCI_DEFAULT);
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) OCI_HTYPE_SVCCTX,
                   52, (dvoid **) &tmp);
  
  OCIAttrSet( (dvoid *) svchp, (ub4) OCI_HTYPE_SVCCTX, (dvoid *)srvhp, (ub4) 0,
                   (ub4) OCI_ATTR_SERVER, (OCIError *) errhp);
 
  OCILogon(envhp, errhp, &svchp, "AQ", strlen("AQ"), "AQ", strlen("AQ"), 0, 0);

  /o obtain TDO of message_type o/
  OCITypeByName(envhp, errhp, svchp, (CONST text *)"AQ", strlen("AQ"),
       (CONST text *)"MESSAGE_TYPE", strlen("MESSAGE_TYPE"), 
       (text *)0, 0, OCI_DURATION_SESSION, OCI_TYPEGET_ALL, &mesg_tdo);

  /o prepare the message payload o/
  mesg->subject = (OCIString *)0;
  mesg->data = (OCIString *)0;
  OCIStringAssignText(envhp, errhp,
                    (CONST text *)"MESSAGE 1", strlen("MESSAGE 1"), 
                    &mesg->subject);
  OCIStringAssignText(envhp, errhp,
                    (CONST text *)"mesg for queue subscribers", 
                    strlen("mesg for queue subscribers"), &mesg->data);
  nmesg->null_adt = nmesg->null_subject = nmesg->null_data = OCI_IND_NOTNULL;  

  /o enqueue MESSAGE 1 for subscribers to the queue i.e. for RED and GREEN o/
  OCIAQEnq(svchp, errhp, (CONST text *)"msg_queue_multiple", 0, 0,
                       mesg_tdo, (dvoid **)&mesg, (dvoid **)&nmesg, 0, 0);

  /o enqueue MESSAGE 2 for specified recipients i.e. for RED and BLUE o/
  /o prepare message payload o/
  OCIStringAssignText(envhp, errhp,
                    (CONST text *)"MESSAGE 2", strlen("MESSAGE 2"), 
                    &mesg->subject);
  OCIStringAssignText(envhp, errhp,
                    (CONST text *)"mesg for two recipients", 
                    strlen("mesg for two recipients"), &mesg->data);

  /o allocate AQ message properties and agent descriptors o/
  OCIDescriptorAlloc(envhp, (dvoid **)&msgprop, 
                OCI_DTYPE_AQMSG_PROPERTIES, 0, (dvoid **)0);
  OCIDescriptorAlloc(envhp, (dvoid **)&agents[0], 
                  OCI_DTYPE_AQAGENT, 0, (dvoid **)0);
  OCIDescriptorAlloc(envhp, (dvoid **)&agents[1], 
                  OCI_DTYPE_AQAGENT, 0, (dvoid **)0);

  /o prepare the recipient list, RED and BLUE o/
  OCIAttrSet(agents[0], OCI_DTYPE_AQAGENT, "RED", strlen("RED"),
                     OCI_ATTR_AGENT_NAME, errhp);
  OCIAttrSet(agents[1], OCI_DTYPE_AQAGENT, "BLUE", strlen("BLUE"),
                     OCI_ATTR_AGENT_NAME, errhp);
  OCIAttrSet(msgprop, OCI_DTYPE_AQMSG_PROPERTIES, (dvoid *)agents, 2,
                      OCI_ATTR_RECIPIENT_LIST, errhp);

  OCIAQEnq(svchp, errhp, (CONST text *)"msg_queue_multiple", 0, msgprop,
                       mesg_tdo, (dvoid **)&mesg, (dvoid **)&nmesg, 0, 0);

  OCITransCommit(svchp, errhp, (ub4) 0);

  /o now dequeue the messages using different consumer names o/
  /o allocate dequeue options descriptor to set the dequeue options o/
  OCIDescriptorAlloc(envhp, (dvoid **)&deqopt, OCI_DTYPE_AQDEQ_OPTIONS, 0, 
                     (dvoid **)0);

  /o set wait parameter to NO_WAIT so that the dequeue returns immediately o/
  OCIAttrSet(deqopt, OCI_DTYPE_AQDEQ_OPTIONS, (dvoid *)&wait, 0, 
                     OCI_ATTR_WAIT, errhp);

  /o set navigation to FIRST_MESSAGE so that the dequeue resets the position o/
  /o after a new consumer_name is set in the dequeue options     o/
  OCIAttrSet(deqopt, OCI_DTYPE_AQDEQ_OPTIONS, (dvoid *)&navigation, 0, 
                     OCI_ATTR_NAVIGATION, errhp);
  
  /o dequeue from the msg_queue_multiple as consumer BLUE o/
  OCIAttrSet(deqopt, OCI_DTYPE_AQDEQ_OPTIONS, (dvoid *)"BLUE", strlen("BLUE"), 
                     OCI_ATTR_CONSUMER_NAME, errhp);
  while (OCIAQDeq(svchp, errhp, (CONST text *)"msg_queue_multiple", deqopt, 0,
 mesg_tdo, (dvoid **)&deqmesg, (dvoid **)&ndeqmesg, 0, 0) 
 == OCI_SUCCESS)
  {
    printf("Subject: %s\n", OCIStringPtr(envhp, deqmesg->subject));
    printf("Text: %s\n", OCIStringPtr(envhp, deqmesg->data));
  }
  OCITransCommit(svchp, errhp, (ub4) 0);

  /o dequeue from the msg_queue_multiple as consumer RED o/
  OCIAttrSet(deqopt, OCI_DTYPE_AQDEQ_OPTIONS, (dvoid *)"RED", strlen("RED"), 
                     OCI_ATTR_CONSUMER_NAME, errhp);
  while (OCIAQDeq(svchp, errhp, (CONST text *)"msg_queue_multiple", deqopt, 0,
                 mesg_tdo, (dvoid **)&deqmesg, (dvoid **)&ndeqmesg, 0, 0) 
 == OCI_SUCCESS)
  {
    printf("Subject: %s\n", OCIStringPtr(envhp, deqmesg->subject));
    printf("Text: %s\n", OCIStringPtr(envhp, deqmesg->data));
  }
  OCITransCommit(svchp, errhp, (ub4) 0);

  /o dequeue from the msg_queue_multiple as consumer GREEN o/
  OCIAttrSet(deqopt, OCI_DTYPE_AQDEQ_OPTIONS,(dvoid *)"GREEN",strlen("GREEN"), 
                     OCI_ATTR_CONSUMER_NAME, errhp);
  while (OCIAQDeq(svchp, errhp, (CONST text *)"msg_queue_multiple", deqopt, 0,
                 mesg_tdo, (dvoid **)&deqmesg, (dvoid **)&ndeqmesg, 0, 0) 
 == OCI_SUCCESS)
  {
    printf("Subject: %s\n", OCIStringPtr(envhp, deqmesg->subject));
    printf("Text: %s\n", OCIStringPtr(envhp, deqmesg->data));
  }
  OCITransCommit(svchp, errhp, (ub4) 0);
}

Related Functions

OCIAQDeq(), OCIInitialize() 




--------------------------------OCIAttrGet------------------------------------

OCIAttrGet()

NAME

OCI Attribute Get

PURPOSE

This call is used to get a particular attribute of a handle. 

SYNTAX

sword OCIAttrGet ( CONST dvoid    *trgthndlp,
                 ub4            trghndltyp,
                 dvoid          *attributep,
                 ub4            *sizep,
                 ub4            attrtype,
                 OCIError       *errhp );


PARAMETERS


trgthndlp (IN) - is the pointer to a handle type. 

trghndltyp (IN) - is the handle type. 

attributep (OUT) - is a pointer to the storage for an attribute value. The 
attribute value is filled in. 

sizep (OUT) - is the size of the attribute value. 
This can be passed in as NULL for most parameters as the size is well known. 
For text* parameters, a pointer to a ub4 must be passed in to get the length 
of the string. 

attrtype (IN) - is the type of attribute.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

COMMENTS

This call is used to get a particular attribute of a handle.
See Appendix B,  "Handle Attributes",  for a list of handle types and their 
readable attributes.

RELATED FUNCTIONS

OCIAttrSet()

--------------------------------OCIAttrSet------------------------------------


OCIAttrSet()


NAME

OCI Attribute Set

PURPOSE

This call is used to set a particular attribute of a handle or a descriptor. 

SYNTAX

sword OCIAttrSet ( dvoid       *trgthndlp,
                 ub4         trghndltyp,
                 dvoid       *attributep,
                 ub4         size,
                 ub4         attrtype,
                 OCIError    *errhp );


PARAMETERS


trghndlp (IN/OUT) - the pointer to a handle type whose attribute gets 
modified. 

trghndltyp (IN/OUT) - is the handle type. 

attributep (IN) - a pointer to an attribute value. 
The attribute value is copied into the target handle. If the attribute value 
is a pointer, then only the pointer is copied, not the contents of the pointer.


size (IN) - is the size of an attribute value. This can be passed in as 0 for 
most attributes as the size is already known by the OCI library. For text*
attributes, a ub4 must be passed in set to the length of the string. 

attrtype (IN) - the type of attribute being set.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

COMMENTS

This call is used to set a particular attribute of a handle or a descriptor. 
See Appendix B for a list of handle types and their writeable attributes.

EXAMPLE

The following code sample demonstrates OCIAttrSet() being used several times
near the beginning of an application.

int main()

{

OCIEnv *envhp;

OCIServer *srvhp;

OCIError *errhp;

OCISvcCtx *svchp;

OCIStmt *stmthp;

OCISession *usrhp;

OCIInitialize((ub4) OCI_THREADED | OCI_OBJECT, (dvoid *)0,
              (dvoid * (*)()) 0,(dvoid * (*)()) 0,  (void (*)()) 0 ); 
OCIHandleAlloc( (dvoid *) NULL, (dvoid **) &envhp, (ub4) OCI_HTYPE_ENV,
               0, (dvoid **) &tmp);

OCIEnvInit( &envhp, (ub4) OCI_DEFAULT, 0, (dvoid **) &tmp  ); 

OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4)
               OCI_HTYPE_ERROR, 0, (dvoid **) &tmp);
OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4)
               OCI_HTYPE_SERVER, 0, (dvoid **) &tmp);
OCIServerAttach( srvhp, errhp, (text *) 0, (sb4) 0, (ub4) OCI_DEFAULT); 

/o set attribute server context in the service context o/
OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp,
               (ub4) OCI_HTYPE_SVCCTX, , (dvoid **) &tmp); 
OCIAttrSet( (dvoid *) svchp, (ub4) OCI_HTYPE_SVCCTX, (dvoid *) srvhp,
           (ub4) 0, (ub4) OCI_ATTR_SERVER, (OCIError *) errhp);

/o allocate a user session handle o/
OCIHandleAlloc((dvoid *)envhp, (dvoid **)&usrhp, 
               (ub4) OCI_HTYPE_SESSION, (size_t) 0, (dvoid **) 0);
OCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION, (dvoid *)"sherry", 
           (ub4)strlen("sherry"), OCI_ATTR_USERNAME, errhp);
OCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION, (dvoid *)"penfield",
           (ub4)strlen("penfield"), OCI_ATTR_PASSWORD, errhp);

/o begin a new session o/
checkerr(errhp, OCISessionBegin (svchp, errhp, usrhp, OCI_CRED_RDBMS,
                                 OCI_DEFAULT));
/o populate the service context with session information for execution o/
OCIAttrSet((dvoid *)svchp, (ub4)OCI_HTYPE_SVCCTX, (dvoid *)usrhp,
           (ub4)0, OCI_ATTR_SESSION, errhp);



RELATED FUNCTIONS

OCIAttrGet()



--------------------------------OCIBindArrayOfStruct--------------------------



OCIBindArrayOfStruct()

NAME

OCI Bind for Array of Structures

PURPOSE

This call sets up the skip parameters for a static array bind.

SYNTAX

sword OCIBindArrayOfStruct ( OCIBind     *bindp,
                             OCIError    *errhp,
                             ub4         pvskip, 
                             ub4         indskip, 
                             ub4         alskip, 
                             ub4         rcskip );

PARAMETERS


bindp (IN) - the handle to a bind structure. 

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

pvskip (IN) - skip parameter for the next data value. 

indskip (IN) - skip parameter for the next indicator value or structure. 

alskip (IN) - skip parameter for the next actual length value. 

rcskip (IN) - skip parameter for the next column-level return code value. 

COMMENTS

This call sets up the skip parameters necessary for a static array bind.
This call follows a call to OCIBindByName() or OCIBindByPos(). The bind 
handle returned by that initial bind call is used as a parameter for the 
OCIBindArrayOfStruct() call.
For information about skip parameters, see the section "Arrays of Structures" 
on page 5-17.

RELATED FUNCTIONS

OCIAttrGet()


--------------------------------OCIBindByName---------------------------------

OCIBindByName()

NAME

OCI Bind by Name

PURPOSE

Creates an association between a program variable and a placeholder in a SQL 
statement or PL/SQL block.

SYNTAX

sword OCIBindByName (
              OCIStmt       *stmtp, 
              OCIBind       **bindp,
              OCIError      *errhp,
              CONST text    *placeholder,
              sb4           placeh_len,
              dvoid         *valuep,
              sb4           value_sz,
              ub2           dty,
              dvoid         *indp,
              ub2           *alenp,
              ub2           *rcodep,
              ub4           maxarr_len,
              ub4           *curelep, 
              ub4           mode ); 

PARAMETERS


stmth (IN/OUT) - the statement handle to the SQL or PL/SQL statement 
being processed.

bindp (IN/OUT) - a pointer to a pointer to a bind handle which is implicitly
allocated by this call.  The bind handle maintains all the bind information for
this particular input value. The handle is feed implicitly when the statement
handle is deallocated.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

placeholder (IN) - the placeholder attributes are specified by name if
OCIBindByName() is being called.

placeh_len (IN) - the length of the placeholder name specified in placeholder.

valuep (IN/OUT) - a pointer to a data value or an array of data values of the 
type specified in the dty parameter. An array of data values can be specified 
for mapping into a PL/SQL table or for providing data for SQL multiple-row 
operations. When an array of bind values is provided, this is called an array 
bind in OCI terms. Additional attributes of the array bind (not bind to a 
column of ARRAY type) are set up in OCIBindArrayOfStruct() call. 
For a REF, named data type  bind, the valuep parameter is used only for IN 
bind data. The pointers to OUT buffers are set in the pgvpp parameter 
initialized by OCIBindObject(). For named data type and REF binds, the bind 
values are unpickled into the Object Cache. The OCI object navigational calls 
can then be used to navigate the objects and the refs in the Object Cache.
If the OCI_DATA_AT_EXEC mode is specified in the mode parameter, valuep 
is ignored for all data types. OCIBindArrayOfStruct() cannot be used and 
OCIBindDynamic() must be invoked to provide callback functions if desired. 

value_sz (IN) - the size of a data value. In the case of an array bind, this is
the maximum size of any element possible with the actual sizes being specified
in the alenp parameter.  
If the OCI_DATA_AT_EXEC mode is specified, valuesz
defines the maximum size of the data that can be ever provided at runtime for
data types other than named data types or REFs.

dty (IN) - the data type of the value(s) being bound. Named data types 
(SQLT_NTY) and REFs (SQLT_REF) are valid only if the application has been 
initialized in object mode. For named data types, or REFs, additional calls 
must be made with the bind handle to set up the datatype-specific attributes.

indp (IN/OUT) - pointer to an indicator variable or array. For scalar data 
types, this is a pointer to sb2 or an array of sb2s. For named data types, 

this pointer is ignored and the actual pointer to the indicator structure or 
an array of indicator structures is initialized by OCIBindObject(). 
Ignored for dynamic binds.
See the section "Indicator Variables" on page 2-29 for more information about 
indicator variables.

alenp (IN/OUT) - pointer to array of actual lengths of array elements. Each 
element in alenp is the length of the data in the corresponding element in the 
bind value array before and after the execute. This parameter is ignored for 
dynamic binds.

rcodep (OUT) - pointer to array of column level return codes. This parameter 
is ignored for dynamic binds.

maxarr_len (IN) - the maximum possible number of elements of type dty in a 
PL/SQL binds. This parameter is not required for non-PL/SQL binds. If 
maxarr_len is non-zero, then either OCIBindDynamic() or 
OCIBindArrayOfStruct() can be invoked to set up additional bind attributes. 

curelep(IN/OUT) - a pointer to the actual number of elements. This parameter 
is only required for PL/SQL binds.

mode (IN) - the valid modes for this parameter are:
OCI_DEFAULT. This is default mode.
OCI_DATA_AT_EXEC. When this mode is selected, the value_sz 
parameter defines the maximum size of the data that can be ever 
provided at runtime. The application must be ready to provide the OCI 
library runtime IN data buffers at any time and any number of times. 
Runtime data is provided in one of the two ways:
callbacks using a user-defined function which must be registered 
with a subsequent call to OCIBindDynamic(). 
a polling mechanism using calls supplied by the OCI. This mode 
is assumed if no callbacks are defined.
For more information about using the OCI_DATA_AT_EXEC mode, see 
the section "Runtime Data Allocation and Piecewise Operations" on 
page 7-16.
When the allocated buffers are not required any more, they should be 
freed by the client. 

COMMENTS

This call is used to perform a basic bind operation. The bind creates an
association between the address of a program variable and a placeholder in a
SQL statement or PL/SQL block. The bind call also specifies the type of data
which is being bound, and may also indicate the method by which data will be
provided at runtime.  This function also implicitly allocates the bind handle
indicated by the bindp parameter.  Data in an OCI application can be bound to
placeholders statically or dynamically. Binding is static when all the IN bind
data and the OUT bind buffers are well-defined just before the execute. Binding
is dynamic when the IN bind data and the OUT bind buffers are provided by the
application on demand at execute time to the client library. Dynamic binding is
indicated by setting the mode parameter of this call to OCI_DATA_AT_EXEC. 

For more information about dynamic binding, see the section "Runtime Data
Allocation and Piecewise Operations" on page 5-16.

Both OCIBindByName() and OCIBindByPos() take as a parameter a bind handle,
which is implicitly allocated by the bind call A separate bind handle is
allocated for each placeholder the application is binding.  Additional bind
calls may be required to specify particular attributes necessary when binding
certain data types or handling input data in certain ways: If arrays of
structures are being utilized, OCIBindArrayOfStruct() must be called to set up
the necessary skip parameters.  If data is being provided dynamically at
runtime, and the application will be using user-defined callback functions,
OCIBindDynamic() must be called to register the callbacks.  If a named data
type is being bound, OCIBindObject() must be called to specify additional
necessary information.

RELATED FUNCTIONS

OCIBindDynamic()
OCIBindObject()
OCIBindArrayOfStruct()
OCIAttrGet()



-------------------------------OCIBindByPos-----------------------------------


OCIBindByPos()

NAME

OCI Bind by Position

PURPOSE

Creates an association between a program variable and a placeholder in a SQL 
statement or PL/SQL block.

SYNTAX

sword OCIBindByPos ( 
              OCIStmt      *stmtp, 
              OCIBind      **bindp,
              OCIError     *errhp,
              ub4          position,
              dvoid        *valuep,
              sb4          value_sz,
              ub2          dty,
              dvoid        *indp,
              ub2          *alenp,
              ub2          *rcodep,
              ub4          maxarr_len,
              ub4          *curelep, 
              ub4          mode);

PARAMETERS


stmth (IN/OUT) - the statement handle to the SQL or PL/SQL statement 
being processed.

bindp (IN/OUT) - a pointer to a pointer to a bind handle which is implicitly
allocated by this call.  The bind handle maintains all the bind information for
this particular input value. The handle is feed implicitly when the statement
handle is deallocated.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

position (IN) - the placeholder attributes are specified by position if
ocibindp() is being called.

valuep (IN/OUT) - a pointer to a data value or an array of data values of the 
type specified in the dty parameter. An array of data values can be specified 
for mapping into a PL/SQL table or for providing data for SQL multiple-row 
operations. When an array of bind values is provided, this is called an array 
bind in OCI terms. Additional attributes of the array bind (not bind to a 
column of ARRAY type) are set up in OCIBindArrayOfStruct() call. 
For a REF, named data type  bind, the valuep parameter is used only for IN 
bind data. The pointers to OUT buffers are set in the pgvpp parameter 
initialized by OCIBindObject(). For named data type and REF binds, the bind 
values are unpickled into the Object Cache. The OCI object navigational calls 
can then be used to navigate the objects and the refs in the Object Cache.
If the OCI_DATA_AT_EXEC mode is specified in the mode parameter, valuep 
is ignored for all data types. OCIBindArrayOfStruct() cannot be used and 
OCIBindDynamic() must be invoked to provide callback functions if desired. 

value_sz (IN) - the size of a data value. In the case of an array bind, this is
the maximum size of any element possible with the actual sizes being specified
in the alenp parameter.  If the OCI_DATA_AT_EXEC mode is specified, valuesz
defines the maximum size of the data that can be ever provided at runtime for
data types other than named data types or REFs.

dty (IN) - the data type of the value(s) being bound. Named data types 
(SQLT_NTY) and REFs (SQLT_REF) are valid only if the application has been 
initialized in object mode. For named data types, or REFs, additional calls 
must be made with the bind handle to set up the datatype-specific attributes.

indp (IN/OUT) - pointer to an indicator variable or array. For scalar data 
types, this is a pointer to sb2 or an array of sb2s. For named data types, 
this pointer is ignored and the actual pointer to the indicator structure or 
an array of indicator structures is initialized by OCIBindObject(). Ignored 
for dynamic binds.
See the section "Indicator Variables" on page 2-29 for more information about 
indicator variables.

alenp (IN/OUT) - pointer to array of actual lengths of array elements. Each 
element in alenp is the length of the data in the corresponding element in the 
bind value array before and after the execute. This parameter is ignored for 
dynamic binds.

rcodep (OUT) - pointer to array of column level return codes. This parameter 
is ignored for dynamic binds.

maxarr_len (IN) - the maximum possible number of elements of type dty in a
PL/SQL binds. This parameter is not required for non-PL/SQL binds. If
maxarr_len is non-zero, then either OCIBindDynamic() or OCIBindArrayOfStruct()
can be invoked to set up additional bind attributes.

curelep(IN/OUT) - a pointer to the actual number of elements. This parameter 
is only required for PL/SQL binds.

mode (IN) - the valid modes for this parameter are: 

OCI_DEFAULT. This is default mode.

OCI_DATA_AT_EXEC. When this mode is selected, the value_sz parameter defines
the maximum size of the data that can be ever provided at runtime. The
application must be ready to provide the OCI library runtime IN data buffers at
any time and any number of times.

Runtime data is provided in one of the two ways - callbacks using a
user-defined function which must be registered with a subsequent call to
OCIBindDynamic() or a polling mechanism using calls supplied by the OCI. This
mode is assumed if no callbacks are defined.

For more information about using the OCI_DATA_AT_EXEC mode, see the section
"Runtime Data Allocation and Piecewise Operations" on page 7-16.

When the allocated buffers are not required any more, they should be 
freed by the client. 

COMMENTS

This call is used to perform a basic bind operation. The bind creates an
association between the address of a program variable and a placeholder in a
SQL statement or PL/SQL block. The bind call also specifies the type of data
which is being bound, and may also indicate the method by which data will be
provided at runtime.  This function also implicitly allocates the bind handle
indicated by the bindp parameter.  Data in an OCI application can be bound to
placeholders statically or dynamically. Binding is static when all the IN bind
data and the OUT bind buffers are well-defined just before the execute. Binding
is dynamic when the IN bind data and the OUT bind buffers are provided by the
application on demand at execute time to the client library. Dynamic binding is
indicated by setting the mode parameter of this call to OCI_DATA_AT_EXEC.

For more information about dynamic binding, see 
the section "Runtime Data Allocation and Piecewise Operations" on 
page 7-16

Both OCIBindByName() and OCIBindByPos() take as a parameter a bind handle,
which is implicitly allocated by the bind call A separate bind handle is
allocated for each placeholder the application is binding.

Additional bind calls may be required to specify particular attributes
necessary when binding certain data types or handling input data in certain
ways:

If arrays of structures are being utilized, OCIBindArrayOfStruct() must be
called to set up the necessary skip parameters.

If data is being provided dynamically at runtime, and the application will be
using user-defined callback functions, OCIBindDynamic() must be called to
register the callbacks.

If a named data type is being bound, OCIBindObject() must be called to specify
additional necessary information.

If a statement with RETURNING clause is used, a call to OCIBindDynamic() must
follow this call.

RELATED FUNCTIONS

OCIBindDynamic(), OCIBindObject(), OCIBindArrayOfStruct(), OCIAttrGet()



-------------------------------OCIBindDynamic---------------------------------

OCIBindDynamic()

NAME

OCI Bind Dynamic Attributes

PURPOSE

This call is used to register user callbacks for dynamic data allocation. 

SYNTAX

sword OCIBindDynamic( OCIBind     *bindp,
                    OCIError    *errhp,
                    dvoid       *ictxp, 
                    OCICallbackInBind         (icbfp)(/o_
                                dvoid            *ictxp,
                                OCIBind          *bindp,
                                ub4              iter, 
                                ub4              index, 
                                dvoid            **bufpp,
                                ub4              *alenp,
                                ub1              *piecep, 
                                dvoid            **indp _o/),
                    dvoid       *octxp,
                    OCICallbackOutBind         (ocbfp)(/o_
                                dvoid            *octxp,
                                OCIBind          *bindp,
                                ub4              iter, 
                                ub4              index, 
                                dvoid            **bufp, 
                                ub4              **alenpp,
                                ub1              *piecep,
                                dvoid            **indpp, 
                                ub2              **rcodepp _o/)   );

PARAMETERS

bindp (IN/OUT) - a bind handle returned by a call to OCIBindByName() or
OCIBindByPos().

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for
diagnostic information in the event of an error.

ictxp (IN) - the context pointer required by the call back function icbfp. 

icbfp (IN) - the callback function which returns a pointer to the IN bind value
or piece at run time. The callback takes in the following parameters.

ictxp (IN/OUT) - the context pointer for this callback function. 

bindp (IN) - the bind handle passed in to uniquely identify this bind variable.

iter (IN) - 1-based execute iteration value. 

index (IN) - index of the current array, for an array bind. 1 based not greater
than curele parameter of the bind call.

index (IN) - index of the current array, for an array bind. This parameter 
is 1-based, and may not be greater than curele parameter of the bind call. 

bufpp (OUT) - the pointer to the buffer. 

piecep (OUT) - which piece of the bind value. This can be one of the following
values - OCI_ONE_PIECE, OCI_FIRST_PIECE, OCI_NEXT_PIECE and OCI_LAST_PIECE.

indp (OUT) - contains the indicator value. This is apointer to either an sb2
value or a pointer to an indicator structure for binding named data types.

indszp (OUT) - contains the indicator value size. A pointer containing the size
of either an sb2 or an indicator structure pointer.

octxp (IN) - the context pointer required by the callback function ocbfp.

ocbfp (IN) - the callback function which returns a pointer to the OUT bind
value or piece at run time. The callback takes in the following parameters.

octxp (IN/OUT) - the context pointer for this call back function. 

bindp (IN) - the bind handle passed in to uniquely identify this bind 
variable. 

iter (IN) - 1-based execute iteration value. 

index (IN) - index of the current array, for an array bind. This parameter is
1-based, and must not be greater than curele parameter of the bind call.

bufpp (OUT) - a pointer to a buffer to write the bind value/piece. 

buflp (OUT) - returns the buffer size. 

alenpp (OUT) - a pointer to a storage for OCI to fill in the size of the bind
value/piece after it has been read.

piecep (IN/OUT) - which piece of the bind value. It will be set by the library
to be one of the following values - OCI_ONE_PIECE or OCI_NEXT_PIECE. The
callback function can leave it unchanged or set it to OCI_FIRST_PIECE or
OCI_LAST_PIECE. By default - OCI_ONE_PIECE.

indpp (OUT) - returns a pointer to contain the indicator value which either an
sb2 value or a pointer to an indicator structure for named data types.

indszpp (OUT) - returns a pointer to return the size of the indicator value
which is either size of an sb2 or size of an indicator structure.

rcodepp (OUT) - returns a pointer to contains the return code. 

COMMENTS

This call is used to register user-defined callback functions for providing
data for an UPDATE or INSERT if OCI_DATA_AT_EXEC mode was specified in a
previous call to OCIBindByName() or OCIBindByPos().

The callback function pointers must return OCI_CONTINUE if it the call is
successful. Any return code other than OCI_CONTINUE signals that the client
wishes to abort processing immediately.

For more information about the OCI_DATA_AT_EXEC mode, see the section "Runtime
Data Allocation and Piecewise Operations" on page 7-16.

RELATED FUNCTIONS

OCIBindByName(), OCIBindByPos()


---------------------------------OCIBindObject--------------------------------


OCIBindObject()

NAME

OCI Bind Object

PURPOSE

This function sets up additional attributes which are required for a named 
data type (object)  bind.

SYNTAX

sword OCIBindObject ( OCIBind          *bindp,
                    OCIError         *errhp, 
                    CONST OCIType    *type,
                    dvoid            **pgvpp, 
                    ub4              *pvszsp, 
                    dvoid            **indpp, 
                    ub4              *indszp, );


PARAMETERS

bindp (IN/OUT) - the bind handle returned by the call to OCIBindByName() 
or OCIBindByPos(). 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

type (IN) - points to the TDO which describes the type of the program 
variable being bound. Retrieved by calling OCITypeByName().

pgvpp (IN/OUT) - points to a pointer to the program variable buffer. For an
array, pgvpp points to an array of pointers. When the bind variable is also an
OUT variable, the OUT Named Data Type value or REF is allocated (unpickled) in
the Object Cache, and a pointer to the value or REF is returned, At the end of
execute, when all OUT values have been received, pgvpp points to an array of
pointer(s) to these newly allocated named data types in the object cache.

pgvpp is ignored if the OCI_DATA_AT_EXEC mode is set. Then the Named Data Type
buffers are requested at runtime. For static array binds, skip factors may be
specified using the OCIBindArrayOfStruct() call. The skip factors are used to
compute the address of the next pointer to the value, the indicator structure
and their sizes.

pvszsp (IN/OUT) - points to the size of the program variable. The size of the 
named data type is not required on input. For an array, pvszsp is an array of 
ub4s. On return, for OUT bind variables, this points to size(s) of the Named 
Data Types and REFs received. pvszsp is ignored if the OCI_DATA_AT_EXEC 
mode is set. Then the size of the buffer is taken at runtime.

indpp (IN/OUT) - points to a pointer to the program variable buffer containing
the parallel indicator structure. For an array, points to an array of
pointers. When the bind variable is also an OUT bind variable, memory is
allocated in the object cache, to store the unpickled OUT indicator values. At
the end of the execute when all OUT values have been received, indpp points to
the pointer(s) to these newly allocated indicator structure(s).  indpp is
ignored if the OCI_DATA_AT_EXEC mode is set. Then the indicator is requested at
runtime.

indszp (IN/OUT) - points to the size of the IN indicator structure program
variable. For an array, it is an array of sb2s. On return for OUT bind
variables, this points to size(s) of the received OUT indicator structures.
indszp is ignored if the OCI_DATA_AT_EXEC mode is set. Then the indicator size
is requested at runtime.

COMMENTS

This function sets up additional attributes which binding a named data type 
or a REF. An error will be returned if this function is called when the OCI 
environment has been initialized in non-object mode. 
This call takes as a paramter a type descriptor object (TDO) of datatype 
OCIType for the named data type being defined.  The TDO can be retrieved 
with a call to OCITypeByName().
If the OCI_DATA_AT_EXEC mode was specified in ocibindn() or ocibindp(), the 
pointers to the IN buffers are obtained either using the callback icbfp 
registered in the OCIBindDynamic() call or by the OCIStmtSetPieceInfo() call. 
The buffers are dynamically allocated for the OUT data and the pointers to 
these buffers are returned either by calling ocbfp() registered by the 
OCIBindDynamic() or by setting the pointer to the buffer in the buffer passed 
in by OCIStmtSetPieceInfo() called when OCIStmtExecute() returned 
OCI_NEED_DATA. The memory of these client library- allocated buffers must be 
freed when not in use anymore by using the OCIObjectFreee() call.

RELATED FUNCTIONS

OCIBindByName(), OCIBindByPos()





----------------------------------OCIBreak------------------------------------


OCIBreak()

NAME

OCI Break

PURPOSE

This call performs an immediate (asynchronous) abort of any currently 
executing OCI function that is associated with a server .

SYNTAX

sword OCIBreak ( dvoid      *hndlp,
                 OCIError   *errhp);


PARAMETERS

hndlp (IN) - the service context handle or the server context handle.

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

COMMENTS

This call performs an immediate (asynchronous) abort of any currently executing
OCI function that is associated with a server. It is normally used to stop a
long-running OCI call being processed on the server.  This call can take either
the service context handle or the server context handle as a parameter to
identify the function to be aborted.

RELATED FUNCTIONS

------------------------------OCIDefineArrayOfStruct--------------------------


OCIDefineArrayOfStruct()

NAME

OCI Define for Array of Structures

PURPOSE

This call specifies additional attributes necessary for a static array define.

SYNTAX

sword OCIDefineArrayOfStruct ( OCIDefine   *defnp,
                             OCIError    *errhp,
                             ub4         pvskip, 
                             ub4         indskip, 
                             ub4         rlskip,
                             ub4         rcskip );


PARAMETERS

defnp (IN) - the handle to the define structure which was returned by a call to
OCIDefineByPos().

errhp (IN) - an error handle which can be passed to OCIErrorGet() for
diagnostic information in the event of an error.

pvskip (IN) - skip parameter for the next data value.

indskip (IN) - skip parameter for the next indicator location. 

rlskip (IN) - skip parameter for the next return length value.

rcskip (IN) - skip parameter for the next return code.

COMMENTS

This call specifies additional attributes necessary for an array define, used
in an array of structures (multi-row, multi-column) fetch.  For more
information about skip parameters, see the section "Skip Parameters" on page
5-18.

RELATED FUNCTIONS

OCIDefineByPos(), OCIDefineObject()


---------------------------------------OCIDefineByPos--------------------------


OCIDefineByPos()

NAME

OCI Define By Position

PURPOSE

Associates an item in a select-list with the type and output data buffer. 

SYNTAX

sb4 OCIDefineByPos ( 
              OCIStmt     *stmtp, 
              OCIDefine   **defnp,
              OCIError    *errhp,
              ub4         position,
              dvoid       *valuep,
              sb4         value_sz,
              ub2         dty,
              dvoid       *indp,
              ub2         *rlenp,
              ub2         *rcodep,
              ub4         mode );


PARAMETERS


stmtp (IN) - a handle to the requested SQL query operation.

defnp (IN/OUT) - a pointer to a pointer to a define handle which is implicitly
allocated by this call.  This handle is used to store the define information
for this column.

errhp (IN) - an error handle which can be passed to OCIErrorGet() for
diagnostic information in the event of an error.

position (IN) - the position of this value in the select list. Positions are 
1-based and are numbered from left to right. For example, in the SELECT 
statement

SELECT empno, ssn, mgrno FROM employees;

empno is at position 1, ssn is at position 2, and mgrno is at position 3.

valuep (IN/OUT) - a pointer to a buffer or an array of buffers of the type
specified in the dty parameter. A number of buffers can be specified when
results for more than one row are desired in a single fetch call.

value_sz (IN) - the size of each valuep buffer in bytes. If the data is stored
internally in VARCHAR2 format, the number of characters desired, if different
from the buffer size in bytes, may be additionally specified by the using
OCIAttrSet().  In an NLS conversion environment, a truncation error will be
generated if the number of bytes specified is insufficient to handle the number
of characters desired.

dty (IN) - the data type. Named data type (SQLT_NTY) and REF (SQLT_REF) are
valid only if the environment has been intialized with in object mode. For a
listing of datatype codes and values, refer to Chapter 3, "Datatypes".

indp (IN) - pointer to an indicator variable or array. For scalar data types, 
pointer to sb2 or an array of sb2s. Ignored for named data types. For named 
data types, a pointer to a named data type indicator structure or an array of 
named data type indicator structures is associated by a subsequent 
OCIDefineObject() call. 

See the section "Indicator Variables" on page 2-29 for more information about 
indicator variables.

rlenp (IN/OUT) - pointer to array of length of data fetched. Each element in 
rlenp is the length of the data in the corresponding element in the row after 
the fetch. 

rcodep (OUT) - pointer to array of column-level return codes

mode (IN) - the valid modes are:

OCI_DEFAULT. This is the default mode.
OCI_DYNAMIC_FETCH. For applications requiring dynamically 
allocated data at the time of fetch, this mode must be used. The user may 
additionally call OCIDefineDynamic() to set up a callback function that 
will be invoked to receive the dynamically allocated buffers and to set 
up the memory allocate/free callbacks and the context for the callbacks. 
valuep and value_sz are ignored in this mode. 

COMMENTS

This call defines an output buffer which will receive data retreived from 
Oracle. The define is a local step which is necessary when a SELECT statement 
returns data to your OCI application.

This call also implicitly allocates the define handle for the select-list item.
Defining attributes of a column for a fetch is done in one or more calls. The 
first call is to OCIDefineByPos(), which defines the minimal attributes 
required to specify the fetch. 
This call takes as a parameter a define handle, which must have been 
previously allocated with a call to OCIHandleAlloc().
Following the call to OCIDefineByPos() additional define calls may be 
necessary for certain data types or fetch modes:
A call to OCIDefineArrayOfStruct() is necessary to set up skip parameters 
for an array fetch of multiple columns.
A call to OCIDefineObject() is necessary to set up the appropriate 
attributes of a named data type fetch. In this case the data buffer pointer 
in ocidefn() is ignored.
Both OCIDefineArrayOfStruct() and OCIDefineObject() must be called 
after ocidefn() in order to fetch multiple rows with a column of named 
data types.
For a LOB define, the buffer pointer must be a lob locator of type 
OCILobLocator , allocated by the OCIDescAlloc() call. LOB locators, and not 
LOB values, are always returned for a LOB column. LOB values can then be 
fetched using OCI LOB calls on the fetched locator.
For NCHAR (fixed and varying length), the buffer pointer must point to an 
array of bytes sufficient for holding the required NCHAR characters. 
Nested table columns are defined and fetched like any other named data type. 
If the mode parameter is this call is set to OCI_DYNAMIC_FETCH, the client 
application can fetch data dynamically at runtime.
Runtime data can be provided in one of two ways:
callbacks using a user-defined function which must be registered with a 
subsequent call to OCIDefineDynamic(). When the client library needs a 
buffer to return the fetched data, the callback will be invoked and the 
runtime buffers provided will return a piece or the whole data. 
a polling mechanism using calls supplied by the OCI. This mode is 
assumed if no callbacks are defined. In this case, the fetch call returns the 
OCI_NEED_DATA error code, and a piecewise polling method is used 
to provide the data.
RELATED FUNCTIONS: For more information about using the 
OCI_DYNAMIC_FETCH mode, see the section "Runtime Data 
Allocation and Piecewise Operations" on page 5-16 of Volume 1..
For more information about the define step, see the section "Defining" 
on page 2-30.

RELATED FUNCTIONS

OCIDefineArrayOfStruct(), OCIDefineDynamic(), OCIDefineObject()


---------------------------------OCIDefineDynamic------------------------------


OCIDefineDynamic()

NAME

OCI Define Dynamic Fetch Attributes

PURPOSE

This call is used to set the additional attributes required if the 
OCI_DYNAMIC_FETCH mode was selected in OCIDefineByPos(). 

SYNTAX

sword OCIDefineDynamic( OCIDefine   *defnp,
                      OCIError    *errhp,
                      dvoid       *octxp, 
                      OCICallbackDefine (ocbfp)(/o_
                                  dvoid             *octxp,
                                  OCIDefine         *defnp,
                                  ub4               iter, 
                                  dvoid             **bufpp,
                                  ub4               **alenpp,
                                  ub1               *piecep,
                                  dvoid             **indpp,
                                  ub2               **rcodep _o/)  );


PARAMETERS


defnp (IN/OUT) - the handle to a define structure returned by a call to 
OCIDefineByPos().

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

octxp (IN) - points to a context for the callback function. 

ocbfp (IN) - points to a callback function. This is invoked at runtime to get 
a pointer to the buffer into which the fetched data or a piece of it will be 
retreived. The callback also specifies the indicator, the return code and the 
lengths of the data piece and indicator. The callback has the following 
parameters:

octxp (IN) - a context pointer passed as an argument to all the callback 
functions.

defnp (IN) - the define handle.

iter (IN) - which row of this current fetch.

bufpp (OUT) - returns a pointer to a buffer to store the column value, ie. 
*bufp points to some appropriate storage for the column value.

alenpp (OUT) - returns a pointer to the length of the buffer. *alenpp 
contains the size of the buffer after return from callback. Gets set to 
actual data size after fetch.

piecep (IN/OUT) - returns a piece value, as follows:

The IN value can be OCI_ONE_PIECE, OCI_FIRST_PIECE or OCI_NEXT_PIECE.

The OUT value can be OCI_ONE_PIECE if the IN value was OCI_ONE_PIECE.

The OUT value can be OCI_ONE_PIECE or OCI_FIRST_PIECE if the IN value was
OCI_FIRST_PIECE.

The OUT value can only be OCI_NEXT_PIECE or OCI_LAST_PIECE if the IN value was
OCI_NEXT_PIECE.

indpp (IN) - indicator variable pointer

rcodep (IN) - return code variable pointer

COMMENTS

This call is used to set the additional attributes required if the 
OCI_DYNAMIC_FETCH mode has been selected in a call to 
OCIDefineByPos(). 
When the OCI_DYNAMIC_FETCH mode is selected, buffers will be 
dynamically allocated for REF, and named data type, values to receive the 
data. The pointers to these buffers will be returned. 
If OCI_DYNAMIC_FETCH mode was selected, and the call to 
OCIDefineDynamic() is skipped, then the application can fetch data piecewise 
using OCI calls.
For more information about OCI_DYNAMIC_FETCH mode, see the section 
"Runtime Data Allocation and Piecewise Operations" on page 7-16.

RELATED FUNCTIONS

OCIDefineObject()


-------------------------------------------------------------------------------


OCIDefineObject()

NAME

OCI Define Named Data Type attributes

PURPOSE

Sets up additional attributes necessary for a Named Data Type define.

SYNTAX

sword OCIDefineObject ( OCIDefine       *defnp,
                      OCIError        *errhp,
                      CONST OCIType   *type,
                      dvoid           **pgvpp, 
                      ub4             *pvszsp, 
                      dvoid           **indpp, 
                      ub4             *indszp );


PARAMETERS


defnp (IN/OUT) - a define handle previously allocated in a call to 
OCIDefineByPos(). 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.
type (IN, optional) - points to the Type Descriptor Object (TDO) which 
describes the type of the program variable. Only used for program variables 
of type SQLT_NTY. This parameter is optional, and may be passed as NULL 
if it is not being used.

pgvpp (IN/OUT) - points to a pointer to a program variable buffer. For an 
array, pgvpp points to an array of pointers. Memory for the fetched named data 
type instance(s) is dynamically allocated in the object cache. At the end of the 
fetch when all the values have been received, pgvpp points to the pointer(s) to
these newly allocated named data type instance(s). The application must call 
OCIObjectMarkDel() to deallocate the named data type instance(s) when they 
are no longer needed. 

pvszsp (IN/OUT) - points to the size of the program variable. For an array, it 
is an array of ub4s. On return points to the size(s) of unpickled fetched 
values.

indpp (IN/OUT) - points to a pointer to the program variable buffer 
containing the parallel indicator structure. For an array, points to an array 
of pointers. Memory is allocated to store the indicator structures in the 
object cache. At the end of the fetch when all values have been received, 
indpp points to the pointer(s) to these newly allocated indicator structure(s).

indszp (IN/OUT) - points to the size(s) of the indicator structure program 
variable. For an array, it is an array of ub4s. On return points to the size(s)
of the unpickled fetched indicator values.

COMMENTS

This call sets up additional attributes necessary for a Named Data Type define.An error will be returned if this function is called when the OCI environment 
has been initialized in non-Object mode.
This call takes as a paramter a type descriptor object (TDO) of datatype 
OCIType for the named data type being defined.  The TDO can be retrieved 
with a call to OCITypeByName().
See the description of OCIInitialize() on page 13 - 43 for more information 
about initializing the OCI process environment.

RELATED FUNCTIONS

OCIDefineByPos()

-------------------------------------------------------------------------------

OCIDescribeAny()

NAME

OCI Describe Any

PURPOSE

Describes existing schema objects.

SYNTAX

sword OCIDescribeAny ( OCISvcCtx     *svchp,
                       OCIError      *errhp,
                       dvoid         *objptr,
                       ub4           objptr_len,
                       ub1           objptr_typ,
                       ub1           info_level,
		       ub1           objtype,
                       OCIDesc       *dschp );

PARAMETERS


svchp (IN)

A service context handle. 

errhp (IN/OUT)

An error handle which can be passed to OCIErrorGet() for diagnostic information
in the event of an error.

objptr (IN)

This parameter can be either 

   1.a string containing the name of the schema object to be described 
   2.a pointer to a REF to the TDO (for a type) 
   3.a pointer to a TDO (for a type). 

These cases are distinguished by passing the appropriate value for
objptr_typ. This parameter must be non-NULL.

In case 1, the string containing the object name should be in the format
<schema-name>.<object-name>. No database links are allowed.

The object name is interpreted by the following SQL rules: 

     If <schema-name> is NULL, the name refers to the object (of type table /
     view / procedure / function / package / type / synonym / sequence) with
     name described by <object-name> in the schema of the current user. When
     connected to an Oracle7 Server, the only valid types are procedure and
     function.  

     If <schema-name> is non-NULL, the name refers to the object
     with name described by <object-name>, in the schema with name described by
     <schema-name>.  objnm_len (IN)

The length of the name string pointed to by objptr. Must be non-zero if a name
is passed.  Can be zero if objptr is a pointer to a TDO or its REF.

objptr_typ (IN)

The type of object passed in objptr. Valid values are: 

     OCI_OTYPE_NAME, if objptr points to the name of a schema object 
     OCI_OTYPE_REF, if objptr is a pointer to a REF to a TDO 
     OCI_OTYPE_PTR, if objptr is a pointer to a TDO info_level (IN)

Reserved for future extensions. Pass OCI_DEFAULT. 

objtyp (IN/OUT)

The type of schema object being described. Valid values are: 

     OCI_PTYPE_TABLE, for tables 
     OCI_PTYPE_VIEW, for views 
     OCI_PTYPE_PROC, for procedures 
     OCI_PTYPE_FUNC, for functions 
     OCI_PTYPE_PKG, for packages 
     OCI_PTYPE_TYPE, for types 
     OCI_PTYPE_SYN, for synonyms 
     OCI_PTYPE_SEQ, for sequences 
     OCI_PTYPE_UNK, for unknown schema objects 

A value for this argument must be specified. If OCI_PTYPE_UNK is specified,
then the description of an object with the specified name in the current schema
is returned, if such an object exists, along with the actual type of the
object.

dschp (IN/OUT)

A describe handle that is populated with describe information about the object
after the call.  Must be non-NULL.

COMMENTS

This is a generic describe call that describes existing schema objects: tables,
views, synonyms, procedures, functions, packages, sequences, and types. This
call populates the describe handle with the object-specific attributes which
can be obtained through an OCIAttrGet() call.

An OCIParamGet() on the describe handle returns a parameter descriptor for a
specified position. Parameter positions begin with 1. Calling OCIAttrGet() on
the parameter descriptor returns the specific attributes of a stored procedure
or function parameter or a table column descriptor as the case may be.

These subsequent calls do not need an extra round trip to the server because
the entire schema object description cached on the client side by
OCIDescribeAny(). Calling OCIAttrGet() on the describe handle can also return
the total number of positions.

See Chapter 6, "Describing Schema Metadata", for more information about
describe operations.

RELATED FUNCTIONS

OCIAQEnq(), OCIParamGet() 



-------------------------------------------------------------------------------


OCIDescriptorAlloc()

NAME

OCI Descriptor or lob locators Allocate

PURPOSE

Allocates storage to hold certain data types. The descriptors can be used as
bind or define variables.

SYNTAX

sword OCIDesccriptorAlloc ( CONST dvoid   *parenth,
                            dvoid         **descpp, 
                            ub4           type,
                            size_t        xtramem_sz,
                            dvoid         **usrmempp);

PARAMETERS

parenth (IN) - an environment handle. 

descpp (OUT) - returns a descriptor or LOB locator of desired type. 

type (IN) - specifies the type of descriptor or LOB locator to be allocated. 
The specific types are:

     OCI_DTYPE_SNAP - specifies generation of snapshot descriptor of C type
     OCISnapshot 
     OCI_DTYPE_LOB - specifies generation of a LOB value type locator 
     (for a BLOB or CLOB) of C type OCILobLocator 
     OCI_DTYPE_FILE - specifies generation of a FILE value type locator of 
     C type OCILobLocator. 
     OCI_DTYPE_ROWID - specifies generation of a ROWID descriptor of C type
     OCIRowid. 
     OCI_DTYPE_COMPLEXOBJECTCOMP - specifies generation of a complex object
     retrieval descriptor of C type OCIComplexObjectComp. 
     OCI_DTYPE_AQENQ_OPTIONS - specifies generation of an advanced queueing
     enqueue options descriptor of C type OCIAQEnqOptions. 
     OCI_DTYPE_AQDEQ_OPTIONS - specifies generation of an advanced queueing
     dequeue options descriptor of C type OCIAQDeqOptions. 
     OCI_DTYPE_AQMSG_PROPERTIES - specifies generation of an advanced queueing
     message properties descriptor of C type OCIAQMsgProperties. 
     OCI_DTYPE_AQAGENT - specifies generation of an advanced queueing agent
     descriptor of C type OCIAQAgent.

xtramemsz (IN) - specifies an amount of user memory to be allocated for use by
the application.

usrmempp (OUT) - returns a pointer to the user memory of size xtramemsz 
allocated by the call for the user. 

COMMENTS

Returns a pointer to an allocated and initialized structure, corresponding to 
the type specified in type. A non-NULL descriptor or LOB locator is returned 
on success. No diagnostics are available on error.

This call returns OCI_SUCCESS if successful, or OCI_INVALID_HANDLE if an
out-of-memory error occurs.

For more information about the xtramem_sz parameter and user memory allocation,
refer to "User Memory Allocation" on page 2-12.

RELATED FUNCTIONS

OCIDescriptorFree()


-------------------------------------------------------------------------------


OCIDescriptorFree()

NAME

OCI Descriptor Free

PURPOSE

Deallocates a previously allocated descriptor.

SYNTAX

sword OCIDescriptorFree ( dvoid    *descp,
                          ub4      type);


PARAMETERS


descp (IN) - an allocated descriptor. 

type (IN) - specifies the type of storage to be freed. The specific types are: 

     OCI_DTYPE_SNAP - snapshot descriptor 
     OCI_DTYPE_LOB - a LOB value type descriptor 
     OCI_DTYPE_FILE - a FILE value type descriptor 
     OCI_DTYPE_ROWID - a ROWID descriptor 
     OCI_DTYPE_COMPLEXOBJECTCOMP - a complex object retrieval descriptor 
     OCI_DTYPE_AQENQ_OPTIONS - an AQ enqueue options descriptor 
     OCI_DTYPE_AQDEQ_OPTIONS - an AQ dequeue options descriptor 
     OCI_DTYPE_AQMSG_PROPERTIES - an AQ message properties descriptor 
     OCI_DTYPE_AQAGENT - an AQ agent descriptor 

COMMENTS

This call frees up storage associated with the descriptor, corresponding to the
type specified in type. Returns OCI_SUCCESS or OCI_INVALID_HANDLE.  All
descriptors must be explicitly deallocated. OCI will not deallocate a
descriptor if the environment handle is deallocated.

RELATED FUNCTIONS

OCIDescriptorAlloc()

-------------------------------------------------------------------------------


OCIEnvInit()

Name

OCI Environment Initialize

PURPOSE

This call initializes the OCI environment handle.

SYNTAX

sword OCIEnvInit ( OCIEnv    **envp,
                   ub4       mode,
                   size_t    xtramemsz,
                   dvoid     **usrmempp );


PARAMETERS

envpp (OUT) - a pointer to a handle to the environment. 

mode (IN) - specifies initialization of an environment mode. The only valid 
mode is OCI_DEFAULT for default mode

xtramemsz (IN) - specifies the amount of user memory to be allocated. 

usrmempp (OUT) - returns a pointer to the user memory of size xtramemsz 
allocated by the call for the user.


COMMENTS
This call allocates and initializes an OCI environment handle. No changes are
done to an already initialized handle. If OCI_ERROR or OCI_SUCCESS_WITH_INFO is
returned, the environment handle can be used to obtain ORACLE specific errors
and diagnostics.

This call is processed locally, without a server round-trip.

The environment handle can be freed using OCIHandleFree(). 

For more information about the xtramemsz parameter and user memory allocation,
refer to "User Memory Allocation" on page 2-12.

RELATED FUNCTIONS

OCIHandleAlloc(), OCIHandleFree() 




-------------------------------------------------------------------------------


OCIErrorGet()

NAME

OCI Error Get diagnostic records

PURPOSE

Returns an error message in the buffer provided and an ORACLE error.

SYNTAX

sword OCIErrorGet ( dvoid      *hndlp, 
                    ub4        recordno,
                    text       *sqlstate,
                    ub4        *errcodep, 
                    text       *bufp,
                    ub4        bufsiz,
                    ub4        type );


PARAMETERS

hndlp (IN) - the error handle, in most cases, or the environment handle (for 
errors on OCIEnvInit(), OCIHandleAlloc()).

recordno (IN) - indicates the status record from which the application seeks 
info. Starts from 1. 

sqlstate (OUT) - Not supported in Version 8.0.

errcodep (OUT) - an ORACLE Error is returned.

bufp (OUT) - the error message text is returned.

bufsiz (IN) - the size of the buffer provide to get the error message.

type (IN) - the type of the handle.

COMMENTS

Returns an error message in the buffer provided and an ORACLE error. 
Currently does not support SQL state. This call can be called a multiple 
number of times if there are more than one diagnostic record for an error.

The error handle is originally allocated with a call to OCIHandleAlloc().

EXAMPLE

The following sample code demonstrates how you can use OCIErrorGet() in an
error-handling routine. This routine prints out the type of status code
returned by an OCI function, and if an error occurred, OCIErrorGet() retrieves
the text of the message, which is printed.

static void checkerr(errhp, status)

OCIError *errhp;

sword status;

{

  text errbuf[512];

  ub4 buflen;

  ub4 errcode;


switch (status)

  {

  case OCI_SUCCESS:

    break;

  case OCI_SUCCESS_WITH_INFO:

    printf("ErrorOCI_SUCCESS_WITH_INFO\n");

    break;

  case OCI_NEED_DATA:

    printf("ErrorOCI_NEED_DATA\n");

    break;

  case OCI_NO_DATA:

    printf("ErrorOCI_NO_DATA\n");

    break;

  case OCI_ERROR:

    OCIErrorGet ((dvoid *) errhp, (ub4) 1, (text *) NULL, &errcode,

            errbuf, (ub4) sizeof(errbuf), (ub4) OCI_HTYPE_ERROR);

    printf("Error%s\n", errbuf);

    break;

  case OCI_INVALID_HANDLE:

    printf("ErrorOCI_INVALID_HANDLE\n");

    break;

  case OCI_STILL_EXECUTING:

    printf("ErrorOCI_STILL_EXECUTE\n");

    break;

  case OCI_CONTINUE:

    printf("ErrorOCI_CONTINUE\n");

    break;

  default:

    break;

  }

}

RELATED FUNCTIONS

OCIHandleAlloc()




-------------------------------------------------------------------------------



OCIHandleAlloc()

NAME

OCI Handle Allocate 

PURPOSE

This call returns a pointer to an allocated and initialized handle.

SYNTAX

sword OCIHandleAlloc ( CONST dvoid   *parenth,
                       dvoid         **hndlpp, 
                       ub4           type, 
                       size_t        xtramem_sz,
                       dvoid         **usrmempp);


PARAMETERS


parenth (IN) - an environment or a statement handle. 

hndlpp (OUT) - returns a handle to a handle type. 

type (IN) - specifies the type of handle to be allocated. The specific types 
are: 

     OCI_HTYPE_ERROR - specifies generation of an error report handle of C type
     OCIError 
     OCI_HTYPE_SVCCTX - specifies generation of a service context handle of C 
     type OCISvcCtx 
     OCI_HTYPE_STMT - specifies generation of a statement (application request)
     handle of C type OCIStmt 
     OCI_HTYPE_DESCRIBE - specifies generation of a select list description 
     handle of C type OCIDescribe 
     OCI_HTYPE_SERVER - specifies generation of a server context handle of C 
     type OCIServer 
     OCI_HTYPE_SESSION - specifies generation of a user session handle of C 
     type OCISession 
     OCI_HTYPE_TRANS - specifies generation of a transaction context handle 
     of C type OCITrans 
     OCI_HTYPE_COMPLEXOBJECT - specifies generation of a complex object 
     retrieval handle of C type OCIComplexObject 
     OCI_HTYPE_SECURITY - specifies generation of a security handle of C type
     OCISecurity


xtramem_sz (IN) - specifies an amount of user memory to be allocated.

usrmempp (OUT) - returns a pointer to the user memory of size xtramemsz 
allocated by the call for the user. 

COMMENTS

Returns a pointer to an allocated and initialized structure, corresponding to 
the type specified in type. A non-NULL handle is returned on success. Bind 
handle and define handles are allocated with respect to a statement handle. All
other handles are allocated with respect to an environment handle which is 
passed in as a parent handle.

No diagnostics are available on error. This call returns OCI_SUCCESS if 
successful, or OCI_INVALID_HANDLE if an out-of-memory error occurs.

Handles must be allocated using OCIHandleAlloc() before they can be passed 
into an OCI call.

To allocate and initialize an environment handle, call OCIEnvInit(). 

     See Also: For more information about using the xtramem_sz parameter for
     user memory allocation, refer to "User Memory Allocation" on page 2-12.

EXAMPLE

The following sample code shows OCIHandleAlloc() being used to allocate a
variety of handles at the beginning of an application:

OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4) 
               OCI_HTYPE_ERROR, 0, (dvoid **) &tmp);
OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) 
               OCI_HTYPE_SERVER, 0, (dvoid **) &tmp);
OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) 
               OCI_HTYPE_SVCCTX, 0, (dvoid **) &tmp);

RELATED FUNCTIONS

OCIHandleFree(), OCIEnvInit()


-------------------------------------------------------------------------------


OCIHandleFree()

NAME

OCI Handle Free

PURPOSE

This call explicitly deallocates a handle.

SYNTAX

sword OCIHandleFree ( dvoid     *hndlp,
                      ub4       type);


PARAMETERS


hndlp (IN) - an opaque pointer to some storage.

type (IN) - specifies the type of storage to be allocated. The specific types are:
OCI_HTYPE_ENV - an environment handle
OCI_HTYPE_ERROR - an error report handle
OCI_HTYPE_SVCCTX - a service context handle
OCI_HTYPE_STMT - a statement (application request) handle
OCI_HTYPE_BIND - a bind information handle
OCI_HTYPE_DEFINE - a column definition handle
OCI_HTYPE_DESCRIBE  - a select list description handle
OCI_HTYPE_SERVER - a server handle
OCI_HTYPE_SESSION - a user authentication handle
OCI_HTYPE_TRANS - a transaction handle
OCI_HTYPE_COMPLEXOBJECT - a complex object retrieval handle
OCI_HTYPE_SECURITY - a security handle

COMMENTS

This call frees up storage associated with a handle, corresponding to the type 
specified in the type parameter.
This call returns either OCI_SUCCESS or OCI_INVALID_HANDLE.
All handles must be explicitly deallocated. OCI will not deallocate a child 
handle if the parent is deallocated.

RELATED FUNCTIONS

OCIHandleAlloc()



-------------------------------------------------------------------------------

OCIInitialize()

NAME

OCI Process Initialize

PURPOSE

Initializes the OCI process environment.

SYNTAX

sword OCIInitialize ( ub4           mode,
                    CONST dvoid   *ctxp, 
                    CONST dvoid   *(*malocfp) 
                                  ( dvoid *ctxp,
                                    size_t size ),
                    CONST dvoid   *(*ralocfp)
                                  ( dvoid *ctxp,
                                    dvoid *memp,
                                    size_t newsize ),
                    CONST void    (*mfreefp)
                                  ( dvoid *ctxp,
                                    dvoid *memptr ));


PARAMETERS


mode (IN) - specifies initialization of the mode. The valid modes are:
  OCI_DEFAULT - default mode.
  OCI_THREADED - threaded environment. In this mode, internal data 
  structures are protected from concurrent accesses by multiple threads. 
  OCI_OBJECT - will use navigational object interface. 

ctxp (IN) - user defined context for the memory call back routines. 

malocfp (IN) - user-defined memory allocation function. If mode is 
OCI_THREADED, this memory allocation routine must be thread safe.
  ctxp - context pointer for the user-defined memory allocation function.
  size - size of memory to be allocated by the user-defined memory 
         allocation function

ralocfp (IN) - user-defined memory re-allocation function. If mode is 
OCI_THREADED, this memory allocation routine must be thread safe.
  ctxp - context pointer for the user-defined memory reallocation 
         function.
  memp - pointer to memory block
  newsize - new size of memory to be allocated

mfreefp (IN) - user-defined memory free function. If mode is 
OCI_THREADED, this memory free routine must be thread safe.
  ctxp - context pointer for the user-defined memory free function.
  memptr - pointer to memory to be freed


EXAMPLE
See the description of OCIStmtPrepare() on page 13-96 for an example showing 
the use of OCIInitialize().

COMMENTS

This call initializes the OCI process environment.
OCIInitialize() must be invoked before any other OCI call. 

RELATED FUNCTIONS
OCIEnvInit()





-------------------------------------------------------------------------------

OCILdaToSvcCtx()

NAME

OCI toggle version 7 Lda_Def to SerVice context handle

PURPOSE

Converts a V7 Lda_Def to a V8 service context handle.

SYNTAX

sword OCILdaToSvcCtx ( OCISvcCtx  **svchpp,
                       OCIError   *errhp,
                       Lda_Def    *ldap );


PARAMETERS

svchpp (IN/OUT) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

ldap (IN/OUT) - the V7 logon data area returned by OCISvcCtxToLda() from 
this service context.

COMMENTS

Converts a V7 Lda_Def to a V8 service context handle. The action of this call 
can be reversed by passing the resulting service context handle to the 
OCISvcCtxToLda() function.

If the Service context has been converted to an Lda_Def, only Oracle7 calls may
be used. It is illegal to make Oracle8 OCI calls without first resetting the
Lda_Def to a service context.

The OCI_ATTR_IN_V8_MODE attribute of the server handle or service context
handle enables an application to determine whether the application is currently
in Oracle7 mode or Oracle8 mode. See Appendix B, "Handle and Descriptor
Attributes", for more information.

RELATED FUNCTIONS

OCISvcCtxToLda()



-------------------------------------------------------------------------------

OCILobAppend()


NAME

OCI Lob APpend

PURPOSE

Appends a LOB value at the end of another LOB. 

SYNTAX
sword OCILobAppend ( OCISvcCtx        *svchp,
                     OCIError         *errhp,
                     OCILobLocator    *dst_locp,
                     OCILobLocator    *src_locp );


PARAMETERS

svchp (IN) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

dst_locp (IN/OUT) - a locator uniquely referencing the destination LOB. 

src_locp (IN/OUT) - a locator uniquely referencing the source LOB. 


COMMENTS

Appends a LOB value at the end of LOB. The data is 
copied from the source to the destination at the end of the destination. The 
source and the destination must already exist. The destination LOB is 
extended to accommodate the newly written data.

It is an error to extend the destination LOB beyond the maximum length 
allowed or to try to copy from a NULL LOB. 

Both the source and the destination LOB locators must be of the same type
(i.e., they must both be BLOBs or both be CLOBs). LOB buffering must not be
enabled for either type of locator.

This function does not accept a FILE locator as the source or the destination. 

RELATED FUNCTIONS

OCILobTrim()
OCIErrorGet()
OCILobWrite()
OCILobCopy()


-------------------------------------------------------------------------------

OCILobAssign()


NAME

OCI Lob ASsiGn



PURPOSE

Assigns one LOB/FILE locator to another.


SYNTAX
sword OCILobAssign ( OCIEnv                *envhp, 
                     OCIError              *errhp, 
                     CONST OCILobLocator   *src_locp, 
                     OCILobLocator         **dst_locpp );



PARAMETERS

envhp (IN/OUT) - OCI environment handle initialized in object mode.

errhp (IN/OUT) - The OCI error handle. If there is an error, it is recorded 
in errhp and this function returns OCI_ERROR. Diagnostic information can be 
obtained by calling OCIErrorGet().

src_locp (IN) - LOB locator to copy from.

dst_locpp (IN/OUT) - LOB locator to copy to.  The caller must allocate space 
for the OCILobLocator by calling OCIDescriptorAlloc().

COMMENTS

Assign source locator to destination locator. After the assignment, both
locators refer to the same LOB value. For internal LOBs, the source locator's
LOB value gets copied to the destination locator's LOB value only when the
destination locator gets stored in the table.  Therefore, issuing a flush of
the object containing the destination locator will copy the LOB value.

For FILEs, only the locator that refers to the file is copied to the table. The
OS file itself is not copied.

It is an error to assign a FILE locator to an internal LOB locator, and vice
versa.

If the source locator is for an internal LOB that was enabled for buffering,
and the source locator has been used to modify the LOB data through the LOB
buffering subsystem, and the buffers have not been flushed since the write,
then the source locator may not be assigned to the destination locator. This is
because only one locator per LOB may modify the LOB data through the LOB
buffering subsystem.

The value of the input destination locator must either be NULL, or it must have
already been allocated with a call to OCIDescriptorAlloc(). For example, assume
the following declarations:

OCILobLocator         *source_loc = (OCILobLocator *) 0;
OCILobLocator         *dest_loc = (OCILobLocator *) 0;


An application could allocate the source_loc locator as follows: 

if (OCIDescriptorAlloc((dvoid *) envhp, (dvoid **) &source_loc,
                       (ub4) OCI_DTYPE_LOB, (size_t) 0, (dvoid **) 0))
    handle_error;


Assume that it then selects a LOB from a table into the source_loc in order to
initialize it. The application could then do one of the following to assign the
value of source_loc to dest_loc:

   1.Pass in NULL for the value of the destination locator and let 
     OCILobAssign() allocate space for dest_loc and copy the source into it: 

     if (OCILobAssign(envhp, errhp, source_loc, &dest_loc)) 
             handle_error;


   2.Allocate dest_loc, and pass the preallocated destination locator to
     OCILobAssign(): 

     if (OCIDescriptorAlloc((dvoid *) envhp, (dvoid **) &dest_loc,

             (ub4)OCI_DTYPE_LOB, (size_t) 0, (dvoid **) 0))
             handle_error;
     if (OCILobAssign(envhp, errhp, source_loc, &dest_loc)) 
             handle_error;


RELATED FUNCTIONS
OCIErrorGet(), OCILobIsEqual(), OCILobLocatorIsInit(), OCILobEnableBuffering() 



-------------------------------------------------------------------------------

OCILobCharSetForm()

NAME
OCI Lob Get Character Set Form

PURPOSE
Gets the LOB locator's character set form, if any.

SYNTAX
sword OCILobCharSetForm ( OCIEnv                    *envhp, 
                          OCIError                  *errhp, 
                          CONST OCILobLocator       *locp, 
                          ub1                       *csfrm );

PARAMETERS

envhp (IN/OUT) - OCI environment handle initialized in object mode.

errhp (IN/OUT) - error handle. The OCI error handle. If there is an error, it 
is recorded in err and this function returns OCI_ERROR. Diagnostic 
information can be obtained by calling OCIErrorGet().

locp (IN) - LOB locator for which to get the character set form.

csfrm(OUT) - character set form of the input LOB locator.  If the input 
locator is for a BLOB or a BFILE, csfrm is set to 0 since there is no concept 
of a character set for binary LOBs/FILEs.  The caller must allocate space for 
the csfrm (ub1) and not write into the space.

COMMENTS

Returns the character set form of the input LOB locator in the csfrm output
parameter. This function makes sense only for character LOBs (i.e., CLOBs and
NCLOBs).

RELATED FUNCTIONS

OCIErrorGet(), OCILobCharSetId(), OCILobLocatorIsInit() 


-------------------------------------------------------------------------------

OCILobCharSetId()

NAME
OCI Lob get Character Set Identifier

PURPOSE
Gets the LOB locator's character set ID, if any.

SYNTAX
sword OCILobCharSetId ( OCIEnv                    *envhp, 
                        OCIError                  *errhp, 
                        CONST OCILobLocator       *locp, 
                        ub2                       *csid );

PARAMETERS

envhp (IN/OUT) - OCI environment handle initialized in object mode.

errhp (IN/OUT) - error handle. The OCI error handle. If there is an error, it 
is recorded in err and this function returns OCI_ERROR. Diagnostic 
information can be obtained by calling OCIErrorGet().

locp (IN) - LOB locator for which to get the character set ID.

csid (OUT) - character set ID of the input LOB locator.  If the input locator 
is for a BLOB or a BFILE, csid is set to 0 since there is no concept of a 
character set for binary LOBs/FILEs.  The caller must allocate space for the 
character set id of type ub2 and not write into the space.

COMMENTS

Returns the character set ID of the input LOB locator in the csid output parameter. 

This function makes sense only for character LOBs (i.e., CLOBs, NCLOBs). 

RELATED FUNCTIONS
OCIErrorGet(), OCILobCharSetForm(), OCILobLocatorIsInit() 


-------------------------------------------------------------------------------

OCILobCopy()

NAME
OCI Lob Copy

PURPOSE
Copies a portion of a LOB value into another LOB value.

SYNTAX
sword OCILobCopy ( OCISvcCtx        *svchp,
                   OCIError         *errhp,
                   OCILobLocator    *dst_locp,
                   OCILobLocator    *src_locp,
                   ub4              amount,
                   ub4              dst_offset,
                   ub4              src_offset );

PARAMETERS

svchp (IN) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

dst_locp (IN/OUT) - a locator uniquely referencing the destination LOB. 

src_locp (IN/OUT) - a locator uniquely referencing the source LOB. 

amount (IN) - the number of character or bytes, as appropriate, to be copied.

dst_offset (IN) - this is the absolute offset for the destination LOB. 
For character LOBs it is the number of characters from the beginning of the 
LOB at which to begin writing. For binary LOBs it is the number of bytes from 
the beginning of the lob from which to begin reading. The offset starts at 1.

src_offset (IN) - this is the absolute offset for the source LOB. 
For character LOBs it is the number of characters from the beginning of the 
LOB, for binary LOBs it is the number of bytes. Starts at 1.

COMMENTS

Copies all or a portion of an internal LOB value into another internal LOB as
specified. The data is copied from the source to the destination. The source
(src_locp) and the destination (dst_locp) LOBs must already exist.

If the data already exists at the destination's start position, it is
overwritten with the source data. If the destination's start position is beyond
the end of the current data, zero-byte fillers (for BLOBs) or spaces (for
CLOBs) are written into the destination LOB from the end of the current data to
the beginning of the newly written data from the source. The destination LOB is
extended to accommodate the newly written data if it extends beyond the current
length of the destination LOB. It is an error to extend the destination LOB
beyond the maximum length allowed (i.e., 4 gigabytes) or to try to copy from a
NULL LOB.

Both the source and the destination LOB locators must be of the same type
(i.e., they must both be BLOBs or both be CLOBs). LOB buffering must not be
enabled for either locator.

This function does not accept a FILE locator as the source or the destination. 

The amount parameter indicates the maximum amount to copy. If the end of the
source LOB is reached before the specified amount is copied, the operation
terminates without error. This makes it possible to copy from a starting offset
to the end of the LOB without first needing to determine the length of the LOB.

Note: You can call OCILobGetLength() to determine the length of the source LOB.

RELATED FUNCTIONS

OCIErrorGet(), OCILobAppend(), OCILobTrim(), OCILobWrite() 

-------------------------------------------------------------------------------


OCILobDisableBuffering()

NAME
OCI Lob Disable Buffering

PURPOSE
Disable lob buffering for the input locator.

SYNTAX
sword OCILobDisableBuffering ( OCISvcCtx      *svchp,
                               OCIError       *errhp,
                               OCILobLocator  *locp);

PARAMETERS

svchp (IN) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

locp (IN/OUT) - a locator uniquely referencing the LOB. 


COMMENTS

Disable lob buffering for the input locator.  The next time data is
read/written from/to the lob through the input locator, the lob
buffering subsystem is *not* used.  Note that this call does *not*
implicitly flush the changes made in the buffering subsystem.  The 
user must explicitly call OCILobFlushBuffer() to do this.

This function does not accept a FILE locator. 

RELATED FUNCTIONS
OCILobEnableBuffering()
OCIErrorGet()
OCILobFlushBuffer()


-------------------------------------------------------------------------------

OCILobEnableBuffering()

NAME

OCI Lob Enable Buffering

PURPOSE

Enable lob buffering for the input locator.

SYNTAX
sword OCILobEnableBuffering ( OCISvcCtx      *svchp,
                              OCIError       *errhp,
                              OCILobLocator  *locp);

PARAMETERS

svchp (IN) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

locp (IN/OUT) - a locator uniquely referencing the LOB. 

COMMENTS

Enable lob buffering for the input locator.  The next time data is
read/written from/to the lob through the input locator, the lob
buffering subsystem is used.  

Once lob buffering is enabled for a locator, if that locator is passed to one
of the following routines, an error is returned: OCILobCopy, OCILobAppend,
OCILobErase, OCILobGetLength, OCILobTrim or OCILobLoadFromFile().

This function does not accept a FILE locator.


RELATED FUNCTIONS
OCILobDisableBuffering()
OCIErrorGet()
OCILobWrite()
OCILobRead()
OCILobFlushBuffer()


-------------------------------------------------------------------------------


OCILobErase()


NAME

OCI Lob ERase

PURPOSE

Erases a specified portion of the LOB data starting at a specified offset.

SYNTAX
sword OCILobErase ( OCISvcCtx       *svchp,
                    OCIError        *errhp,
                    OCILobLocator   *locp,
                    ub4             *amount,
                    ub4             offset );

PARAMETERS

svchp (IN) - the service context handle.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

locp (IN/OUT) - the LOB for which to erase a section of data.

amount (IN/OUT) - On IN, the number of characters/bytes to erase. On OUT, 
the actual number of characters/bytes erased.

offset (IN) - absolute offset from the beginning of the LOB data from which 
to start erasing data. Starts at 1.

COMMENTS

Erases a specified portion of the internal LOB data starting at a specified
offset. The actual number of characters/bytes erased is returned. The actual
number of characters/bytes and the requested number of characters/bytes will
differ if the end of the LOB value is reached before erasing the requested
number of characters/bytes.

     Note: For BLOBs, erasing means that zero-byte fillers overwrite the
     existing LOB value. For CLOBs, erasing means that spaces overwrite the
     existing LOB value.

If the LOB is NULL, this routine will indicate that 0 characters/bytes were
erased.

This function is valid only for internal LOBs; FILEs are not allowed. 

RELATED FUNCTIONS
OCIErrorGet(), OCILobRead(), OCILobWrite()



-------------------------------------------------------------------------------

OCILobFileClose()

NAME
OCI Lob File Close

PURPOSE
Closes a previously opened FILE.

SYNTAX
sword OCILobFileClose ( OCISvcCtx            *svchp,
                        OCIError             *errhp,
                        OCILobLocator        *filep );

PARAMETERS

svchp (IN) - the service context handle.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

filep (IN/OUT) - a pointer to a FILE locator to be closed.

COMMENTS

Closes a previously opened FILE. It is an error if this function is called for
an internal LOB.  No error is returned if the FILE exists but is not opened.

This function is only meaningful the first time it is called for a particular
FILE locator.  Subsequent calls to this function using the same FILE locator
have no effect.

     See Also: For more information about FILEs, refer to the description of
     BFILEs in the Oracle8 Application Developer's Guide.

RELATED FUNCTIONS
OCIErrorGet(), OCILobFileOpen(), OCILobFileCloseAll(), OCILobFileIsOpen(),
OCILobFileExists()


-------------------------------------------------------------------------------


OCILobFileCloseAll()

NAME
OCI LOB FILE Close All

PURPOSE
Closes all open FILEs on a given service context.

SYNTAX
sword OCILobFileCLoseAll ( OCISvcCtx *svchp, 
                           OCIError  *errhp );

PARAMETERS

svchp (IN) - the service context handle.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

COMMENTS

Closes all open FILEs on a given service context.

It is an error to call this function for an internal LOB.

     See Also: For more information about FILEs, refer to the description of
     BFILEs in the Oracle8 Application Developer's Guide.

RELATED FUNCTIONS
OCILobFileClose(), OCIErrorGet(), OCILobFileOpen(), OCILobFileIsOpen(),
OCILobFileExists()


-------------------------------------------------------------------------------

OCILobFileExists()

NAME
OCI LOB FILE exists

PURPOSE
Tests to see if the FILE exists on the server

SYNTAX
sword OCILobFileExists ( OCISvcCtx     *svchp,
                         OCIError      *errhp,
                         OCILobLocator *filep,
                         boolean       *flag );

PARAMETERS

svchp (IN) - the OCI service context handle.

errhp (IN/OUT) - error handle. The OCI error handle. If there is an error, 
it is recorded in err and this function returns OCI_ERROR. Diagnostic 
information can be obtained by calling OCIErrorGet().

filep (IN) - pointer to the FILE locator that refers to the file.

flag (OUT) - returns TRUE if the FILE exists; FALSE if it does not.

COMMENTS

Checks to see if the FILE exists on the server's file system.

It is an error to call this function for an internal LOB.

     See Also: For more information about FILEs, refer to the description of
     BFILEs in the Oracle8 Application Developer's Guide.

RELATED FUNCTIONS 
OCIErrorGet, OCILobFileClose(), OCILobFileCloseAll(), OCILobFileIsOpen()


-------------------------------------------------------------------------------


OCILobFileGetName()

NAME
OCI LOB FILE Get file Name

PURPOSE
Gets the FILE locator's directory alias and file name.

SYNTAX
sword OCILobFileGetName ( OCIEnv                   *envhp,
                          OCIError                 *errhp, 
                          CONST OCILobLocator      *filep, 
                          text                     *dir_alias,
                          ub2                      *d_length, 
                          text                     *filename, 
                          ub2                      *f_length );

PARAMETERS

envhp (IN/OUT) - OCI environment handle initialized in object mode.

errhp (IN/OUT) -The OCI error handle. If there is an error, it is recorded in 
errhp and this function returns OCI_ERROR. Diagnostic information can be 
obtained by calling OCIErrorGet().

filep (IN) - FILE locator for which to get the directory alias and file name.

dir_alias (OUT) - buffer into which the directory alias name is placed. The 
caller must allocate enough space for the directory alias name and must not 
write into the space.

d_length (IN/OUT)                 
        - IN: length of the input dir_alias string;
        - OUT: length of the returned dir_alias string.

filename (OUT) - buffer into which the file name is placed. The caller must 
allocate enough space for the file name and must not write into the space.

f_length (IN/OUT) 
        - IN: length of the input filename string;
         - OUT: lenght of the returned filename string.

COMMENTS

Returns the directory alias and file name associated with this FILE locator. 

It is an error to call this function for an internal LOB. 

     See Also: For more information about FILEs, refer to the description of
     BFILEs in the Oracle8 Application Developer's Guide.

RELATED FUNCTIONS

OCILobFileSetName(), OCIErrorGet() 


-------------------------------------------------------------------------------

OCILobFileIsOpen()

NAME
OCI LOB FILE Is Open

PURPOSE
Tests to see if the FILE is open

SYNTAX
sword OCILobFileIsOpen ( OCISvcCtx *svchp,
                         OCIError  *errhp,
                         OCILobLocator *filep,
                         boolean       *flag );

PARAMETERS

svchp (IN) - the OCI service context handle.

errhp (IN/OUT) - error handle. The OCI error handle. If there is an error, it 
is recorded in err and this function returns OCI_ERROR. Diagnostic 
information can be obtained by calling OCIErrorGet().

filep (IN) - pointer to the FILE locator being examined. If the input file 
locator was never passed to OCILobFileOpen(), the file is considered not to 
be opened by this locator. However, a different locator may have opened the 
file. More than one file opens can be performed on the same file using 
different locators.

flag (OUT) - returns TRUE if the FILE is opened using this locator; FALSE if 
it is not. 

COMMENTS

Checks to see if a file on the server was opened with the filep FILE locator. 

It is an error to call this function for an internal LOB.

If the input FILE locator was never passed to the OCILobFileOpen() command, the
file is considered not to be opened by this locator. However, a different
locator may have the file open. Openness is associated with a particular
locator.

     See Also: For more information about FILEs, refer to the description of
     BFILEs in the Oracle8 Application Developer's Guide.

RELATED FUNCTIONS

OCIErrorGet(), OCILobFileClose(), OCILobFileCloseAll() 


-------------------------------------------------------------------------------

OCILobFileOpen()

NAME
OCI LOB FILE open

PURPOSE
Opens a FILE for read-only access

SYNTAX
sword OCILobFileOpen ( OCISvcCtx            *svchp,
                       OCIError             *errhp,
                       OCILobLocator        *filep,
                       ub1                  mode );

PARAMETERS 

svchp (IN) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

filep (IN/OUT) - the FILE to open. Error if the locator does not refer to a 
FILE. 

mode (IN) - mode in which to open the file. The only valid mode is 
read-only - OCI_FILE_READONLY. 

COMMENTS

Opens a FILE. The FILE can be opened for read-only access. FILEs may not be
written through Oracle. It is an error to call this function for an internal
LOB.

This function is only meaningful the first time it is called for a particular
FILE locator.  Subsequent calls to this function using the same FILE locator
have no effect.

     See Also: For more information about FILEs, refer to the description of
     BFILEs in the Oracle8 Application Developer's Guide.

RELATED FUNCTIONS

OCILobFileClose(), OCIErrorGet(), OCILobFileIsOpen(), OCILobFileSetName() 


-------------------------------------------------------------------------------

OCILobFileSetName()

NAME
OCI Lob File Set NaMe

PURPOSE
Sets directory alias and file name in the FILE locator.

SYNTAX
sword OCILobFileSetName ( OCIEnv             *envhp,
                          OCIError           *errhp,
                          OCILobLocator      **filepp,
                          text               *dir_alias,
                          ub2                d_length, 
                          text               *filename, 
                          ub2                f_length );
PARAMETERS

envhp (IN/OUT) - OCI environment handle initialized in object mode.

errhp (IN/OUT) - The OCI error handle. If there is an error, it is recorded 
in errhp and this function returns OCI_ERROR. Diagnostic information can be 
obtained by calling OCIErrorGet().

filepp (IN/OUT) - FILE locator for which to set the directory alias name.
The caller must have already allocated space for the locator by calling
OCIDescriptorAlloc().

dir_alias (IN) - buffer that contains the directory alias name to set in the 
locator.

d_length (IN) - length of the input dir_alias parameter.

filename (IN) - buffer that contains the file name is placed.

f_length (IN) - length of the input filename parameter.

COMMENTS

Sets the directory alias and file name in the FILE locator. 

It is an error to call this function for an internal LOB. 

     See Also: For more information about FILEs, refer to the description of
     BFILEs in the Oracle8 Application Developer's Guide.

RELATED FUNCTIONS

OCILobFileGetName(), OCIErrorGet() 

-------------------------------------------------------------------------------


OCILobFlushBuffer()

NAME
OCI Lob Flush all Buffers for this lob.

PURPOSE
Flush/write all buffers for this lob to the server.


SYNTAX
sword OCILobFlushBuffer ( OCISvcCtx       *svchp,
                          OCIError        *errhp,
                          OCILobLocator   *locp,
                          ub4              flag);

PARAMETERS

svchp (IN/OUT) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

locp (IN/OUT) - a locator uniquely referencing the LOB. 

flag    (IN)     - to indicate if the buffer resources need to be freed
                   after a flush. Default value is OCI_LOB_BUFFER_NOFREE.
                   Set it to OCI_LOB_BUFFER_FREE if you want the buffer
                   resources to be freed.

COMMENTS 

Flushes to the server, changes made to the buffering subsystem that are
associated with the LOB referenced by the input locator. This routine will
actually write the data in the buffer to the LOB in the database. LOB buffering
must have already been enabled for the input LOB locator.

The flush operation, by default, does not free the buffer resources for
reallocation to another buffered LOB operation. However, if you want to free
the buffer explicitly, you can set the flag parameter to OCI_LOB_BUFFER_FREE.

The effects of freeing the buffer are mostly transparent to the user, except
that the next access to the same range in the LOB involves a round-trip to the
server, and also the cost of acquiring buffer resources and initializing it
with the data read from the LOB. This option is intended for the following
situations:

     If the client environment has low on-board memory.  

     If the client application intends to read the buffer value after the flush
     and knows in advance that the current value in the buffer is the desired
     value. In this case there is no need to reread the data from the server.

RELATED FUNCTIONS

OCILobEnableBuffering(), OCIErrorGet(), OCILobWrite(), OCILobRead(),
OCILobDisableBuffering() 


-------------------------------------------------------------------------------

OCILobGetLength()

NAME

OCI Lob/File Length

PURPOSE
Gets the length of a LOB/FILE. 


SYNTAX
sword OCILobGetLength ( OCISvcCtx      *svchp,
                        OCIError       *errhp,
                        OCILobLocator  *locp,
                        ub4            *lenp );



PARAMETERS

svchp (IN) - the service context handle.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

locp (IN/OUT) - a LOB locator that uniquely references the LOB. For internal
LOBs, this locator must be a locator that was obtained from the server 
specified by svchp. For FILEs, this locator can be initialized by a Select or
OCILobFileSetName.

lenp (OUT) - On output, it is the length of the LOB if not NULL - for 
character LOBs it is the number of characters, for binary LOBs it is the 
number of bytes in the LOB.

COMMENTS

Gets the length of a LOB/FILE. If the LOB/FILE is NULL, the length is 
undefined.

The length of a FILE includes the EOF, if it exists. 

The length is expressed in terms of bytes for BLOBs and BFILEs, and in terms of
characters for CLOBs. The length of an empty internal LOB is zero.

     Note: Any zero-byte or space fillers in the LOB written by previous calls
     to OCILobErase() or OCILobWrite() are also included in the length count.

RELATED FUNCTIONS
OCIErrorGet, OCIFileSetName


-------------------------------------------------------------------------------

OCILobIsEqual()


NAME

OCI Lob Is Equal

PURPOSE
Compares two LOB locators for equality.

SYNTAX
sword OCILobIsEqual ( OCIEnv                  *envhp,
                      CONST OCILobLocator     *x,
                      CONST OCILobLocator     *y,
                      boolean                 *is_equal );

PARAMETERS

envhp (IN) - the OCI environment handle.

x (IN) - LOB locator to compare.

y (IN) - LOB locator to compare.

is_equal (OUT) - TRUE, if the LOB locators are equal; FALSE if they are not.

COMMENTS

Compares the given LOB/FILE locators for equality. Two LOB/FILE locators are
equal if and only if they both refer to the same LOB/FILE value.

Two NULL locators are considered not equal by this function. 

RELATED FUNCTIONS

OCILobAssign(), OCILobLocatorIsInit() 


-------------------------------------------------------------------------------

OCILobLoadFromFile()

NAME
OCI Lob Load From File

PURPOSE
Load/copy all or a portion of the file into an internal LOB.

SYNTAX
sword OCILobLoadFromFile ( OCISvcCtx        *svchp,
                           OCIError         *errhp,
                           OCILobLocator    *dst_locp,
                           OCILobLocator    *src_filep,
                           ub4              amount,
                           ub4              dst_offset,
                           ub4              src_offset );

PARAMETERS

svchp (IN) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

dst_locp (IN/OUT) - a locator uniquely referencing the destination internal 
LOB which may be of type blob, clob, or nclob. 

src_filep (IN/OUT) - a locator uniquely referencing the source BFILE. 

amount (IN) - the number of bytes to be copied.

dst_offset (IN) - this is the absolute offset for the destination LOB. 
For character LOBs it is the number of characters from the beginning of the 
LOB at which to begin writing. For binary LOBs it is the number of bytes from 
the beginning of the lob from which to begin reading. The offset starts at 1.

src_offset (IN) - this is the absolute offset for the source BFILE.  It is 
the number of bytes from the beginning of the LOB.  The offset starts at 1.

COMMENTS 

Loads/copies a portion or all of a FILE value into an internal LOB as
specified. The data is copied from the source FILE to the destination internal
LOB (BLOB/CLOB). No character set conversions are performed when copying the
FILE data to a CLOB/NCLOB. Therefore, the FILE data must already be in the same
character set as the CLOB/NCLOB in the database.  No error checking is
performed to verify this.

The source (src_locp) and the destination (dst_locp) LOBs must already
exist. If the data already exists at the destination's start position, it is
overwritten with the source data. If the destination's start position is beyond
the end of the current data, zero-byte fillers (for BLOBs) or spaces (for
CLOBs) are written into the destination LOB from the end of the data to the
beginning of the newly written data from the source. The destination LOB is
extended to accommodate the newly written data if it extends beyond the current
length of the destination LOB.

It is an error to extend the destination LOB beyond the maximum length allowed
(4 gigabytes) or to try to copy from a NULL FILE.

The amount parameter indicates the maximum amount to load. If the end of the
source FILE is reached before the specified amount is loaded, the operation
terminates without error. This makes it possible to load from a starting offset
to the end of the FILE without first needing to determine the length of the
file.

RELATED FUNCTIONS 
OCIErrorGet(), OCILobAppend(), OCILobWrite(), OCILobTrim(), OCILobCopy(),
OCILobGetLength() 



-------------------------------------------------------------------------------


OCILobLocatorIsInit()

NAME
OCI LOB locator is initialized?

PURPOSE
Tests to see if a given LOB locator is initialized.

SYNTAX
sword OCILobLocatorIsInit ( OCIEnv   *envhp,
                            OCIError *errhp,
                            CONST OCILobLocator *locp,
                            boolean *is_initialized );

PARAMETERS

envhp (IN/OUT) - OCI environment handle initialized in object mode.

errhp (IN/OUT) - error handle. The OCI error handle. If there is an error, it 
is recorded in err and this function returns OCI_ERROR. Diagnostic 
information can be obtained by calling OCIErrorGet().

locp (IN) - the LOB locator being tested

is_initialized (OUT) - returns TRUE if the given LOB locator is initialized; 
FALSE if it is not.

COMMENTS

Tests to see if a given LOB/FILE locator is initialized. 

Internal LOB locators can be initialized by one of the following methods:

     SELECTing a non-NULL LOB into the locator, pinning an object that contains
     a non-NULL LOB attribute via OCIObjectPin() setting the locator to empty
     via OCIAttrSet() (see "LOB Locator Attributes" on page B-25 for more
     information.)

FILE locators can be initialized by one of the following methods:

     SELECTing a non-NULL FILE into the locator pinning an object that contains
     a non-NULL FILE attribute via OCIObjectPin() calling OCILobFileSetName()

RELATED FUNCTIONS
OCIErrorGet(), OCILobIsEqual() 




-------------------------------------------------------------------------------

OCILobRead()

NAME
OCI Lob/File ReaD

PURPOSE
Reads a portion of a LOB/FILE as specified by the call into a buffer. 

SYNTAX
sword OCILobRead ( OCISvcCtx       *svchp,
                   OCIError        *errhp,
                   OCILobLocator   *locp,
                   ub4             offset,
                   ub4             *amtp,
                   dvoid           *bufp,
                   ub4             bufl,
                   dvoid           *ctxp,  
                   OCICallbackLobRead (cbfp)
                                   (
                                    dvoid         *ctxp,
                                    CONST dvoid   *bufp,
                                    ub4           len,
                                    ub1           piece )
                   ub2             csid,
                   ub1             csfrm );

PARAMETERS

svchp (IN/OUT) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

locp (IN/OUT) - a LOB locator that uniquely references a LOB. 

offset (IN) - On input, it is the absolute offset, for character LOBs in the 
number of characters from the beginning of the LOB, for binary LOBs it is the 
number of bytes. Starts from 1.

amtp (IN/OUT) - On input, the number of character or bytes to be read. On 
output, the actual number of bytes or characters read. 
If the amount of bytes to be read is larger than the buffer length it is 
assumed that the LOB is being read in a streamed mode. On input if this value 
is 0, then the data shall be read in streamed mode from the LOB until the end 
of LOB. If the data is read in pieces, *amtp always contains the length of 
the last piece read.  If a callback function is defined, then this callback 
function will be invoked each time bufl bytes are read off the pipe. Each 
piece will be written into bufp.
If the callback function is not defined, then OCI_NEED_DATA error code will 
be returned. The application must invoke the LOB read over and over again to 
read more pieces of the LOB until the OCI_NEED_DATA error code is not 
returned. The buffer pointer and the length can be different in each call 
if the pieces are being read into different sizes and location. 

bufp (IN) - the pointer to a buffer into which the piece will be read. The 
length of the allocated memory is assumed to be bufl. 

bufl (IN) - the length of the buffer in octets. 

ctxp (IN) - the context for the call back function. Can be NULL.

cbfp (IN) - a callback that may be registered to be called for each piece. If 
this is NULL, then OCI_NEED_DATA will be returned for each piece. 
The callback function must return OCI_CONTINUE for the read to continue. 
If any other error code is returned, the LOB read is aborted. 
  
  ctxp (IN) - the context for the call back function. Can be NULL.
  
  bufp (IN) - a buffer pointer for the piece.
  
  len (IN) - the length of length of current piece in bufp.
  
  piece (IN) - which piece - OCI_FIRST_PIECE, OCI_NEXT_PIECE or 
               OCI_LAST_PIECE.
csid (IN) - the character set ID of the buffer data
csfrm (IN) - the character set form of the buffer data

COMMENTS

Reads a portion of a LOB/FILE as specified by the call into a buffer. It is an
error to try to read from a NULL LOB/FILE.

     Note: When reading or writing LOBs, the character set form (csfrm)
     specified should match the form of the locator itself.

For FILEs, the OS file must already exist on the server, and it must have been
opened via OCILobFileOpen() using the input locator. Oracle must have
permission to read the OS file, and the user must have read permission on the
directory object.

When using the polling mode for OCILobRead(), the first call needs to specify
values for offset and amtp, but on subsequent polling calls to OCILobRead(),
the user need not specify these values.

     See Also: For more information about FILEs, refer to the description of
     BFILEs in the Oracle8 Application Developer's Guide.

     For a code sample showing the use of LOB reads and writes, refer to
     "Example 5, CLOB/BLOB Operations" on page D-76.

     For general information about piecewise OCI operations, refer to "Run Time
     Data Allocation and Piecewise Operations" on page 7-16.

RELATED FUNCTIONS
OCIErrorGet(), OCILobWrite(), OCILobFileSetName() 


-------------------------------------------------------------------------------


OCILobTrim()

NAME

OCI Lob  Trim

PURPOSE

Trims the lob value to a shorter length

SYNTAX
sword OCILobTrim ( OCISvcCtx       *svchp,
                 OCIError        *errhp,
                 OCILobLocator   *locp,
                 ub4             newlen );

PARAMETERS

svchp (IN) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

locp (IN/OUT) - a LOB locator that uniquely references the LOB. This locator 
must be a locator that was obtained from the server specified by svchp. 

newlen (IN) - the new length of the LOB data, which must be less than or equal
to the current length. 


COMMENTS
Truncates LOB data to a specified shorter length. 

The function returns an error if newlen is greater than the current LOB length. 
This function is valid only for internal LOBs. FILEs are not allowed. 

RELATED FUNCTIONS
OCIErrorGet, OCILobWrite, OCiLobErase, OCILobAppend, OCILobCopy


-------------------------------------------------------------------------------

OCILobWrite()

NAME

OCI Lob Write

PURPOSE

Writes a buffer into a LOB

SYNTAX
sword OCILobWrite ( OCISvcCtx       *svchp,
                    OCIError        *errhp,
                    OCILobLocator   *locp,
                    ub4             offset,
                    ub4             *amtp,
                    dvoid           *bufp, 
                    ub4             buflen,
                    ub1             piece,
                    dvoid           *ctxp,  
                    OCICallbackLobWrite   (cbfp)
                                    (
                                    dvoid    *ctxp,
                                    dvoid    *bufp,
                                    ub4      *lenp,
                                    ub1      *piecep ) 
                    ub2             csid
                    ub1             csfrm );



PARAMETERS

svchp (IN/OUT) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

locp (IN/OUT) - a LOB locator that uniquely references a LOB. 

offset (IN) - On input, it is the absolute offset, for character LOBs in 
the number of characters from the beginning of the LOB, for binary LOBs it 
is the number of bytes. Starts at 1.

bufp (IN) - the pointer to a buffer from which the piece will be written. The 
length of the allocated memory is assumed to be the value passed in bufl. 
Even if the data is being written in pieces, bufp must contain the first 
piece of the LOB when this call is invoked.

bufl (IN) - the length of the buffer in bytes.
Note: This parameter assumes an 8-bit byte. If your platform uses a 
longer byte, the value of bufl must be adjusted accordingly.

piece (IN) - which piece of the buffer is being written. The default value for
this parameter is OCI_ONE_PIECE, indicating the buffer will be written in a 
single piece.
The following other values are also possible for piecewise or callback mode: 
OCI_FIRST_PIECE, OCI_NEXT_PIECE and OCI_LAST_PIECE.

amtp (IN/OUT) - On input, takes the number of character or bytes to be 
written. On output, returns the actual number of bytes or characters written. 
If the data is written in pieces, *amtp will contain the total length of the 
pieces written at the end of the call (last piece written) and is undefined in
between. 
(Note it is different from the piecewise read case)

ctxp (IN) - the context for the call back function. Can be NULL.

cbfp (IN) - a callback that may be registered to be called for each piece in 
a piecewise write. If this is NULL, the standard polling method will be used.
The callback function must return OCI_CONTINUE for the write to continue. 
If any other error code is returned, the LOB write is aborted. The 
callback takes the following parameters:
  
  ctxp (IN) - the context for the call back function. Can be NULL.

  bufp (IN/OUT) - a buffer pointer for the piece.

  lenp (IN/OUT) - the length of the buffer (in octets) and the length of 
  current piece in bufp (out octets).
  
piecep (OUT) - which piece - OCI_NEXT_PIECE or OCI_LAST_PIECE.
csid (IN) - the character set ID of the buffer data
csfrm (IN) - the character set form of the buffer data

COMMENTS

Writes a buffer into a LOB as specified. If LOB data already exists it is
overwritten with the data stored in the buffer.

The buffer can be written to the LOB in a single piece with this call, or it
can be provided piecewise using callbacks or a standard polling method.

     Note: When reading or writing LOBs, the character set form (csfrm)
     specified should match the form of the locator itself.

When using the polling mode for OCILobWrite(), the first call needs to specify
values for offset and amtp, but on subsequent polling calls to OCILobWrite(),
the user need not specify these values.

If the value of the piece parameter is OCI_FIRST_PIECE, data may need to be
provided through callbacks or polling.

If a callback function is defined in the cbfp parameter, then this callback
function will be invoked to get the next piece after a piece is written to the
pipe. Each piece will be written from bufp.

If no callback function is defined, then OCILobWrite() returns the
OCI_NEED_DATA error code. The application must call OCILobWrite() again to
write more pieces of the LOB. In this mode, the buffer pointer and the length
can be different in each call if the pieces are of different sizes and from
different locations.

A piece value of OCI_LAST_PIECE terminates the piecewise write, regardless of
whether the polling or callback method is used.

If the amount of data passed to Oracle (through either input mechanism) is less
than the amount specified by the amtp parameter, an ORA-22993 error is
returned.

This function is valid for internal LOBs only. FILEs are not allowed, since
they are read-only.

     See Also: For a code sample showing the use of LOB reads and writes, refer
     to "Example 5, CLOB/BLOB Operations" on page D-76.

     For general information about piecewise OCI operations, refer to "Run Time
     Data Allocation and Piecewise Operations" on page 7-16.

RELATED FUNCTIONS
OCIErrorGet(), OCILobRead(), OCILobAppend(), OCILobCopy() 


-------------------------------------------------------------------------------


OCILogoff()

NAME

OCI simplified Logoff

PURPOSE

This function is used to terminate a session created with OCILogon().

SYNTAX

sword OCILogoff ( OCISvcCtx      *svchp
                  OCIError       *errhp );


PARAMETERS

svchp (IN) - the service context handle which was used in the call to 
OCILogon().

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

COMMENTS

This call is used to terminate a session and connection which were created with
OCILogon().  This call implicitly deallocates the server, user session, and
service context handles.

     Note: For more information on logging on and off in an application, refer
     to the section "Application Initialization, Connection, and Session
     Creation" on page 2-18.

RELATED FUNCTIONS

OCILogon() 


-------------------------------------------------------------------------------

OCILogon()

NAME

OCI Service Context Logon

PURPOSE

This function is used to create a simple logon session.

SYNTAX
sword OCILogon ( OCIEnv          *envhp,
                       OCIError        *errhp,
                       OCISvcCtx       *svchp,
                       CONST text      *username,
                       ub4             uname_len,
                       CONST text      *password,
                       ub4             passwd_len,
                       CONST text      *dbname,
                       ub4             dbname_len );

PARAMETERS

envhp (IN) - the OCI environment handle.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

svchp (OUT) - the service context pointer.

username (IN) - the username.

uname_len (IN) - the length of username.

password (IN) - the user's password.

passwd_len (IN) - the length of password.

dbname (IN) - the name of the database to connect to.

dbname_len (IN) - the length of dbname.

COMMENTS

This function is used to create a simple logon session for an application.

     Note: Users requiring more complex sessions (e.g., TP monitor
     applications) should refer to the section "Application Initialization,
     Connection, and Session Creation" on page 2-18.

This call allocates the error and service context handles which are passed to
it.

This call also implicitly allocates server and user session handles associated
with the session. These handles can be retrieved by calling OCIAQEnq() on the
service context handle.

RELATED FUNCTIONS

OCILogoff() 

-------------------------------------------------------------------------------


OCIParamGet()

NAME

OCI Get Parameter

PURPOSE

Returns a descriptor of a parameter specified by position in the describe
handle or statement handle.

SYNTAX
sword OCIParamGet ( CONST dvoid *hndlp,
                    ub4         htype,
                    OCIError    *errhp,
                    dvoid    **parmdpp,
                    ub4         pos );


PARAMETERS

hndlp (IN) - a statement handle or describe handle. The OCIParamGet() 
function will return a parameter descriptor for this handle. 

htype (IN) - the type of the handle passed in the handle parameter. Valid 
types are OCI_HTYPE_DESCRIBE, for a describe handle OCI_HTYPE_STMT, for a 
statement handle

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

parmdpp (OUT) - a descriptor of the parameter at the position given in the pos 
parameter.

pos (IN) - position number in the statement handle or describe handle. A 
parameter descriptor will be returned for this position.
Note: OCI_NO_DATA may be returned if there are no parameter 
descriptors for this position. 

COMMENTS

This call returns a descriptor of a parameter specified by position in the 
describe handle or statement handle. Parameter descriptors are always 
allocated internally by the OCI library. They are read-only.

OCI_NO_DATA may be returned if there are no parameter descriptors for this 
position. 

See Appendix B for more detailed information about parameter descriptor 
attributes.

RELATED FUNCTIONS
OCIAttrGet(), OCIAttrSet()


-------------------------------------------------------------------------------


OCIParamSet()

NAME

OCI Parameter Set in handle

PURPOSE

Used to set a complex object retrieval descriptor into a complex object 

retrieval handle.

SYNTAX
sword   OCIParamSet ( dvoid *hndlp,
                       ub4 htyp,
                      OCIError *errhp,
                      CONST dvoid *dscp,
                      ub4 dtyp,
                      ub4 pos );

PARAMETERS

hndlp (IN/OUT) - handle pointer.

htype (IN) - handle type.

errhp (IN/OUT) - error handle.

dscp (IN) - complex object retrieval descriptor pointer.

dtyp (IN) - 

pos (IN) - position number.

COMMENTS

This call sets a given complex object retrieval descriptor into a complex
object retrieval handle.

The handle must have been previously allocated using OCIHandleAlloc(), and the
descriptor must have been previously allocated using
OCIDescriptorAlloc(). Attributes of the descriptor are set using OCIAttrSet().

For more information about complex object retrieval, see "Complex Object
Retrieval" on page 8-21.

RELATED FUNCTIONS
OCIParamGet() 


-------------------------------------------------------------------------------

OCIPasswordChange()

NAME

OCI Change PassWord

PURPOSE
This call allows the password of an account to be changed.

SYNTAX
sword OCIPasswordChange ( OCISvcCtx     *svchp,
                        OCIError      *errhp,
                        CONST text    *user_name,
                        ub4           usernm_len,
                        CONST text    *opasswd,
                        ub4           opasswd_len,
                        CONST text    *npasswd,
                        sb4           npasswd_len,
                        ub4           mode);

PARAMETERS

svchp (IN/OUT) - a handle to a service context. The service context handle 
must be initialized and have a server context handle associated with it.

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

user_name (IN) - specifies the user name. It points to a character string, 
whose length is specified in usernm_len. This parameter must be NULL if the 
service context has been initialized with an authentication handle.

usernm_len (IN) - the length of the user name string specified in user_name. 
For a valid user name string, usernm_len must be non-zero.

opasswd (IN) - specifies the user's old password. It points to a character 
string, whose length is specified in opasswd_len .

opasswd_len (IN) - the length of the old password string specified in opasswd. 
For a valid password string, opasswd_len must be non-zero.

npasswd (IN) - specifies the user's new password. It points to a character 
string, whose length is specified in npasswd_len which must be non-zero for a 
valid password string. If the password complexity verification routine is 
specified in the user's profile to verify the new password's complexity, the 
new password must meet the complexity requirements of the verification 
function.

npasswd_len (IN)  - then length of the new password string specified in 
npasswd. For a valid password string, npasswd_len must be non-zero.

mode (IN) - pass as OCI_DEFAULT.

COMMENTS

This call allows the password of an account to be changed. This call is similar
to OCISessionBegin() with the following differences:

     If the user session is already established, it authenticates the account
     using the old password and then changes the password to the new password

     If the user session is not established, it establishes a user session and
     authenticates the account using the old password, then changes the
     password to the new password.

This call is useful when the password of an account is expired and
OCISessionBegin() returns an error or warning which indicates that the password
has expired.

RELATED FUNCTIONS
OCISessionBegin()


----------------------------------OCIReset------------------------------------


OCIReset()
Name
OCI Reset
Purpose
Resets the interrupted asynchronous operation and protocol. Must be called
if a OCIBreak call had been issued while a non-blocking operation was in
progress.
Syntax
sword OCIReset ( dvoid      *hndlp,
                 OCIError   *errhp);
Comments
This call is called in non-blocking mode ONLY. Resets the interrupted
asynchronous operation and protocol. Must be called if a OCIBreak call 
had been issued while a non-blocking operation was in progress. 
Parameters
hndlp (IN) - the service context handle or the server context handle.
errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.
Related Functions

-------------------------------------------------------------------------------


OCIServerAttach()

NAME

OCI Attach to server

PURPOSE

Creates an access path to a data source for OCI operations.

SYNTAX

sword OCIServerAttach ( OCIServer    *srvhp,
                        OCIError     *errhp,
                        CONST text   *dblink,
                        sb4          dblink_len,
                        ub4          mode);


PARAMETERS

This call initializes a server context handle, which must have been previously 
allocated with a call to OCIHandleAlloc().
The server context handle initialized by this call can be associated with a 
service context through a call to OCIAttrSet(). Once that association has been 
made, OCI operations can be performed against the server.
If an application is operating against multiple servers, multiple server 
context handles can be maintained. OCI operations are performed against 
whichever server context is currently associated with the service context.
Parameters

srvhp (IN/OUT) - an uninitialized server context handle, which gets 
initialized by this call. Passing in an initialized server handle causes an 
error. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

dblink (IN) - specifies the database (server) to use. This parameter points to
a character string which specifies a connect string or a service point. If the 
connect string is NULL, then this call attaches to the default host. The length
of connstr is specified in connstr_len. The connstr pointer may be freed by the
caller on return.

dblink_len (IN) - the length of the string pointed to by connstr. For a valid 
connect string name or alias, connstr_len must be non-zero.

mode (IN) - specifies the various modes of operation.  For release 8.0, pass as
OCI_DEFAULT - in this mode, calls made to the server on this server context 
are made in blocking mode. 

COMMENTS

This call is used to create an association between an OCI application and a
particular server.

This call initializes a server context handle, which must have been previously
allocated with a call to OCIHandleAlloc().

The server context handle initialized by this call can be associated with a

service context through a call to OCIAttrSet(). Once that association has been
made, OCI operations can be performed against the server.

If an application is operating against multiple servers, multiple server
context handles can be maintained. OCI operations are performed against
whichever server context is currently associated with the service context.

EXAMPLE

The following example demonstrates the use of OCIServerAttach(). This code
segment allocates the server handle, makes the attach call, allocates the
service context handle, and then sets the server context into it.

OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) 
          OCI_HTYPE_SERVER, 0, (dvoid **) &tmp);
OCIServerAttach( srvhp, errhp, (text *) 0, (sb4) 0, (ub4) OCI_DEFAULT);
OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) 
          OCI_HTYPE_SVCCTX, 0, (dvoid **) &tmp);

/o set attribute server context in the service context o/
OCIAttrSet( (dvoid *) svchp, (ub4) OCI_HTYPE_SVCCTX, (dvoid *) srvhp, 
          (ub4) 0, (ub4) OCI_ATTR_SERVER, (OCIError *) errhp);

RELATED FUNCTIONS
OCIServerDetach() 


-------------------------------------------------------------------------------


OCIServerDetach()

NAME

OCI Detach server

PURPOSE

Deletes an access to a data source for OCI operations.

SYNTAX

sword OCIServerDetach ( OCIServer   *svrhp,
                        OCIError    *errhp,
                        ub4         mode); 


PARAMETERS


srvhp (IN) - a handle to an initialized server context, which gets reset to 
uninitialized state. The handle is not de-allocated. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

mode (IN) - specifies the various modes of operation. The only valid mode is 
OCI_DEFAULT for the default mode. 

COMMENTS

This call deletes an access to data source for OCI operations, which was 
established by a call to OCIServerAttach(). 

RELATED FUNCTIONS
OCIServerAttach()


-------------------------------------------------------------------------------

OCIServerVersion()

NAME

OCI VERSion

PURPOSE

Returns the version string of the Oracle server.

SYNTAX

sword OCIServerVersion ( dvoid        *hndlp, 
                       OCIError     *errhp, 
                       text         *bufp,
                       ub4          bufsz
                       ub1          hndltype );


PARAMETERS


hndlp (IN) - the service context handle or the server context handle.

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

bufp (IN) - the buffer in which the version information is returned.

bufsz (IN) - the length of the buffer.

hndltype (IN) - the type of handle passed to the function.

COMMENTS

This call returns the version string of the Oracle server. 
For example, the following might be returned as the version string if your 
application is running against a 7.3.2 server:
Oracle7 Server Release 7.3.2.0.0 - Production Release
PL/SQL Release 2.3.2.0.0 - Production
CORE Version 3.5.2.0.0 - Production
TNS for SEQUENT DYNIX/ptx: Version 2.3.2.0.0 - Production
NLSRTL Version 3.2.2.0.0 - Production


RELATED FUNCTIONS



-------------------------------------------------------------------------------


OCISessionBegin()

NAME

OCI Session Begin and authenticate user

PURPOSE

Creates a user authentication and begins a user session for a given server.

SYNTAX

sword OCISessionBegin ( OCISvcCtx     *svchp,
                      OCIError      *errhp,
                      OCISession    *usrhp,
                      ub4           credt,
                      ub4           mode);



PARAMETERS


svchp (IN) - a handle to a service context. There must be a valid server 
handle set in svchp.

errhp (IN) - an error handle to the retrieve diagnostic information.

usrhp (IN/OUT) - a handle to an authentication context, which is initialized 
by this call.

credt (IN) - specifies the type of credentials to use for authentication. 
Valid values for credt are:

  OCI_CRED_RDBMS - authenticate using a database username and 
                   password pair as credentials. The attributes 
                   OCI_ATTR_USERNAME and OCI_ATTR_PASSWORD should be set 
                   on the authentication context before this call.
  OCI_CRED_EXT -   authenticate using external credentials. No username
                   or password is provided.

mode (IN) - specifies the various modes of operation. Valid modes are:

  OCI_DEFAULT - in this mode, the authentication context returned may 
                only ever be set with the same server context specified 
                in svchp. This establishes the primary authentication context.
  OCI_MIGRATE - in this mode, the new authentication context may be 
                set in a service handle with a different server handle. 
                This mode establishes the user authentication context. 
  OCI_SYSDBA -  in this mode, the user is authenticated for SYSDBA 
                access.
  OCI_SYSOPER - in this mode, the user is authenticated for SYSOPER 
                access.
  OCI_PRELIM_AUTH - this mode may only be used with OCI_SYSDBA 
                or OCI_SYSOPER to authenticate for certain administration 
                tasks.

COMMENTS

The OCISessionBegin() call is used to authenticate a user against the server
set in the service context handle.

For Oracle8, OCISessionBegin() must be called for any given server handle
before requests can be made against it. Also, OCISessionBegin() only supports
authenticating the user for access to the Oracle server specified by the server
handle in the service context. In other words, after OCIServerAttach() is
called to initialize a server handle, OCISessionBegin() must be called to
authenticate the user for that given server.

When OCISessionBegin() is called for the first time for a given server handle,
the user session may not be created in migratable (OCI_MIGRATE) mode.

After OCISessionBegin() has been called for a server handle, the application
may call OCISessionBegin() again to initialize another user session handle with
different (or the same) credentials and different (or the same) operation
modes. If an application wants to authenticate a user in OCI_MIGRATE mode, the
service handle must already be associated with a non-migratable user
handle. The user ID of that user handle becomes the ownership ID of the
migratable user session. Every migratable session must have a non-migratable
parent session.

If the OCI_MIGRATE mode is not specified, then the user session context can
only ever be used with the same server handle set in svchp. If OCI_MIGRATE mode
is specified, then the user authentication may be set with different server
handles. However, the user session context may only be used with server handles
which resolve to the same database instance.  Security checking is done during
session switching. A process or circuit is allowed to switch to a migratable
session only if the ownership ID of the session matches the user ID of a
non-migratable session currently connected to that same process or circuit,
unless it is the creator of the session.

OCI_SYSDBA, OCI_SYSOPER, and OCI_PRELIM_AUTH may only be used with a primary
user session context.

To provide credentials for a call to OCISessionBegin(), one of two methods are
supported.  The first is to provide a valid username and password pair for
database authentication in the user session handle passed to
OCISessionBegin(). This involves using OCIAttrSet() to set the
OCI_ATTR_USERNAME and OCI_ATTR_PASSWORD attributes on the user session handle.
Then OCISessionBegin() is called with OCI_CRED_RDBMS.

     Note: When the user session handle is terminated using OCISessionEnd(),
     the username and password attributes remain unchanged and thus can be
     re-used in a future call to OCISessionBegin(). Otherwise, they must be
     reset to new values before the next OCISessionBegin() call.

The second type of credentials supported are external credentials. No
attributes need to be set on the user session handle before calling
OCISessionBegin(). The credential type is OCI_CRED_EXT. This is equivalent to
the Oracle7 `connect /' syntax. If values have been set for OCI_ATTR_USERNAME
and OCI_ATTR_PASSWORD, then these are ignored if OCI_CRED_EXT is used.

EXAMPLE

The following example demonstrates the use of OCISessionBegin(). This code
segment allocates the user session handle, sets the username and password
attributes, calls OCISessionBegin(), and then sets the user session into the
service context.

/o allocate a user session handle o/
OCIHandleAlloc((dvoid *)envhp, (dvoid **)&usrhp, (ub4) 
          OCI_HTYPE_SESSION, (size_t) 0, (dvoid **) 0);
OCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION, (dvoid *)"jessica", 
          (ub4)strlen("jessica"), OCI_ATTR_USERNAME, errhp);
OCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION, (dvoid *)"doogie", 
          (ub4)strlen("doogie"), OCI_ATTR_PASSWORD, errhp); 
checkerr(errhp, OCISessionBegin (svchp, errhp, usrhp, OCI_CRED_RDBMS, 
          OCI_DEFAULT)); 
OCIAttrSet((dvoid *)svchp, (ub4)OCI_HTYPE_SVCCTX, (dvoid *)usrhp, 
          (ub4)0, OCI_ATTR_SESSION, errhp);


RELATED FUNCTIONS

OCISessionEnd()


-------------------------------------------------------------------------------

OCISessionEnd()

Name

OCI Terminate user Authentication Context

PURPOSE

Terminates a user authentication context created by OCISessionBegin()

SYNTAX

sword OCISessionEnd ( OCISvcCtx       *svchp,
                      OCIError        *errhp,
                      OCISession      *usrhp,
                      ub4             mode);

PARAMETERS

svchp (IN/OUT) - the service context handle. There must be a valid server 
handle and user authentication handle associated with svchp.

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

usrhp (IN) - de-authenticate this user. If this parameter is passed as NULL,
the user in the service context handle is de-authenticated.

mode (IN) - the only valid mode is OCI_DEFAULT.

COMMENTS

The user security context associated with the service context is invalidated 
by this call. Storage for the authentication context is not freed. The 
transaction specified by the service context is implicitly committed. The 
transaction handle, if explicitly allocated, may be freed if not being used.

Resources allocated on the server for this user are freed.
The authentication handle may be reused in a new call to OCISessionBegin().

RELATED FUNCTIONS
OCISessionBegin()


-------------------------------------------------------------------------------


OCIStmtExecute()

NAME

OCI EXECute

PURPOSE

This call associates an application request with a server.

SYNTAX

sword OCIStmtExecute ( OCISvcCtx           *svchp,
                       OCIStmt             *stmtp,
                       OCIError            *errhp,
                       ub4                 iters,
                       ub4                 rowoff,
                       CONST OCISnapshot   *snap_in,
                       OCISnapshot         *snap_out,
                       ub4                 mode );


PARAMETERS

svchp (IN/OUT) - service context handle. 

stmtp (IN/OUT) - an statement handle - defines the statement and the 
associated data to be executed at the server. It is invalid to pass in a 
statement handle that has bind of data types only supported in release 8.0 
when srvchp points to an Oracle7 server. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. If the statement is being 
batched and it is successful, then this handle will contain this particular 
statement execution specific errors returned from the server when the batch is 
flushed.

iters (IN) - the number of times this statement is executed for non-Select 
statements. For Select statements, if iters is non-zero, then defines must 
have been done for the statement handle. The execution fetches iters rows into 
these predefined buffers and prefetches more rows depending upon the prefetch 
row count. This function returns an error if iters=0 for non-SELECT 

statements.

rowoff (IN) - the index from which the data in an array bind is relevant for 
this multiple row execution. 

snap_in (IN) - this parameter is optional. if supplied, must point to a 
snapshot descriptor of type OCI_DTYPE_SNAP.  The contents of this descriptor 
must be obtained from the snap_out parameter of a previous call.  The 
descriptor is ignored if the SQL is not a SELECT.  This facility allows 
multiple service contexts to ORACLE to see the same consistent snapshot of the 
database's committed data.  However, uncommitted data in one context is not 
visible to another context even using the same snapshot.

snap_out (OUT) - this parameter optional. if supplied, must point to a 
descriptor of type OCI_DTYPE_SNAP. This descriptor is filled in with an 
opaque representation which is the current ORACLE "system change 
number" suitable as a snap_in input to a subsequent call to OCIStmtExecute().  
This descriptor should not be used any longer than necessary in order to avoid 
"snapshot too old" errors. 

mode (IN) - The modes are:

     OCI_DEFAULT - Calling OCIStmtExecute() in this mode executes the
     statement. It also implicitly returns describe information about the
     select-list.  

     OCI_DESCRIBE_ONLY - This mode is for users who wish to
     describe a query prior to execution. Calling OCIStmtExecute() in this mode
     does not execute the statement, but it does return the select-list
     description. To maximize performance, it is recommended that applications
     execute the statement in default mode and use the implicit describe which
     accompanies the execution.  

     OCI_COMMIT_ON_SUCCESS - When a statement is
     executed in this mode, the current transaction is committed after
     execution, provided that execution completes successfully.
     
     OCI_EXACT_FETCH - Used when the application knows in advance exactly how
     many rows it will be fetching. This mode turns prefetching off for Oracle8
     mode, and requires that defines be done before the execute call. Using
     this mode cancels the cursor after the desired rows are fetched and may
     result in reduced server-side resource usage.  COMMENTS

COMMENTS

This function  is used to execute a prepared SQL statement.
Using an execute call, the application associates a request with a server. On 
success, OCI_SUCCESS is returned.

If a SELECT statement is executed, the description of the select list follows 
implicitly as a response. This description is buffered on the client side for 
describes, fetches and define type conversions. Hence it is optimal to 
describe a select list only after an execute. 

Also for SELECT statements, some results are available implicitly. Rows will 
be received and buffered at the end of the execute. For queries with small row 
count, a prefetch causes memory to be released in the server if the end of 
fetch is reached, an optimization that may result in memory usage reduction. 
Set attribute call has been defined to set the number of rows to be prefetched
per result set.

For SELECT statements, at the end of the execute, the statement handle 
implicitly maintains a reference to the service context on which it is 
executed. It is the user's responsibility to maintain the integrity of the 
service context. If the attributes of a service context is changed for 
executing some operations on this service context, the service context must 
be restored to have the same attributes, that a statement was executed with, 
prior to a fetch on the statement handle. The implicit reference is maintained 
until the statement handle is freed or the fetch is cancelled or an end of 
fetch condition is reached.

Note: If output variables are defined for a SELECT statement before a 
call to OCIStmtExecute(), the number of rows specified by iters will be 
fetched directly into the defined output buffers and additional rows 
equivalent to the prefetch count will be prefetched. If there are no 
additional rows, then the fetch is complete without calling 
OCIStmtFetch().

The execute call will return errors if the statement has bind data types that 
are not supported in an Oracle7 server.

RELATED FUNCTIONS
OCIStmtPrepare()


-------------------------------------------------------------------------------

OCIStmtFetch()

NAME

OCI Fetch

PURPOSE

Fetches rows from a query.

SYNTAX

sword OCIStmtFetch ( OCIStmt     *stmtp,
                     OCIError    *errhp, 
                     ub4         nrows,
                     ub2         orientation,
                     ub4         mode);


PARAMETERS

stmtp (IN) - a statement (application request) handle.

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

nrows (IN) - number of rows to be fetched from the current position.

orientation (IN) - for release 8.0, the only acceptable value is 
OCI_FETCH_NEXT, which is also the default value. 

mode (IN) - for release 8.0, beta-1, the following mode is defined.

OCI_DEFAULT - default mode

OCI_EOF_FETCH - indicates that it is the last fetch from the result set. 
If nrows is non-zero, setting this mode effectively cancels fetching after 
retrieving nrows, otherwise it cancels fetching immediately. 

COMMENTS

The fetch call is a local call, if prefetched rows suffice. However, this is 
transparent to the application. If LOB columns are being read, LOB locators 
are fetched for subsequent LOB operations to be performed on these locators. 
Prefetching is turned off if LONG columns are involved. 

A fetch with nrows set to 0 rows effectively cancels the fetch for this 
statement.

RELATED FUNCTIONS
OCIAttrGet()


-------------------------------------------------------------------------------

OCIStmtGetBindInfo()

NAME

OCI Get Bind Parameters

PURPOSE

Gets the bind and indicator variable names.

SYNTAX

sword OCIStmtGetBindInfo ( OCIStmt      *stmtp,
                           OCIError     *errhp,
                           ub4          size,
                           ub4          startloc,
                           sb4          *found,
                           text         *bvnp[],
                           ub1          bvnl[],
                           text         *invp[],
                           ub1          inpl[],
                           ub1          dupl[],
                           OCIBind      *hndl[] );

PARAMETERS

stmtp (IN) - the statement handle.

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

size (IN) - the number of elements in each array.

startloc (IN) - position of the  bind variable at which to start getting  bind 
information.

found (IN) - abs(found) gives the total number of bind variables in the 
statement irrespective of the start position. Positive value if the number of 
bind variables returned is less than the size provided, otherwise negative.

bvnp (OUT) - array of pointers to hold bind variable names.

bvnl (OUT) - array to hold the length of the each bvnp element.

invp (OUT) - array of pointers to hold indicator variable names.

inpl (OUT) - array of pointers to hold the length of the each invp element.

dupl (OUT) - an array whose element value is 0 or 1 depending on whether the 
bind position is duplicate of another.

hndl  (OUT) - an array which returns the bind handle if binds have been done 
for the bind position. No handle is returned for duplicates.

COMMENTS

Gets the bind and indicator variable names. It returns the information for all 
the bind variables (even the duplicate ones) and sets the found parameter to 
the total number of bind variables and not just the number of distinct bind 
variables.

The statement must have been prepared with a call to OCIStmtPrepare() prior 
to this call. 

This call is processed locally.

RELATED FUNCTIONS

OCIStmtPrepare()


-------------------------------------------------------------------------------

OCIStmtGetPieceInfo()

Name

OCI Get Piece Information

PURPOSE

Returns piece information for a piecewise operation.

SYNTAX

sword OCIStmtGetPieceInfo( CONST OCIStmt  *stmtp,
                           OCIError       *errhp,
                           dvoid          **hndlpp,
                           ub4            *typep,
                           ub1            *in_outp,
                           ub4            *iterp, 
                           ub4            *idxp,
                           ub1            *piecep );

PARAMETERS

stmtp (IN) - the statement when executed returned OCI_NEED_DATA. 

errhp (OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

hndlpp (OUT) - returns a pointer to the bind or define handle of the bind or 
define whose runtime data is required or is being provided.

typep (OUT) - the type of the handle pointed to by hndlpp: OCI_HTYPE_BIND 
(for a bind handle) or OCI_HTYPE_DEFINE (for a define handle).

in_outp (OUT) - returns OCI_PARAM_IN if the data is required for an IN bind 
value. Returns OCI_PARAM_OUT if the data is available as an OUT bind 
variable or a define position value.

iterp (OUT) - returns the row number of a multiple row operation.

idxp (OUT) - the index of an array element of a PL/SQL array bind operation.

piecep (OUT) - returns one of the following defined values - 
OCI_ONE_PIECE, OCI_FIRST_PIECE, OCI_NEXT_PIECE and 
OCI_LAST_PIECE. The default value is always OCI_ONE_PIECE. 

COMMENTS

When an execute/fetch call returns OCI_NEED_DATA to get/return a 
dynamic bind/define value or piece, OCIStmtGetPieceInfo() returns the 
relevant information: bind/define handle, iteration or index number and 
which piece.
See the section "Runtime Data Allocation and Piecewise Operations" on page 
7-16 for more information about using OCIStmtGetPieceInfo().

RELATED FUNCTIONS

OCIAttrGet(), OCIAttrGet(), OCIStmtExecute(), OCIStmtFetch(), 
OCIStmtSetPieceInfo()


-------------------------------------------------------------------------------


OCIStmtPrepare()

NAME

OCI Statement Request

PURPOSE

This call defines the SQL/PLSQL statement to be executed.

SYNTAX

sword OCIStmtPrepare ( OCIStmt      *stmtp,
                       OCIError     *errhp,
                       CONST text   *stmt, 
                       ub4          stmt_len,
                       ub4          language,
                       ub4          mode);


PARAMETERS

stmtp (IN) - a statement handle.

errhp (IN) - an error handle to retrieve diagnostic information.

stmt (IN) - SQL or PL/SQL statement to be executed. Must be a null-
terminated string. The pointer to the text of the statement must be available 
as long as the statement is executed.

stmt_len (IN) - length of the statement. Must not be zero.

language (IN) - V7, V8, or native syntax. Possible values are:
OCI_V7_SYNTAX - V7 ORACLE parsing syntax
OCI_V8_SYNTAX - V8 ORACLE parsing syntax
OCI_NTV_SYNTAX - syntax depending upon the version of the server. 

mode (IN) - the only defined mode is OCI_DEFAULT for default mode. 

COMMENTS

This call is used to prepare a SQL or PL/SQL statement for execution. The 
OCIStmtPrepare() call defines an application request. 

This is a purely local call. Data values for this statement initialized in 
subsequent bind calls will be stored in a bind handle which will hang off this 
statement handle.

This call does not create an association between this statement handle and any 

RELATED FUNCTIONS

OCIAttrGet(), OCIStmtExecute()

-------------------------------------------------------------------------------

OCIStmtSetPieceInfo()

NAME

OCI Set Piece Information

PURPOSE

Sets piece information for a piecewise operation.

SYNTAX

sword OCIStmtSetPieceInfo ( dvoid             *hndlp,
                            ub4               type,
                            OCIError          *errhp,
                            CONST dvoid       *bufp,
                            ub4               *alenp, 
                            ub1               piece,
                            CONST dvoid       *indp, 
                            ub2               *rcodep ); 


PARAMETERS

hndlp (IN/OUT) - the bind/define handle.

type (IN) - type of the handle. 

errhp (OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

bufp (IN/OUT) - bufp is a pointer to a storage containing the data value or 
the piece when it is an IN bind variable, otherwise bufp is a pointer to 
storage for getting a piece or a value for OUT binds and define variables. For
named data types or REFs, a pointer to the object or REF is returned.

alenp (IN/OUT) - the length of the piece or the value. 

piece (IN) - the piece parameter. The following are valid values: 
OCI_ONE_PIECE, OCI_FIRST_PIECE, OCI_NEXT_PIECE, or 
OCI_LAST_PIECE. 
The default value is OCI_ONE_PIECE. This parameter is used for IN bind 
variables only.

indp (IN/OUT) - indicator. A pointer to a sb2 value or pointer to an indicator 
structure for named data types (SQLT_NTY) and REFs (SQLT_REF), i.e., *indp 
is either an sb2 or a dvoid * depending upon the data type.

rcodep (IN/OUT) - return code. 

COMMENTS

When an execute call returns OCI_NEED_DATA to get a dynamic IN/OUT 
bind value or piece, OCIStmtSetPieceInfo() sets the piece information: the 
buffer, the length, the indicator and which piece is currently being processed.

For more information about using OCIStmtSetPieceInfo() see the section 
"Runtime Data Allocation and Piecewise Operations" on page 7-16.

RELATED FUNCTIONS

OCIAttrGet(), OCIAttrGet(), OCIStmtExecute(), OCIStmtFetch(), 
OCIStmtGetPieceInfo()


-------------------------------------------------------------------------------

OCISvcCtxToLda()

NAME

OCI toggle SerVice context handle to Version 7 Lda_Def

PURPOSE

Toggles between a V8 service context handle and a V7 Lda_Def.

SYNTAX

sword OCISvcCtxToLda ( OCISvcCtx    *srvhp,
                       OCIError     *errhp,
                       Lda_Def      *ldap );


PARAMETERS

svchp (IN/OUT) - the service context handle. 

errhp (IN/OUT) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error. 

ldap (IN/OUT) - a Logon Data Area for V7-style OCI calls which is initialized 
by this call. 

COMMENTS

Toggles between an Oracle8 service context handle and an Oracle7 Lda_Def.

This function can only be called after a service context has been properly 
initialized.

Once the service context has been translated to an Lda_Def, it can be used in 
release 7.x OCI calls (e.g., obindps(), ofen()).

Note: If there are multiple service contexts which share the same server 
handle, only one can be in V7 mode at any time.

The action of this call can be reversed by passing the resulting Lda_Def to 
the OCILdaToSvcCtx() function.

The OCI_ATTR_IN_V8_MODE attribute of the server handle or service context
handle enables an application to determine whether the application is currently
in Oracle7 mode or Oracle8 mode. See Appendix B, "Handle and Descriptor
Attributes", for more information.

RELATED FUNCTIONS
OCILdaToSvcCtx()


-------------------------------------------------------------------------------

OCITransCommit()

NAME

OCI TX (transaction) CoMmit

PURPOSE

Commits the transaction associated with a specified service context.

SYNTAX

sword OCITransCommit ( OCISvcCtx    *srvcp,
                       OCIError     *errhp,
                       ub4          flags );


PARAMETERS

srvcp (IN) - the service context handle.

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

flags (IN) -see the "COMMENTS" section above.

COMMENTS

The transaction currently associated with the service context is committed. If
it is a global transaction that the server cannot commit, this call
additionally retrieves the state of the transaction from the database to be
returned to the user in the error handle.

If the application has defined multiple transactions, this function operates on
the transaction currently associated with the service context. If the
application is working with only the implicit local transaction created when
database changes are made, that implicit transaction is committed.

If the application is running in the object mode, then the modified or updated
objects in the object cache for this transaction are also flushed and
committed.

The flags parameter is used for one-phase commit optimization in global
transactions. If the transaction is non-distributed, the flags parameter is
ignored, and OCI_DEFAULT can be passed as its value. OCI applications managing
global transactions should pass a value of OCI_TRANS_TWOPHASE to the flags
parameter for a two-phase commit. The default is one-phase commit.

Under normal circumstances, OCITransCommit() returns with a status indicating
that the transaction has either been committed or rolled back. With global
transactions, it is possible that the transaction is now in-doubt (i.e.,
neither committed nor aborted). In this case, OCITransCommit() attempts to
retrieve the status of the transaction from the server. The status is returned.

EXAMPLE

The following example demonstrates the use of a simple local transaction, as
described in the section "Simple Local Transactions" on page 7-4.

int main()
{
  OCIEnv *envhp;
  OCIServer *srvhp;
  OCIError *errhp;
  OCISvcCtx *svchp;
  OCIStmt *stmthp;
  dvoid     *tmp;
  text sqlstmt[128];

  OCIInitialize((ub4) OCI_OBJECT, (dvoid *)0,  (dvoid * (*)()) 0,
             (dvoid * (*)()) 0,  (void (*)()) 0 );
  
  OCIHandleAlloc( (dvoid *) NULL, (dvoid **) &envhp, (ub4) OCI_HTYPE_ENV,
             0, (dvoid **) &tmp);
  
  OCIEnvInit( &envhp, (ub4) OCI_DEFAULT, 21, (dvoid **) &tmp  );
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4) OCI_HTYPE_ERROR,
                52, (dvoid **) &tmp);
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) OCI_HTYPE_SERVER,
                52, (dvoid **) &tmp);
  
  OCIServerAttach( srvhp, errhp, (text *) 0, (sb4) 0, (ub4) OCI_DEFAULT);
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) OCI_HTYPE_SVCCTX,
                52, (dvoid **) &tmp);

  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&stmthp, OCI_HTYPE_STMT, 0, 0);

  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)srvhp, 0,
                  OCI_ATTR_SERVER, errhp);

  OCILogon(envhp, errhp, &svchp, "SCOTT", strlen("SCOTT"),
           "TIGER", strlen("TIGER"), 0, 0);

  /o update scott.emp empno=7902, increment salary o/
  sprintf((char *)sqlstmt, "UPDATE EMP SET SAL = SAL + 1 WHERE EMPNO = 7902");
  OCIStmtPrepare(stmthp, errhp, sqlstmt, strlen(sqlstmt), OCI_NTV_SYNTAX, 0);
  OCIStmtExecute(svchp, stmthp, errhp, 1, 0, 0, 0, 0);
  OCITransCommit(svchp, errhp, (ub4) 0);

  /o update scott.emp empno=7902, increment salary again, but rollback o/
  OCIStmtExecute(svchp, stmthp, errhp, 1, 0, 0, 0, 0);
  OCITransRollback(svchp, errhp, (ub4) 0);
}

RELATED FUNCTIONS
OCITransRollback() 


_______________________________________________________________________________


OCITransDetach()

NAME

OCI TX (transaction) DeTach

PURPOSE

Detaches a transaction.

SYNTAX

sword OCITransDetach ( OCISvcCtx    *srvcp,
                       OCIError     *errhp,
                       ub4          flags);


PARAMETERS

srvcp (IN) - the service context handle. 

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

flags (IN) - you must pass a value of OCI_DEFAULT for this parameter.

COMMENTS

Detaches a global transaction from the service context handle. The transaction
currently attached to the service context handle becomes inactive at the end of
this call. The transaction may be resumed later by calling OCITransStart(),
specifying a flags value of OCI_TRANS_RESUME.

When a transaction is detached, the value which was specified in the timeout
parameter of OCITransStart() when the transaction was started is used to
determine the amount of time the branch can remain inactive before being
deleted by the server's PMON process.

     Note: The transaction can be resumed by a different process than the one
     that detached it, provided that the transaction has the same
     authorization.

     If this function is called before a transaction is actually started, this
     function is a no-op.

RELATED FUNCTIONS
OCITransStart() 


-------------------------------------------------------------------------------


OCITransForget()

NAME

OCI TX (transaction) Forget

PURPOSE

Causes the server to forget a heuristically completed global transaction.

SYNTAX

sword OCITransForget ( OCISvcCtx     *svchp, 
                       OCIError      *errhp,
                       ub4           flags);



PARAMETERS

srvcp (IN) - the service context handle - the transaction is rolled back.

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

flags (IN) - you must pass OCI_DEFAULT for this parameter.

COMMENTS

Forgets a heuristically completed global transaction. The server deletes the 
status of the transaction from the system's pending transaction table.

The XID of the transaction to be forgotten is set as an attribute of the 
transaction handle (OCI_ATTR_XID).

RELATED FUNCTIONS
OCITransCommit(), OCITransRollback()


-------------------------------------------------------------------------------


OCITransPrepare()

NAME

OCI TX (transaction) Prepare

PURPOSE

Prepares a transaction for commit.

SYNTAX
sword OCITransPrepare ( OCISvcCtx    *svchp, 
                      OCIError     *errhp,
                      ub4          flags);



PARAMETERS

srvcp (IN) - the service context handle. 

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

flags (IN) - you must pass OCI_DEFAULT for this parameter.

COMMENTS

Prepares the specified global transaction for commit.

This call is valid only for distributed transactions.

The call returns OCI_SUCCESS_WITH_INFO if the transaction has not made 
any changes. The error handle will indicate that the transaction is read-only. 
The flag parameter is not currently used. 

RELATED FUNCTIONS
OCITransCommit(), OCITransForget()


-------------------------------------------------------------------------------


OCITransRollback()

NAME

OCI TX (transaction) RoLlback

PURPOSE

Rolls back the current transaction.

SYNTAX
sword OCITransRollback ( dvoid        *svchp, 
                         OCIError     *errhp,
                         ub4          flags );

PARAMETERS

svchp (IN) - a service context handle. The transaction currently set in the 
service context handle is rolled back.

errhp (IN) - an error handle which can be passed to OCIErrorGet() for 
diagnostic information in the event of an error.

flags (IN) - you must pass a value of OCI_DEFAULT for this parameter.

COMMENTS

The current transaction- defined as the set of statements executed since the 
last OCITransCommit() or since OCISessionBegin()-is rolled back.

If the application is running under object mode then the modified or updated 
objects in the object cache for this transaction are also rolled back.

An error is returned if an attempt is made to roll back a global transaction 
that is not currently active.

RELATED FUNCTIONS
OCITransCommit()


-------------------------------------------------------------------------------

OCITransStart()

NAME

OCI TX (transaction) STart

PURPOSE

Sets the beginning of a transaction.

SYNTAX
sword OCITransStart ( OCISvcCtx    *svchp, 
                      OCIError     *errhp, 
                      uword        timeout,
                      ub4          flags);


PARAMETERS

svchp (IN/OUT) - the service context handle. The transaction context in the 
service context handle is initialized at the end of the call if the flag 
specified a new transaction to be started.

errhp (IN/OUT) - The OCI error handle. If there is an error, it is recorded in 
err and this function returns OCI_ERROR. Diagnostic information can be 
obtained by calling OCIErrorGet().

timeout (IN) - the time, in seconds, to wait for a transaction to become 
available for resumption when OCI_TRANS_RESUME is specified. When 
OCI_TRANS_NEW is specified, this value is stored and may be used later by 
OCITransDetach().

flags (IN) - specifies whether a new transaction is being started or an 
existing transaction is being resumed. Also specifies serializiability or 
read-only status. More than a single value can be specified. By default, 
a read/write transaction is started. The flag values are:

  OCI_TRANS_NEW - starts a new transaction branch. By default starts a 
                  tightly coupled and migratable branch.
  OCI_TRANS_TIGHT - explicitly specifies a tightly coupled branch
  OCI_TRANS_LOOSE - specifies a loosely coupled branch
  OCI_TRANS_RESUME - resumes an existing transaction branch. 
  OCI_TRANS_READONLY - start a readonly transaction
  OCI_TRANS_SERIALIZABLE - start a serializable transaction

COMMENTS

This function sets the beginning of a global or serializable transaction. The 
transaction context currently associated with the service context handle is 
initialized at the end of the call if the flags parameter specifies that a new 
transaction should be started.

The XID of the transaction is set as an attribute of the transaction handle 
(OCI_ATTR_XID)

EXAMPLES

The following examples demonstrate the use of OCI transactional calls for
manipulating global transactions.

Example 1

This example shows a single session operating on different branches. This
concept is illustrated by Figure 7-2, "Session Operating on Multiple Branches"
.

int main()
{
  OCIEnv *envhp;
  OCIServer *srvhp;
  OCIError *errhp;
  OCISvcCtx *svchp;
  OCISession *usrhp;
  OCIStmt *stmthp1, *stmthp2;
  OCITrans *txnhp1, *txnhp2;
  dvoid     *tmp;
  XID gxid;
  text sqlstmt[128];

  OCIInitialize((ub4) OCI_OBJECT, (dvoid *)0,  (dvoid * (*)()) 0,
             (dvoid * (*)()) 0,  (void (*)()) 0 );
  
  OCIHandleAlloc( (dvoid *) NULL, (dvoid **) &envhp, (ub4) OCI_HTYPE_ENV,
             0, (dvoid **) &tmp);
  
  OCIEnvInit( &envhp, (ub4) OCI_DEFAULT, 21, (dvoid **) &tmp  );
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4) OCI_HTYPE_ERROR,
                52, (dvoid **) &tmp);
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) OCI_HTYPE_SERVER,
                52, (dvoid **) &tmp);
  
  OCIServerAttach( srvhp, errhp, (text *) 0, (sb4) 0, (ub4) OCI_DEFAULT);
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) OCI_HTYPE_SVCCTX,
                52, (dvoid **) &tmp);

  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&stmthp1, OCI_HTYPE_STMT, 0, 0);
  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&stmthp2, OCI_HTYPE_STMT, 0, 0);

  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)srvhp, 0,
                  OCI_ATTR_SERVER, errhp);

  /o set the external name and internal name in server handle o/
  OCIAttrSet((dvoid *)srvhp, OCI_HTYPE_SERVER, (dvoid *) "demo", 0,
                  OCI_ATTR_EXTERNAL_NAME, errhp);
  OCIAttrSet((dvoid *)srvhp, OCI_HTYPE_SERVER, (dvoid *) "txn demo", 0,
                          OCI_ATTR_INTERNAL_NAME, errhp);

  /o allocate a user context handle o/
  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&usrhp, (ub4) OCI_HTYPE_SESSION,
                (size_t) 0, (dvoid **) 0);
  
  OCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION, (dvoid *)"scott", 
             (ub4)strlen("scott"), OCI_ATTR_USERNAME, errhp);
  OCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION, (dvoid *)"tiger", 
             (ub4)strlen("tiger"),OCI_ATTR_PASSWORD, errhp);
  
  OCISessionBegin (svchp, errhp, usrhp, OCI_CRED_RDBMS, 0);
  
  OCIAttrSet((dvoid *)svchp, (ub4)OCI_HTYPE_SVCCTX,
                (dvoid *)usrhp, (ub4)0, OCI_ATTR_SESSION, errhp);

  /o allocate transaction handle 1 and set it in the service handle o/
  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&txnhp1,  OCI_HTYPE_TRANS, 0, 0);
  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)txnhp1, 0,
                          OCI_ATTR_TRANS, errhp);

  /o start a transaction with global transaction id = [1000, 123, 1] o/
  gxid.formatID = 1000; /o format id = 1000 o/
  gxid.gtrid_length = 3; /o gtrid = 123 o/
  gxid.data[0] = 1; gxid.data[1] = 2; gxid.data[2] = 3;
  gxid.bqual_length = 1; /o bqual = 1 o/
  gxid.data[3] = 1;

  OCIAttrSet((dvoid *)txnhp1, OCI_HTYPE_TRANS, (dvoid *)&gxid, sizeof(XID),
                          OCI_ATTR_XID, errhp);

  /o start global transaction 1 with 60 second time to live when detached o/
  OCITransStart(svchp, errhp, 60, OCI_TRANS_NEW);

  /o update scott.emp empno=7902, increment salary o/
  sprintf((char *)sqlstmt, "UPDATE EMP SET SAL = SAL + 1 WHERE EMPNO = 7902");
  OCIStmtPrepare(stmthp1, errhp, sqlstmt, strlen(sqlstmt), OCI_NTV_SYNTAX, 0);
  OCIStmtExecute(svchp, stmthp1, errhp, 1, 0, 0, 0, 0);

  /o detach the transaction o/
  OCITransDetach(svchp, errhp, 0);

  /o allocate transaction handle 2 and set it in the service handle o/
  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&txnhp2,  OCI_HTYPE_TRANS, 0, 0);
  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)txnhp2, 0,
                          OCI_ATTR_TRANS, errhp);

  /o start a transaction with global transaction id = [1000, 124, 1] o/
  gxid.formatID = 1000; /o format id = 1000 o/
  gxid.gtrid_length = 3; /o gtrid = 124 o/
  gxid.data[0] = 1; gxid.data[1] = 2; gxid.data[2] = 4;
  gxid.bqual_length = 1; /o bqual = 1 o/
  gxid.data[3] = 1; 

  OCIAttrSet((dvoid *)txnhp2, OCI_HTYPE_TRANS, (dvoid *)&gxid, sizeof(XID),
                          OCI_ATTR_XID, errhp);

  /o start global transaction 2 with 90 second time to live when detached o/
  OCITransStart(svchp, errhp, 90, OCI_TRANS_NEW);

  /o update scott.emp empno=7934, increment salary o/
  sprintf((char *)sqlstmt, "UPDATE EMP SET SAL = SAL + 1 WHERE EMPNO = 7934");
  OCIStmtPrepare(stmthp2, errhp, sqlstmt, strlen(sqlstmt), OCI_NTV_SYNTAX, 0);
  OCIStmtExecute(svchp, stmthp2, errhp, 1, 0, 0, 0, 0);

  /o detach the transaction o/
  OCITransDetach(svchp, errhp, 0);

  /o Resume transaction 1, increment salary and commit it o/
  /o Set transaction handle 1 into the service handle o/
  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)txnhp1, 0,
                          OCI_ATTR_TRANS, errhp);

  /o attach to transaction 1, wait for 10 seconds if the transaction is busy o/
  /o The wait is clearly not required in this example because no other      o/
  /o process/thread is using the transaction. It is only for illustration    o/
  OCITransStart(svchp, errhp, 10, OCI_TRANS_RESUME);
  OCIStmtExecute(svchp, stmthp1, errhp, 1, 0, 0, 0, 0);
  OCITransCommit(svchp, errhp, (ub4) 0);

  /o attach to transaction 2 and commit it o/
  /o set transaction handle2 into the service handle o/
  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)txnhp2, 0,
                          OCI_ATTR_TRANS, errhp);
  OCITransCommit(svchp, errhp, (ub4) 0);
}
Example 2


This example demonstrates a single session operating on multiple branches that share the
same transaction. 

int main()
{
  OCIEnv *envhp;
  OCIServer *srvhp;
  OCIError *errhp;
  OCISvcCtx *svchp;
  OCISession *usrhp;
  OCIStmt *stmthp;
  OCITrans *txnhp1, *txnhp2;
  dvoid     *tmp;
  XID gxid;
  text sqlstmt[128];

  OCIInitialize((ub4) OCI_OBJECT, (dvoid *)0,  (dvoid * (*)()) 0,
             (dvoid * (*)()) 0,  (void (*)()) 0 );
  
  OCIHandleAlloc( (dvoid *) NULL, (dvoid **) &envhp, (ub4) OCI_HTYPE_ENV,
             0, (dvoid **) &tmp);
  
  OCIEnvInit( &envhp, (ub4) OCI_DEFAULT, 21, (dvoid **) &tmp  );
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &errhp, (ub4) OCI_HTYPE_ERROR,
                52, (dvoid **) &tmp);
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &srvhp, (ub4) OCI_HTYPE_SERVER,
                52, (dvoid **) &tmp);
  
  OCIServerAttach( srvhp, errhp, (text *) 0, (sb4) 0, (ub4) OCI_DEFAULT);
  
  OCIHandleAlloc( (dvoid *) envhp, (dvoid **) &svchp, (ub4) OCI_HTYPE_SVCCTX,
                52, (dvoid **) &tmp);

  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&stmthp, OCI_HTYPE_STMT, 0, 0);

  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)srvhp, 0,
                  OCI_ATTR_SERVER, errhp);

  /o set the external name and internal name in server handle o/
  OCIAttrSet((dvoid *)srvhp, OCI_HTYPE_SERVER, (dvoid *) "demo", 0,
                  OCI_ATTR_EXTERNAL_NAME, errhp);
  OCIAttrSet((dvoid *)srvhp, OCI_HTYPE_SERVER, (dvoid *) "txn demo2", 0,
                          OCI_ATTR_INTERNAL_NAME, errhp);

  /o allocate a user context handle o/
  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&usrhp, (ub4) OCI_HTYPE_SESSION,
                (size_t) 0, (dvoid **) 0);
  
  OCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION, (dvoid *)"scott", 
             (ub4)strlen("scott"), OCI_ATTR_USERNAME, errhp);
  OCIAttrSet((dvoid *)usrhp, (ub4)OCI_HTYPE_SESSION, (dvoid *)"tiger", 
             (ub4)strlen("tiger"),OCI_ATTR_PASSWORD, errhp);
  
  OCISessionBegin (svchp, errhp, usrhp, OCI_CRED_RDBMS, 0);
  
  OCIAttrSet((dvoid *)svchp, (ub4)OCI_HTYPE_SVCCTX,
                (dvoid *)usrhp, (ub4)0, OCI_ATTR_SESSION, errhp);

  /o allocate transaction handle 1 and set it in the service handle o/
  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&txnhp1,  OCI_HTYPE_TRANS, 0, 0);
  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)txnhp1, 0,
                          OCI_ATTR_TRANS, errhp);

  /o start a transaction with global transaction id = [1000, 123, 1] o/
  gxid.formatID = 1000; /o format id = 1000 o/
  gxid.gtrid_length = 3; /o gtrid = 123 o/
  gxid.data[0] = 1; gxid.data[1] = 2; gxid.data[2] = 3;
  gxid.bqual_length = 1; /o bqual = 1 o/
  gxid.data[3] = 1;

  OCIAttrSet((dvoid *)txnhp1, OCI_HTYPE_TRANS, (dvoid *)&gxid, sizeof(XID),
                          OCI_ATTR_XID, errhp);

  /o start global transaction 1 with 60 second time to live when detached o/
  OCITransStart(svchp, errhp, 60, OCI_TRANS_NEW);

  /o update scott.emp empno=7902, increment salary o/
  sprintf((char *)sqlstmt, "UPDATE EMP SET SAL = SAL + 1 WHERE EMPNO = 7902");
  OCIStmtPrepare(stmthp, errhp, sqlstmt, strlen(sqlstmt), OCI_NTV_SYNTAX, 0);
  OCIStmtExecute(svchp, stmthp, errhp, 1, 0, 0, 0, 0);

  /o detach the transaction o/
  OCITransDetach(svchp, errhp, 0);

  /o allocate transaction handle 2 and set it in the service handle o/
  OCIHandleAlloc((dvoid *)envhp, (dvoid **)&txnhp2,  OCI_HTYPE_TRANS, 0, 0);
  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)txnhp2, 0,
                          OCI_ATTR_TRANS, errhp);
            
  /o start a transaction with global transaction id = [1000, 123, 2] o/
  /o The global transaction will be tightly coupled with earlier transaction o/
  /o There is not much practical value in doing this but the example o/
  /o illustrates the use of tightly-coupled transaction branches o/
  /o In a practical case the second transaction that tightly couples with o/
  /o the first can be executed from a different process/thread o/

  gxid.formatID = 1000; /o format id = 1000 o/
  gxid.gtrid_length = 3; /o gtrid = 123 o/
  gxid.data[0] = 1; gxid.data[1] = 2; gxid.data[2] = 3;
  gxid.bqual_length = 1; /o bqual = 2 o/
  gxid.data[3] = 2; 

  OCIAttrSet((dvoid *)txnhp2, OCI_HTYPE_TRANS, (dvoid *)&gxid, sizeof(XID),
                          OCI_ATTR_XID, errhp);

  /o start global transaction 2 with 90 second time to live when detached o/
  OCITransStart(svchp, errhp, 90, OCI_TRANS_NEW);

  /o update scott.emp empno=7902, increment salary o/
  /o This is possible even if the earlier transaction has locked this row o/
  /o because the two global transactions are tightly coupled o/
  OCIStmtExecute(svchp, stmthp, errhp, 1, 0, 0, 0, 0);

  /o detach the transaction o/
  OCITransDetach(svchp, errhp, 0);

  /o Resume transaction 1 and prepare it. This will return o/
  /o OCI_SUCCESS_WITH_INFO because all branches except the last branch o/
  /o are treated as read-only transactions for tightly-coupled transactions o/ 

  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)txnhp1, 0,
                          OCI_ATTR_TRANS, errhp);
  if (OCITransPrepare(svchp, errhp, (ub4) 0) == OCI_SUCCESS_WITH_INFO)
  {
    text errbuf[512];
    ub4 buflen;
    sb4 errcode;

    OCIErrorGet ((dvoid *) errhp, (ub4) 1, (text *) NULL, &errcode,
    errbuf, (ub4) sizeof(errbuf), (ub4) OCI_HTYPE_ERROR);
    printf("OCITransPrepare - %s\n", errbuf);
  }

  /o attach to transaction 2 and commit it o/
  /o set transaction handle2 into the service handle o/
  OCIAttrSet((dvoid *)svchp, OCI_HTYPE_SVCCTX, (dvoid *)txnhp2, 0,
                          OCI_ATTR_TRANS, errhp);
  OCITransCommit(svchp, errhp, (ub4) 0);
}

RELATED FUNCTIONS

OCITransDetach()
______________________________________________________________________________


******************************************************************************/


/*****************************************************************************
                         ACTUAL PROTOTYPE DECLARATIONS
******************************************************************************/
/*-----------------------Dynamic Callback Function Pointers------------------*/
 
 
typedef sb4 (*OCICallbackInBind)(dvoid *ictxp, OCIBind *bindp, ub4 iter,
                                  ub4 index, dvoid **bufpp, ub4 *alenp,
                                  ub1 *piecep, dvoid **indp);
 
typedef sb4 (*OCICallbackOutBind)(dvoid *octxp, OCIBind *bindp, ub4 iter,
                                 ub4 index, dvoid **bufpp, ub4 **alenp,
                                 ub1 *piecep, dvoid **indp,
                                 ub2 **rcodep);
 
typedef sb4 (*OCICallbackDefine)(dvoid *octxp, OCIDefine *defnp, ub4 iter,
                                 dvoid **bufpp, ub4 **alenp, ub1 *piecep,
                                 dvoid **indp, ub2 **rcodep);

typedef sb4 (*OCICallbackLobRead)(dvoid *ctxp, CONST dvoid *bufp,
                                             ub4 len, ub1 piece);
/*
 * Called multiple times when the data is being read from the pipe
 * ctxp (IN) - is the context passed in by the user in OCILobRead call
 * bufp (IN) - the buffer containing the read data
 * len  (IN) - the length of the data in the buffer that is relevant
 * piece (IN) - one of the following, OCI_FIRST_PIECE, OCI_NEXT_PIECE
 */

typedef sb4 (*OCICallbackLobWrite)(dvoid *ctxp, dvoid *bufp, 
                                          ub4 *lenp, ub1 *piece);

/*
 * Called multiple times when the data is being written to the pipe
 * ctxp (IN) - is the context passed in by the user in OCILobRead call

 * bufp (IN/OUT) - the buffer into which the data to be written is copied
 * lenp  (OUT) - the length of the data in the buffer that is relevant
 * piece (OUT) - one of the following, OCI_NEXT_PIECE or OCI_LAST_PIECE
 */
/*--------------------------Failover Callback & Structure -------------------*/

typedef sb4 (*OCICallbackFailover)(dvoid *svcctx, dvoid *envctx,
                                   dvoid *fo_ctx, ub4 fo_type,
                                   ub4 fo_event);
/* Called at failover time if client has registered it. */

typedef struct
{
  OCICallbackFailover callback_function;
  dvoid *fo_ctx;
} 
OCIFocbkStruct;



/*****************************************************************************
                         ACTUAL PROTOTYPE DECLARATIONS
                         OF FUNCTIONS PREVIOUSLY DESCRIBED
******************************************************************************/

sword   OCIInitialize   (ub4 mode, dvoid *ctxp, 
                 dvoid *(*malocfp)(dvoid *ctxp, size_t size),
                 dvoid *(*ralocfp)(dvoid *ctxp, dvoid *memptr, size_t newsize),
                 void   (*mfreefp)(dvoid *ctxp, dvoid *memptr) );

sword   OCIHandleAlloc(CONST dvoid *parenth, dvoid **hndlpp, ub4 type, 
                       size_t xtramem_sz, dvoid **usrmempp);

sword   OCIHandleFree(dvoid *hndlp, ub4 type);


sword   OCIDescriptorAlloc(CONST dvoid *parenth, dvoid **descpp, ub4 type,
                     size_t xtramem_sz, dvoid **usrmempp);

sword   OCIDescriptorFree(dvoid *descp, ub4 type);

sword   OCIEnvInit (OCIEnv **envp, ub4 mode, 
                    size_t xtramem_sz, dvoid **usrmempp);

sword   OCIServerAttach  (OCIServer *srvhp, OCIError *errhp,
                          CONST text *dblink, sb4 dblink_len, ub4 mode);

sword   OCIServerDetach  (OCIServer *srvhp, OCIError *errhp, ub4 mode);

sword   OCISessionBegin  (OCISvcCtx *svchp, OCIError *errhp, OCISession *usrhp,
                          ub4 credt, ub4 mode);

sword   OCISessionEnd   (OCISvcCtx *svchp, OCIError *errhp, OCISession *usrhp, 
                         ub4 mode);

sword   OCILogon (OCIEnv *envhp, OCIError *errhp, OCISvcCtx **svchp, 
		  CONST text *username, ub4 uname_len, 
		  CONST text *password, ub4 passwd_len, 
		  CONST text *dbname, ub4 dbname_len);

sword   OCILogoff (OCISvcCtx *svchp, OCIError *errhp);


sword   OCIPasswordChange   (OCISvcCtx *svchp, OCIError *errhp, 
                             CONST text *user_name, ub4 usernm_len, 
                             CONST text *opasswd, ub4 opasswd_len, 
                             CONST text *npasswd, ub4 npasswd_len, ub4 mode);

sword   OCIStmtPrepare   (OCIStmt *stmtp, OCIError *errhp, CONST text *stmt,
                          ub4 stmt_len, ub4 language, ub4 mode);

sword   OCIBindByPos  (OCIStmt *stmtp, OCIBind **bindp, OCIError *errhp,
		       ub4 position, dvoid *valuep, sb4 value_sz,
		       ub2 dty, dvoid *indp, ub2 *alenp, ub2 *rcodep,
		       ub4 maxarr_len, ub4 *curelep, ub4 mode);

sword   OCIBindByName   (OCIStmt *stmtp, OCIBind **bindp, OCIError *errhp,
			 CONST text *placeholder, sb4 placeh_len, 
                         dvoid *valuep, sb4 value_sz, ub2 dty, 
                         dvoid *indp, ub2 *alenp, ub2 *rcodep, 
                         ub4 maxarr_len, ub4 *curelep, ub4 mode);

sword   OCIBindObject  (OCIBind *bindp, 
						OCIError *errhp, 
						CONST OCIType *type, 
			dvoid **pgvpp, 
			ub4 *pvszsp, 
			dvoid **indpp, 
			ub4 *indszp);

sword   OCIBindDynamic   (OCIBind *bindp, OCIError *errhp, dvoid *ictxp,
			  OCICallbackInBind icbfp, dvoid *octxp,
			  OCICallbackOutBind ocbfp);

sword   OCIBindArrayOfStruct   (OCIBind *bindp, OCIError *errhp, 
                                ub4 pvskip, ub4 indskip,
                                ub4 alskip, ub4 rcskip);

sword   OCIStmtGetPieceInfo   (OCIStmt *stmtp, OCIError *errhp, 
                               dvoid **hndlpp, ub4 *typep,
                               ub1 *in_outp, ub4 *iterp, ub4 *idxp, 
                               ub1 *piecep);

sword   OCIStmtSetPieceInfo   (dvoid *hndlp, ub4 type, OCIError *errhp, 
                               CONST dvoid *bufp, ub4 *alenp, ub1 piece, 
                               CONST dvoid *indp, ub2 *rcodep);

sword   OCIStmtExecute  (OCISvcCtx *svchp, OCIStmt *stmtp, OCIError *errhp, 
                         ub4 iters, ub4 rowoff, CONST OCISnapshot *snap_in, 
                         OCISnapshot *snap_out, ub4 mode);

sword   OCIDefineByPos  (OCIStmt *stmtp, OCIDefine **defnp, OCIError *errhp,
			 ub4 position, dvoid *valuep, sb4 value_sz, ub2 dty,
			 dvoid *indp, ub2 *rlenp, ub2 *rcodep, ub4 mode);

sword   OCIDefineObject  (OCIDefine *defnp, OCIError *errhp, 
                          CONST OCIType *type, dvoid **pgvpp, 
                          ub4 *pvszsp, dvoid **indpp, ub4 *indszp);

sword   OCIDefineDynamic   (OCIDefine *defnp, OCIError *errhp, dvoid *octxp,
                            OCICallbackDefine ocbfp);

sword   OCIDefineArrayOfStruct  (OCIDefine *defnp, OCIError *errhp, ub4 pvskip,
                                 ub4 indskip, ub4 rlskip, ub4 rcskip);

sword   OCIStmtFetch   (OCIStmt *stmtp, OCIError *errhp, ub4 nrows, 
                        ub2 orientation, ub4 mode);

sword   OCIStmtGetBindInfo   (OCIStmt *stmtp, OCIError *errhp, ub4 size, 
                              ub4 startloc,
                              sb4 *found, text *bvnp[], ub1 bvnl[],
                              text *invp[], ub1 inpl[], ub1 dupl[],
                              OCIBind *hndl[]);

sword   OCIDescribeAny  (OCISvcCtx *svchp, OCIError *errhp, 
                         dvoid *objptr, 
                         ub4 objnm_len, ub1 objptr_typ, ub1 info_level,
			 ub1 objtyp, OCIDescribe *dschp);

sword   OCIParamGet (CONST dvoid *hndlp, ub4 htype, OCIError *errhp, 
                     dvoid **parmdpp, ub4 pos);

sword   OCIParamSet(dvoid *hdlp, ub4 htyp, OCIError *errhp, CONST dvoid *dscp,
                    ub4 dtyp, ub4 pos);

sword   OCITransStart  (OCISvcCtx *svchp, OCIError *errhp, 
                        uword timeout, ub4 flags );

sword   OCITransDetach  (OCISvcCtx *svchp, OCIError *errhp, ub4 flags );

sword   OCITransCommit  (OCISvcCtx *svchp, OCIError *errhp, ub4 flags);

sword   OCITransRollback  (OCISvcCtx *svchp, OCIError *errhp, ub4 flags);

sword   OCITransPrepare (OCISvcCtx *svchp, OCIError *errhp, ub4 flags);

sword   OCITransForget (OCISvcCtx *svchp, OCIError *errhp, ub4 flags);

sword   OCIErrorGet   (dvoid *hndlp, ub4 recordno, text *sqlstate,
                       sb4 *errcodep, text *bufp, ub4 bufsiz, ub4 type);

sword   OCILobAppend  (OCISvcCtx *svchp, OCIError *errhp, 
                       OCILobLocator *dst_locp,
                       OCILobLocator *src_locp);

sword   OCILobAssign (OCIEnv *envhp, OCIError *errhp, 
                      CONST OCILobLocator *src_locp, 
                      OCILobLocator **dst_locpp);

sword   OCILobCharSetForm (OCIEnv *envhp, OCIError *errhp, 
                           CONST OCILobLocator *locp, ub1 *csfrm);

sword   OCILobCharSetId (OCIEnv *envhp, OCIError *errhp, 
                         CONST OCILobLocator *locp, ub2 *csid);

sword   OCILobCopy (OCISvcCtx *svchp, OCIError *errhp, OCILobLocator *dst_locp,
                    OCILobLocator *src_locp, ub4 amount, ub4 dst_offset, 
                    ub4 src_offset);

sword   OCILobDisableBuffering (OCISvcCtx      *svchp,
                                OCIError       *errhp,
                                OCILobLocator  *locp);

sword   OCILobEnableBuffering (OCISvcCtx      *svchp,
                               OCIError       *errhp,
                               OCILobLocator  *locp);

sword   OCILobErase (OCISvcCtx *svchp, OCIError *errhp, OCILobLocator *locp,
                      ub4 *amount, ub4 offset);

sword   OCILobFileClose (OCISvcCtx *svchp, OCIError *errhp, 
                         OCILobLocator *filep);

sword   OCILobFileCloseAll (OCISvcCtx *svchp, OCIError *errhp);

sword   OCILobFileExists (OCISvcCtx *svchp, OCIError *errhp, 
			  OCILobLocator *filep,
			  boolean *flag);

sword   OCILobFileGetName (OCIEnv *envhp, OCIError *errhp, 
                           CONST OCILobLocator *filep, 
                           text *dir_alias, ub2 *d_length, 
                           text *filename, ub2 *f_length);

sword   OCILobFileIsOpen (OCISvcCtx *svchp, OCIError *errhp, 
                          OCILobLocator *filep,
                          boolean *flag);

sword   OCILobFileOpen (OCISvcCtx *svchp, OCIError *errhp, 
                        OCILobLocator *filep,
                        ub1 mode);

sword   OCILobFileSetName (OCIEnv *envhp, OCIError *errhp, 
                           OCILobLocator **filepp, 
                           CONST text *dir_alias, ub2 d_length, 
                           CONST text *filename, ub2 f_length);

sword   OCILobFlushBuffer (OCISvcCtx       *svchp,
                           OCIError        *errhp,
                           OCILobLocator   *locp,
                           ub4              flag);

sword   OCILobGetLength  (OCISvcCtx *svchp, OCIError *errhp, 
                          OCILobLocator *locp,
                          ub4 *lenp);

sword   OCILobIsEqual  (OCIEnv *envhp, CONST OCILobLocator *x, 
                        CONST OCILobLocator *y, 
                        boolean *is_equal);

sword   OCILobLoadFromFile (OCISvcCtx *svchp, OCIError *errhp, 
                            OCILobLocator *dst_locp,
       	                    OCILobLocator *src_filep, 
                            ub4 amount, ub4 dst_offset, 
                            ub4 src_offset);

sword   OCILobLocatorIsInit (OCIEnv *envhp, OCIError *errhp, 
                             CONST OCILobLocator *locp, 
                             boolean *is_initialized);

sword   OCILobRead  (OCISvcCtx *svchp, OCIError *errhp, OCILobLocator *locp,
                     ub4 *amtp, ub4 offset, dvoid *bufp, ub4 bufl, 
                     dvoid *ctxp, sb4 (*cbfp)(dvoid *ctxp, 
                                              CONST dvoid *bufp, 
                                              ub4 len, 
                                              ub1 piece),
                     ub2 csid, ub1 csfrm);

sword   OCILobTrim  (OCISvcCtx *svchp, OCIError *errhp, OCILobLocator *locp,
                     ub4 newlen);

sword   OCILobWrite  (OCISvcCtx *svchp, OCIError *errhp, OCILobLocator *locp,
                      ub4 *amtp, ub4 offset, dvoid *bufp, ub4 buflen, 
                      ub1 piece, dvoid *ctxp, 
                      sb4 (*cbfp)(dvoid *ctxp, 
                                  dvoid *bufp, 
                                  ub4 *len, 
                                  ub1 *piece),
                      ub2 csid, ub1 csfrm);

sword   OCIBreak (dvoid *hndlp, OCIError *errhp);

sword   OCIReset (dvoid *hndlp, OCIError *errhp);

sword   OCIServerVersion  (dvoid *hndlp, OCIError *errhp, text *bufp, 
                           ub4 bufsz,
                           ub1 hndltype);


sword   OCIAttrGet (CONST dvoid *trgthndlp, ub4 trghndltyp, 
                    dvoid *attributep, ub4 *sizep, ub4 attrtype, 
                    OCIError *errhp);

sword   OCIAttrSet (dvoid *trgthndlp, ub4 trghndltyp, dvoid *attributep,
                    ub4 size, ub4 attrtype, OCIError *errhp);

sword   OCISvcCtxToLda (OCISvcCtx *svchp, OCIError *errhp, Lda_Def *ldap);

sword   OCILdaToSvcCtx (OCISvcCtx **svchpp, OCIError *errhp, Lda_Def *ldap);

sword   OCIResultSetToStmt (OCIResult *rsetdp, OCIError *errhp);


/*
 ** Initialize the security package
 */
sword   OCISecurityInitialize (OCISecurity *sechandle, OCIError *error_handle);

sword   OCISecurityTerminate (OCISecurity *sechandle, OCIError *error_handle);

sword OCISecurityOpenWallet(OCISecurity *osshandle,
                            OCIError *error_handle,
                            size_t wrllen,
                            text *wallet_resource_locator,
                            size_t pwdlen,
                            text *password,
                            nzttWallet *wallet);

sword OCISecurityCloseWallet(OCISecurity *osshandle,
                             OCIError *error_handle,
                             nzttWallet *wallet);

sword OCISecurityCreateWallet(OCISecurity *osshandle,
                              OCIError *error_handle,
                              size_t wrllen,
                              text *wallet_resource_locator,
                              size_t pwdlen,
                              text *password,
                              nzttWallet *wallet);

sword OCISecurityDestroyWallet(OCISecurity *osshandle,
                               OCIError *error_handle,
                               size_t wrllen,
                               text *wallet_resource_locator,
                               size_t pwdlen,
                               text *password);

sword OCISecurityStorePersona(OCISecurity *osshandle,
                              OCIError *error_handle,
                              nzttPersona **persona,
                              nzttWallet *wallet);

sword OCISecurityOpenPersona(OCISecurity *osshandle,
                             OCIError *error_handle,
                             nzttPersona *persona);

sword OCISecurityClosePersona(OCISecurity *osshandle,
                              OCIError *error_handle,
                              nzttPersona *persona);

sword OCISecurityRemovePersona(OCISecurity *osshandle,
                               OCIError *error_handle,
                               nzttPersona **persona);

sword OCISecurityCreatePersona(OCISecurity *osshandle,
                               OCIError *error_handle,
                               nzttIdentType identity_type,
                               nzttCipherType cipher_type,
                               nzttPersonaDesc *desc,
                               nzttPersona **persona);

sword OCISecuritySetProtection(OCISecurity *osshandle,
                               OCIError *error_handle,
                               nzttPersona *persona,
                               nzttcef crypto_engine_function,
                               nztttdufmt data_unit_format,
                               nzttProtInfo *protection_info);

sword OCISecurityGetProtection(OCISecurity *osshandle,
                               OCIError *error_handle,
                               nzttPersona *persona,
                               nzttcef crypto_engine_function,
                               nztttdufmt * data_unit_format_ptr,
                               nzttProtInfo *protection_info);

sword OCISecurityRemoveIdentity(OCISecurity *osshandle,
                                OCIError *error_handle,
                                nzttIdentity **identity_ptr);

sword OCISecurityCreateIdentity(OCISecurity *osshandle,
                                OCIError *error_handle,
                                nzttIdentType type,
                                nzttIdentityDesc *desc,
                                nzttIdentity **identity_ptr);

sword OCISecurityAbortIdentity(OCISecurity *osshandle,
                               OCIError *error_handle,
                               nzttIdentity **identity_ptr);

sword OCISecurityFreeIdentity(OCISecurity *osshandle,
			      OCIError *error_handle,
			      nzttIdentity **identity_ptr);


sword OCISecurityStoreTrustedIdentity(OCISecurity *osshandle,
                                      OCIError *error_handle,
                                      nzttIdentity **identity_ptr,
                                      nzttPersona *persona);

sword OCISecuritySign(OCISecurity *osshandle,
                      OCIError *error_handle,
                      nzttPersona *persona,
                      nzttces signature_state,
                      size_t input_length,
                      ub1 *input,
                      nzttBufferBlock *buffer_block);

sword OCISecuritySignExpansion(OCISecurity *osshandle,
                               OCIError *error_handle,
                               nzttPersona *persona,
                               size_t inputlen,
                               size_t *signature_length);

sword OCISecurityVerify(OCISecurity *osshandle,
                        OCIError *error_handle,
                        nzttPersona *persona,
                        nzttces signature_state,
                        size_t siglen,
                        ub1 *signature,
                        nzttBufferBlock *extracted_message,
                        boolean *verified,
                        boolean *validated,
                        nzttIdentity **signing_party_identity);

sword OCISecurityValidate(OCISecurity *osshandle,
                          OCIError *error_handle,
                          nzttPersona *persona,
                          nzttIdentity *identity,
                          boolean *validated);

sword OCISecuritySignDetached(OCISecurity *osshandle,
                              OCIError *error_handle,
                              nzttPersona *persona,
                              nzttces signature_state,
                              size_t input_length,
                              ub1 * input,
                              nzttBufferBlock *signature);

sword OCISecuritySignDetExpansion(OCISecurity *osshandle,
                                  OCIError *error_handle,
                                  nzttPersona *persona,
                                  size_t input_length,
                                  size_t *required_buffer_length);

sword OCISecurityVerifyDetached(OCISecurity *osshandle,
                                OCIError *error_handle,
                                nzttPersona *persona,
                                nzttces signature_state,
                                size_t data_length,
                                ub1 *data,
                                size_t siglen,
                                ub1 *signature,
                                boolean *verified,
                                boolean *validated,
                                nzttIdentity **signing_party_identity);

sword OCISecurity_PKEncrypt(OCISecurity *osshandle,
                            OCIError *error_handle,
                            nzttPersona *persona,
                            size_t number_of_recipients,
                            nzttIdentity *recipient_list,
                            nzttces encryption_state,
                            size_t input_length,
                            ub1 *input,
                            nzttBufferBlock *encrypted_data);

sword OCISecurityPKEncryptExpansion(OCISecurity *osshandle,
                                    OCIError *error_handle,
                                    nzttPersona *persona,
                                    size_t number_recipients,
                                    size_t input_length,
                                    size_t *buffer_length_required);

sword OCISecurityPKDecrypt(OCISecurity *osshandle,
                           OCIError *error_handle,
                           nzttPersona *persona,
                           nzttces encryption_state,
                           size_t input_length,
                           ub1 *input,
                           nzttBufferBlock *encrypted_data);

sword OCISecurityEncrypt(OCISecurity *osshandle,
                         OCIError *error_handle,
                         nzttPersona *persona,
                         nzttces encryption_state,
                         size_t input_length,
                         ub1 *input,
                         nzttBufferBlock *encrypted_data);

sword OCISecurityEncryptExpansion(OCISecurity *osshandle,
                                  OCIError *error_handle,
                                  nzttPersona *persona,
                                  size_t input_length,
                                  size_t *encrypted_data_length);

sword OCISecurityDecrypt(OCISecurity *osshandle,
                         OCIError *error_handle,
                         nzttPersona *persona,
                         nzttces decryption_state,
                         size_t input_length,
                         ub1 *input,
                         nzttBufferBlock *decrypted_data);

sword OCISecurityEnvelope(OCISecurity *osshandle,
                          OCIError *error_handle,
                          nzttPersona *persona,
                          size_t number_of_recipients,
                          nzttIdentity *identity,
                          nzttces encryption_state,
                          size_t input_length,
                          ub1 *input,
                          nzttBufferBlock *enveloped_data);

sword OCISecurityDeEnvelope(OCISecurity *osshandle,
                            OCIError *error_handle,
                            nzttPersona *persona,
                            nzttces decryption_state,
                            size_t input_length,
                            ub1 *input,
                            nzttBufferBlock *output_message,
                            boolean *verified,
                            boolean *validated,
                            nzttIdentity **sender_identity);

sword OCISecurityKeyedHash(OCISecurity *osshandle,
                           OCIError *error_handle,
                           nzttPersona *persona,
                           nzttces hash_state,
                           size_t input_length,
                           ub1 *input,
                           nzttBufferBlock *keyed_hash);

sword OCISecurityKeyedHashExpansion(OCISecurity *osshandle,
                                    OCIError *error_handle,
                                    nzttPersona *persona,
                                    size_t input_length,
                                    size_t *required_buffer_length);

sword OCISecurityHash(OCISecurity *osshandle,
                      OCIError *error_handle,
                      nzttPersona *persona,
                      nzttces hash_state,
                      size_t input,
                      ub1 *input_length,
                      nzttBufferBlock *hash);

sword OCISecurityHashExpansion(OCISecurity *osshandle,
                               OCIError *error_handle,
                               nzttPersona *persona,
                               size_t input_length,
                               size_t *required_buffer_length);

sword OCISecuritySeedRandom(OCISecurity *osshandle,
                            OCIError *error_handle,
                            nzttPersona *persona,
                            size_t seed_length,
                            ub1 *seed);

sword OCISecurityRandomBytes(OCISecurity *osshandle,
                             OCIError *error_handle,
                             nzttPersona *persona,
                             size_t number_of_bytes_desired,
                             nzttBufferBlock *random_bytes);

sword OCISecurityRandomNumber(OCISecurity *osshandle,
                              OCIError *error_handle,
                              nzttPersona *persona,
                              uword *random_number_ptr);

sword OCISecurityInitBlock(OCISecurity *osshandle,
                           OCIError *error_handle,
                           nzttBufferBlock *buffer_block);

sword OCISecurityReuseBlock(OCISecurity *osshandle,
                            OCIError *error_handle,
                            nzttBufferBlock *buffer_block);

sword OCISecurityPurgeBlock(OCISecurity *osshandle,
                            OCIError *error_handle,
                            nzttBufferBlock *buffer_block);

sword OCISecuritySetBlock(OCISecurity *osshandle,
                          OCIError *error_handle,
                          uword flags_to_set,
                          size_t buffer_length,
                          size_t used_buffer_length,
                          ub1 *buffer,
                          nzttBufferBlock *buffer_block);

sword OCISecurityGetIdentity(OCISecurity   *osshandle,
                             OCIError      *error_handle,
                             size_t         namelen,
                             text          *distinguished_name,
                             nzttIdentity **identity);

sword OCIAQEnq(OCISvcCtx *svchp, OCIError *errhp, text *queue_name,
		 OCIAQEnqOptions *enqopt, OCIAQMsgProperties *msgprop,
		 OCIType *payload_tdo, dvoid **payload, dvoid **payload_ind, 
		 OCIRaw **msgid, ub4 flags); 

sword OCIAQDeq(OCISvcCtx *svchp, OCIError *errhp, text *queue_name,
		 OCIAQDeqOptions *deqopt, OCIAQMsgProperties *msgprop,
		 OCIType *payload_tdo, dvoid **payload, dvoid **payload_ind, 
		 OCIRaw **msgid, ub4 flags); 


/*-------------------------- Extensions to XA interface ---------------------*/

/* ------------------------- xaosvch ----------------------------------------*/
/*
   NAME
     xaosvch  -  XA Oracle get SerViCe Handle
   DESCRIPTION
     Given a database name return the service handle that is used by the
     XA library
   NOTE
     This macro has been provided for backward compatibilty with 8.0.2
*/
OCISvcCtx *xaosvch(text *dbname);

/* ------------------------- xaoSvcCtx --------------------------------------*/
/*
   NAME
     xaoSvcCtx  -  XA Oracle get SerViCe ConTeXt
   DESCRIPTION
     Given a database name return the service handle that is used by the
     XA library
   NOTE
     This routine has been provided for APs to get access to the service
     handle that XA library uses. Without this routine APs must use SQLLIB
     routine sqlld2 to get access to the Logon data area registered by the
     XA library
*/
OCISvcCtx *xaoSvcCtx(text *dbname);

/* ------------------------- xaoEnv -----------------------------------------*/
/*
   NAME
     xaoEnv  -  XA Oracle get ENvironment Handle
   DESCRIPTION
     Given a database name return the environment handle that is used by the
     XA library
   NOTE
     This routine has been provided for APs to get access to the environment
     handle that XA library uses. Without this routine APs must use SQLLIB
     routine sqlld2 to get access to the Logon data area registered by the
     XA library
*/
OCIEnv *xaoEnv(text *dbname);

/* ------------------------- xaosterr ---------------------------------------*/
/*
   NAME
     xaosterr  -  XA Oracle get xa STart ERRor code
   DESCRIPTION
     Given an oracle error code return the XA error code
 */
int xaosterr(OCISvcCtx *svch, sb4 error);
/*-------------------------- End Extensions ---------------------------------*/

/*---------------------------------------------------------------------------
                          PRIVATE FUNCTIONS
  ---------------------------------------------------------------------------*/

            /* the following functions are depracated and should not be used */

sword   OCIStmtBindByPos  (OCIStmt *stmtp, OCIBind *bindp, OCIError *errhp,
                  ub4 position, dvoid *valuep, sb4 value_sz,
                  ub2 dty, dvoid *indp, ub2 *alenp, ub2 *rcodep,
                  ub4 maxarr_len, ub4 *curelep, ub4 mode);


sword   OCIStmtBindByName  (OCIStmt *stmtp, OCIBind *bindp, OCIError *errhp,
                  CONST text *placeholder, sb4 placeh_len, dvoid *valuep, 
                  sb4 value_sz, ub2 dty, dvoid *indp, ub2 *alenp, 
                  ub2 *rcodep, ub4 maxarr_len, ub4 *curelep, ub4 mode);

sword   ocidefn  (OCIStmt *stmtp, OCIDefine *defnp, OCIError *errhp,
                  ub4 position, dvoid *valuep, sb4 value_sz, ub2 dty,
                  dvoid *indp, ub2 *rlenp, ub2 *rcodep, ub4 mode);


#endif                                                       /* OCIAP_ORACLE */

















int OCILobIsOpen
      (OCISvcCtx*  get_svchp,
       OCIError* get_errhp,
       OCILobLocator*lob,
       boolean *flag);

int OCILobClose
      (OCISvcCtx*  get_svchp,
       OCIError* get_errhp,
       OCILobLocator*lob);

sword OCITerminate ( ub4    mode);

int OCIEnvCreate
    (OCIEnv** envhp, 
     int mode,
     int a, int b, int c, int d, int e, int f);

int OCISubscriptionRegister(OCISvcCtx *svchp,OCISubscription **subscrhp,int a,OCIError *errhp,int b);

int OCICollSize(OCIEnv* envhp, 
                        OCIError *errhp, 
                        CONST OCIColl* table_changes,
                        sb4* num_tables);
int OCICollGetElem(OCIEnv* envhp, 
                             OCIError *errhp, 
                             OCIColl *table_changes, 
                             int i, 
                             int *exist, 
                             dvoid** temp_table_descp,
                             dvoid ** elemind);

int OCISubscriptionUnRegister(OCISvcCtx *svchp,OCISubscription *subscrhp,OCIError *errhp,int mode);

sword OCIDateTimeConstruct ( dvoid         *hndl,
                             OCIError      *err,
                             OCIDateTime   *datetime,
                             sb2           year,
                             ub1           month,
                             ub1           day,
                             ub1           hour,
                             ub1           min,
                             ub1           sec,
                             ub4           fsec,
                             OraText       *timezone,
                             size_t        timezone_length );
sword OCIDateTimeGetDate ( dvoid              *hndl,
                          OCIError           *err, 
                          CONST OCIDateTime  *datetime,
                          sb2                *year, 
                          ub1                *month, 
                          ub1                *day );
sword OCIDateTimeGetTime ( dvoid         *hndl, 
                          OCIError      *err, 
                          OCIDateTime   *datetime, 
                          ub1           *hour,
                          ub1           *min, 
                          ub1           *sec, 
                          ub4           *fsec );
sword OCIDateTimeGetTimeZoneOffset ( dvoid              *hndl, 
                                    OCIError           *err, 
                                    CONST OCIDateTime  *datetime, 
                                    sb1                *hour,
                                    sb1                *min );



#ifdef __cplusplus
}
#endif /* __cplusplus */




#endif // #define __OCI_FAKE_H__
