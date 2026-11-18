#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APADONELOHK.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define IMEINMPFNJK_PGPHACKPOBD_OFFSET UNITYSDK_OFFSET(0x1942DC40)
#define IMEINMPFNJK_PHDOKDDEDPB_OFFSET UNITYSDK_OFFSET(0x1942DBE0)
#define IMEINMPFNJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1942DBD0)

inline static constexpr unsigned int IMEINMPFNJK_TypeDefinitionIndex = 58348;

class IMEINMPFNJK : public ::APADONELOHK
{
public:
	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell LFEONIKJIAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IMEINMPFNJK__CTOR_OFFSET))(this, LFEONIKJIAA);
	}

	::System::Void PHDOKDDEDPB(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IMEINMPFNJK_PHDOKDDEDPB_OFFSET))(this, EKPEBNCLJPM);
	}

	::System::Void PGPHACKPOBD(::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + IMEINMPFNJK_PGPHACKPOBD_OFFSET))(this, EKPEBNCLJPM);
	}
};
