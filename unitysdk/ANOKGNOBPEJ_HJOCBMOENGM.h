#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class ANOKGNOBPEJ;

#define ANOKGNOBPEJ_HJOCBMOENGM_KKBGNGNKCMN_OFFSET UNITYSDK_OFFSET(0x14379E50)
#define ANOKGNOBPEJ_HJOCBMOENGM_NIHCAAENOGL_OFFSET UNITYSDK_OFFSET(0x14379DB0)
#define ANOKGNOBPEJ_HJOCBMOENGM__CTOR_OFFSET UNITYSDK_OFFSET(0x14379DA0)

inline static constexpr unsigned int ANOKGNOBPEJ_HJOCBMOENGM_TypeDefinitionIndex = 60721;

class ANOKGNOBPEJ_HJOCBMOENGM : public ::System::Object
{
public:
	::ANOKGNOBPEJ* KLHPEBKNIFB; // 0x10
	::HOCDHMEPPEG MIFEFNBFLEF; // 0x18
	::HOCDHMEPPEG OABJDINGHEJ; // 0x48
	::System::Int32 AKKPANOCDAA; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOKGNOBPEJ_HJOCBMOENGM__CTOR_OFFSET))(this);
	}

	::System::Void NIHCAAENOGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANOKGNOBPEJ_HJOCBMOENGM_NIHCAAENOGL_OFFSET))(this);
	}

	::System::Void KKBGNGNKCMN(::System::Int32 NCMDPBFGEFI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANOKGNOBPEJ_HJOCBMOENGM_KKBGNGNKCMN_OFFSET))(this, NCMDPBFGEFI);
	}
};
