#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/ValueType.h"

class AMFAHGEFDFJ;

#define NHGHGODDLFP__CTOR_OFFSET UNITYSDK_OFFSET(0x392710)

inline static constexpr unsigned int NHGHGODDLFP_TypeDefinitionIndex = 51492;

struct alignas(8) NHGHGODDLFP
{
	::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA; // 0x10
	::AMFAHGEFDFJ* LJBPECKCCEA; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::RenderDataHandle PHHDHIBOCKA, ::AMFAHGEFDFJ* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::AMFAHGEFDFJ*))((::PBYTE)hIl2Cpp + NHGHGODDLFP__CTOR_OFFSET))(this, PHHDHIBOCKA, LJBPECKCCEA);
	}
};
