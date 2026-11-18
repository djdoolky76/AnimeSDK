#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

#define JIOOBDIABFN__CTOR_OFFSET UNITYSDK_OFFSET(0x411CA0)

inline static constexpr unsigned int JIOOBDIABFN_TypeDefinitionIndex = 48557;

struct alignas(4) JIOOBDIABFN
{
	::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO; // 0x10
	::System::Byte _padding0[0x4];
	::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell ABHBKFJKINO, ::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + JIOOBDIABFN__CTOR_OFFSET))(this, ABHBKFJKINO, PHHDHIBOCKA);
	}
};
