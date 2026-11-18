#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define APADONELOHK_BJEMBNNOLDG_OFFSET UNITYSDK_OFFSET(0x13871070)
#define APADONELOHK_HMBPMNJLGKJ_OFFSET UNITYSDK_OFFSET(0x138710E0)
#define APADONELOHK_PMEHHPCLIJN_OFFSET UNITYSDK_OFFSET(0x138710D0)
#define APADONELOHK__CTOR_OFFSET UNITYSDK_OFFSET(0x13871060)

inline static constexpr unsigned int APADONELOHK_TypeDefinitionIndex = 74854;

class APADONELOHK : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell _DPBDHGDFGFN_k__BackingField; // 0x10

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell LFEONIKJIAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + APADONELOHK__CTOR_OFFSET))(this, LFEONIKJIAA);
	}

	::System::Void BJEMBNNOLDG(::MoleMole::HollowChessboard::HollowCell DCIDNHDLCHP)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + APADONELOHK_BJEMBNNOLDG_OFFSET))(this, DCIDNHDLCHP);
	}

	::System::Void PMEHHPCLIJN(::MoleMole::HollowChessboard::HollowCell EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + APADONELOHK_PMEHHPCLIJN_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::HollowChessboard::HollowCell HMBPMNJLGKJ()
	{
		return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + APADONELOHK_HMBPMNJLGKJ_OFFSET))(this);
	}
};
