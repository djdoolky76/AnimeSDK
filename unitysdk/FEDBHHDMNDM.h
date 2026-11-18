#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Action; }

#define FEDBHHDMNDM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x4AFD60)

inline static constexpr unsigned int FEDBHHDMNDM_TypeDefinitionIndex = 83522;

struct alignas(8) FEDBHHDMNDM
{
	::System::Int32 EMIHPNKBMBF; // 0x10
	::System::Byte _padding0[0x4];
	::System::Action* MGFMIEOGALD; // 0x18
	::System::Action* GKEMMLJCHDC; // 0x20

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDBHHDMNDM_PHOADBJGFBE_OFFSET))(this);
	}
};
