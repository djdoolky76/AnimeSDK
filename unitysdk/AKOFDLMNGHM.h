#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

#define AKOFDLMNGHM_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x7BFD50)

inline static constexpr unsigned int AKOFDLMNGHM_TypeDefinitionIndex = 78557;

struct alignas(4) AKOFDLMNGHM
{
	::MoleMole::HollowChessboard::RenderDataHandle PLIMFINHHNK; // 0x10

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKOFDLMNGHM_LJMIPGJJELP_OFFSET))(this);
	}
};
