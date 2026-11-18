#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PJKOCFFMLFB.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AGPPAOECHHO_EEEDMPKKNHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x706140)
#define AGPPAOECHHO_EEEDMPKKNHM_PNNJKJEOHAL_OFFSET UNITYSDK_OFFSET(0x706150)
#define AGPPAOECHHO_EEEDMPKKNHM_PPGBHNIJOIB_OFFSET UNITYSDK_OFFSET(0x134CACA0)
#define AGPPAOECHHO_EEEDMPKKNHM__CTOR_OFFSET UNITYSDK_OFFSET(0x3F28E0)

inline static constexpr unsigned int AGPPAOECHHO_EEEDMPKKNHM_TypeDefinitionIndex = 81961;

struct alignas(8) AGPPAOECHHO_EEEDMPKKNHM
{
	::PJKOCFFMLFB PALAELIHFJP; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* HFEIPMCNCNI; // 0x18

	::System::Void _ctor(::PJKOCFFMLFB NDMNMLLEJCE, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::PJKOCFFMLFB, ::System::String*))((::PBYTE)hIl2Cpp + AGPPAOECHHO_EEEDMPKKNHM__CTOR_OFFSET))(this, NDMNMLLEJCE, AELLPLBJELA);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO_EEEDMPKKNHM_DISPOSE_OFFSET))(this);
	}

	::System::Boolean PNNJKJEOHAL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO_EEEDMPKKNHM_PNNJKJEOHAL_OFFSET))(this);
	}

	/*
	static ::AGPPAOECHHO_EEEDMPKKNHM PPGBHNIJOIB()
	{
		return ((::AGPPAOECHHO_EEEDMPKKNHM(*)())((::PBYTE)hIl2Cpp + AGPPAOECHHO_EEEDMPKKNHM_PPGBHNIJOIB_OFFSET))();
	}
	*/
};
