#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPADOPFDNGD.h"
#include "unitysdk/PPAKFGNBGFE.h"
#include "unitysdk/System/ValueType.h"

#define INLEFOLJLJJ_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x5ED570)
#define INLEFOLJLJJ_MKOJFKHIABA_OFFSET UNITYSDK_OFFSET(0x5ED560)
#define INLEFOLJLJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x5ED550)

inline static constexpr unsigned int INLEFOLJLJJ_TypeDefinitionIndex = 62933;

struct alignas(4) INLEFOLJLJJ
{
	::PPAKFGNBGFE OGDKIDBHCGO; // 0x10
	::OPADOPFDNGD NHHGMALNNMF; // 0x14
	::System::Single CJLKFOGFONE; // 0x18

	::System::Void _ctor(::PPAKFGNBGFE DCKLIOLOCGP, ::OPADOPFDNGD MDEIMMJBCDP, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::PPAKFGNBGFE, ::OPADOPFDNGD, ::System::Single))((::PBYTE)hIl2Cpp + INLEFOLJLJJ__CTOR_OFFSET))(this, DCKLIOLOCGP, MDEIMMJBCDP, MDPPNMIPDMP);
	}

	::System::Boolean MKOJFKHIABA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INLEFOLJLJJ_MKOJFKHIABA_OFFSET))(this);
	}

	::System::Single FCFOEJGPDNO(::System::Single HOGLMMODMON)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + INLEFOLJLJJ_FCFOEJGPDNO_OFFSET))(this, HOGLMMODMON);
	}
};
