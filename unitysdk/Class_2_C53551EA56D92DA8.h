#pragma once
// HSR 4.5 -> 4.6 compatibility alias.
//
// In the 4.5 SDK this anonymous (stripped-name) battle task class was generated
// as "Class_2_C53551EA56D92DA8"; in 4.6 the same class (identical fields, parent,
// methods and parameter types) is generated as "KLCEMHGDCCC".
// This header provides the 4.5 type name and method macros so consumers such as
// Pipsi-HSR (https://github.com/Z4ee/Pipsi-HSR) keep compiling when moved to
// the 4.6 SDK; the RVA values now come from the 4.6 build.
#include "unitysdk/KLCEMHGDCCC.h"

using Class_2_C53551EA56D92DA8 = ::KLCEMHGDCCC;

inline static constexpr unsigned int Class_2_C53551EA56D92DA8_TypeDefinitionIndex = KLCEMHGDCCC_TypeDefinitionIndex;

#define CLASS_2_C53551EA56D92DA8__CTOR_OFFSET KLCEMHGDCCC_CTOR_OFFSET
#define CLASS_2_C53551EA56D92DA8_DISPOSE_OFFSET KLCEMHGDCCC_DISPOSE_OFFSET
#define CLASS_2_C53551EA56D92DA8_ONTASKBEGIN_OFFSET KLCEMHGDCCC_ONTASKBEGIN_OFFSET
#define CLASS_2_C53551EA56D92DA8_ONTASKRESET_OFFSET KLCEMHGDCCC_ONTASKRESET_OFFSET
#define CLASS_2_C53551EA56D92DA8_TICK_OFFSET KLCEMHGDCCC_TICK_OFFSET
#define CLASS_2_C53551EA56D92DA8_METHOD_2_EA6AB70431410CAB_OFFSET KLCEMHGDCCC_JELJKMHDNKL_OFFSET
#define CLASS_2_C53551EA56D92DA8_METHOD_2_F7FB765F17E7AB5A_OFFSET KLCEMHGDCCC_IMKEDDPCEHJ_OFFSET
