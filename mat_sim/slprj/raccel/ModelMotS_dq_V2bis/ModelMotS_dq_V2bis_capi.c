#include "__cf_ModelMotS_dq_V2bis.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "ModelMotS_dq_V2bis_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#ifndef SS_INT64
#define SS_INT64  15
#endif
#ifndef SS_UINT64
#define SS_UINT64  16
#endif
#else
#include "builtin_typeid_types.h"
#include "ModelMotS_dq_V2bis.h"
#include "ModelMotS_dq_V2bis_capi.h"
#include "ModelMotS_dq_V2bis_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 5 , TARGET_STRING (
"ModelMotS_dq_V2bis/UF control _ dqframe" ) , TARGET_STRING ( "" ) , 0 , 0 ,
0 , 0 , 0 } , { 1 , 5 , TARGET_STRING (
"ModelMotS_dq_V2bis/UF control _ dqframe" ) , TARGET_STRING ( "" ) , 1 , 0 ,
1 , 0 , 0 } , { 2 , 0 , TARGET_STRING ( "ModelMotS_dq_V2bis/Pulse Generator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Gain4" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 4 , 0 , TARGET_STRING (
"ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Sum1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"ModelMotS_dq_V2bis/Induction Motor - Mechanical part Rigid Coupling2/Gain" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor - Mechanical part Rigid Coupling2/Integrator2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"ModelMotS_dq_V2bis/Load value p.u./Output" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 2 } , { 9 , 0 , TARGET_STRING (
"ModelMotS_dq_V2bis/Reference Speed (rad//s)/Output" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 2 } , { 10 , 5 , TARGET_STRING (
"ModelMotS_dq_V2bis/UF control _ dqframe/wref" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 0 } , { 11 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Electromagnetic torque/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/f/Fcn"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/f/Gain3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 15 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/f/Math Function3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 16 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/f/Relational Operator1"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 4 } , { 17 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/g_1/Gain2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 18 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/g_1/Gain5"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 19 , 0 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/g_1/Relational Operator1"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 4 } , { 20 , 5 , TARGET_STRING (
"ModelMotS_dq_V2bis/UF control _ dqframe/UF control/Limitation/Product1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 21 , TARGET_STRING (
"ModelMotS_dq_V2bis/Load value p.u." ) , TARGET_STRING ( "rep_seq_y" ) , 0 ,
2 , 0 } , { 22 , TARGET_STRING (
"ModelMotS_dq_V2bis/Reference Speed (rad//s)" ) , TARGET_STRING ( "rep_seq_y"
) , 0 , 2 , 0 } , { 23 , TARGET_STRING (
"ModelMotS_dq_V2bis/Pulse Generator2" ) , TARGET_STRING ( "Amplitude" ) , 0 ,
1 , 0 } , { 24 , TARGET_STRING ( "ModelMotS_dq_V2bis/Pulse Generator2" ) ,
TARGET_STRING ( "PulseWidth" ) , 0 , 1 , 0 } , { 25 , TARGET_STRING (
"ModelMotS_dq_V2bis/Pulse Generator2" ) , TARGET_STRING ( "PhaseDelay" ) , 0
, 1 , 0 } , { 26 , TARGET_STRING (
"ModelMotS_dq_V2bis/Load value p.u./Constant" ) , TARGET_STRING ( "Value" ) ,
0 , 1 , 0 } , { 27 , TARGET_STRING (
"ModelMotS_dq_V2bis/Load value p.u./Look-Up Table1" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 2 , 0 } , { 28 , TARGET_STRING (
"ModelMotS_dq_V2bis/Reference Speed (rad//s)/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 29 , TARGET_STRING (
"ModelMotS_dq_V2bis/Reference Speed (rad//s)/Look-Up Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 2 , 0 } , { 30 ,
TARGET_STRING (
"ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/jPr/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 31 , TARGET_STRING (
"ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/jPs/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 32 , TARGET_STRING (
"ModelMotS_dq_V2bis/UF control _ dqframe/UF control/Unit Delay2" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 33 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/f/Gain3"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 34 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/g_1/Gain4"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 35 , TARGET_STRING (
 "ModelMotS_dq_V2bis/Induction Motor  Electrical Part d,q/Non Linear Magnetic Coupling/g_1/Gain5"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 36 , TARGET_STRING (
"ModelMotS_dq_V2bis/UF control _ dqframe/UF control/Limitation/Constant4" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 37 , TARGET_STRING (
"ModelMotS_dq_V2bis/UF control _ dqframe/UF control/Limitation/Constant5" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 38 , TARGET_STRING (
 "ModelMotS_dq_V2bis/UF control _ dqframe/UF control/Limitation/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { {
39 , TARGET_STRING ( "J" ) , 0 , 1 , 0 } , { 40 , TARGET_STRING ( "Lfr" ) , 0
, 1 , 0 } , { 41 , TARGET_STRING ( "Lfs" ) , 0 , 1 , 0 } , { 42 ,
TARGET_STRING ( "Lmt" ) , 0 , 1 , 0 } , { 43 , TARGET_STRING ( "Lr" ) , 0 , 1
, 0 } , { 44 , TARGET_STRING ( "P1" ) , 0 , 1 , 0 } , { 45 , TARGET_STRING (
"P2" ) , 0 , 1 , 0 } , { 46 , TARGET_STRING ( "Prinit" ) , 0 , 0 , 0 } , { 47
, TARGET_STRING ( "Psdnom" ) , 0 , 1 , 0 } , { 48 , TARGET_STRING ( "Psinit"
) , 0 , 0 , 0 } , { 49 , TARGET_STRING ( "Rr" ) , 0 , 1 , 0 } , { 50 ,
TARGET_STRING ( "Rs" ) , 0 , 1 , 0 } , { 51 , TARGET_STRING ( "Ts" ) , 0 , 1
, 0 } , { 52 , TARGET_STRING ( "Ulim" ) , 0 , 1 , 0 } , { 53 , TARGET_STRING
( "Uo" ) , 0 , 1 , 0 } , { 54 , TARGET_STRING ( "np" ) , 0 , 1 , 0 } , { 55 ,
TARGET_STRING ( "thrinit" ) , 0 , 1 , 0 } , { 56 , TARGET_STRING ( "wL" ) , 0
, 1 , 0 } , { 57 , TARGET_STRING ( "wrinit" ) , 0 , 1 , 0 } , { 0 , ( NULL )
, 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . hnwzv3x0b1 [ 0 ] , & rtB .
knilgucuxh , & rtB . g0el003inj , & rtB . iduowywrvk , & rtB . nxuwj40k4p [ 0
] , & rtB . gfhu5zazqc [ 0 ] , & rtB . fef3w22snz , & rtB . huurwkokgq , &
rtB . imb1ngw3np , & rtB . hykwlush2d , & rtB . knilgucuxh , & rtB .
ebbpnwxezq , & rtB . m22z1j30gg [ 0 ] , & rtB . hhj5dtpi3h , & rtB .
ncmpb5etp2 , & rtB . k2fa4oq2oz , & rtB . aqhtrfrelr , & rtB . ievobaeq52 , &
rtB . lgdciemkfs , & rtB . dej0hbwdeh , & rtB . hnwzv3x0b1 [ 0 ] , & rtP .
Loadvaluepu_rep_seq_y [ 0 ] , & rtP . ReferenceSpeedrads_rep_seq_y [ 0 ] , &
rtP . PulseGenerator2_Amp , & rtP . PulseGenerator2_Duty , & rtP .
PulseGenerator2_PhaseDelay , & rtP . Constant_Value_jaivf4zt3q , & rtP .
LookUpTable1_bp01Data_jgw1iq0tw2 [ 0 ] , & rtP . Constant_Value_dn2cyv14tz ,
& rtP . LookUpTable1_bp01Data [ 0 ] , & rtP . Gain_Gain , & rtP .
Gain_Gain_f4udjbnlx2 , & rtP . UnitDelay2_InitialCondition , & rtP .
Gain3_Gain , & rtP . Gain4_Gain , & rtP . Gain5_Gain , & rtP .
Constant4_Value , & rtP . Constant5_Value , & rtP . Constant_Value , & rtP .
J , & rtP . Lfr , & rtP . Lfs , & rtP . Lmt , & rtP . Lr , & rtP . P1 , & rtP
. P2 , & rtP . Prinit [ 0 ] , & rtP . Psdnom , & rtP . Psinit [ 0 ] , & rtP .
Rr , & rtP . Rs , & rtP . Ts , & rtP . Ulim , & rtP . Uo , & rtP . np , & rtP
. thrinit , & rtP . wL , & rtP . wrinit , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , SS_DOUBLE , 0 , 0 } , {
"unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , SS_BOOLEAN , 0
, 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
2 , 1 , 1 , 1 , 1 , 1200000 } ; static const real_T rtcapiStoredFloats [ ] =
{ - 2.0 , 0.0 , 1.0 } ; static const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { (
NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , - 1 , 0
} , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , 3 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 1 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } , { ( NULL ) ,
( NULL ) , 4 , 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const
void * ) & rtcapiStoredFloats [ 2 ] , 1 , 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 21 , ( NULL )
, 0 , ( NULL ) , 0 } , { rtBlockParameters , 18 , rtModelParameters , 19 } ,
{ ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap , rtFixPtMap ,
rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" , { 3178666929U
, 1827704289U , 3614403341U , 744385106U } , ( NULL ) , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo * ModelMotS_dq_V2bis_GetCAPIStaticMap ( void )
{ return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void ModelMotS_dq_V2bis_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion (
( * rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void ModelMotS_dq_V2bis_host_InitializeDataMapInfo (
ModelMotS_dq_V2bis_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ; rtwCAPI_SetPath (
dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif