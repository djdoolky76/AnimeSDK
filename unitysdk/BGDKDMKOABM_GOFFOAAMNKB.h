#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define BGDKDMKOABM_GOFFOAAMNKB_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x5E6810)

inline static constexpr unsigned int BGDKDMKOABM_GOFFOAAMNKB_TypeDefinitionIndex = 47628;

struct alignas(8) BGDKDMKOABM_GOFFOAAMNKB
{
	::System::Action* CAAFEGLOALC; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18

	::System::Void IGJIGJCLNKJ(::System::Boolean DOFCLPCLHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGDKDMKOABM_GOFFOAAMNKB_IGJIGJCLNKJ_OFFSET))(this, DOFCLPCLHOJ);
	}
};
