#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APADONELOHK.h"
#include "unitysdk/IMBMPPCPHOD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

#define GBAPOEMJBNM_BGOKFAOFAKK_OFFSET UNITYSDK_OFFSET(0x125BE870)
#define GBAPOEMJBNM_HPHEKGPOFDP_OFFSET UNITYSDK_OFFSET(0x125BE8D0)
#define GBAPOEMJBNM_JBMICLKIHNO_OFFSET UNITYSDK_OFFSET(0x125BE990)
#define GBAPOEMJBNM_JDDMFEELKDH_OFFSET UNITYSDK_OFFSET(0x125BE700)
#define GBAPOEMJBNM_PCDIFGAOPJA_OFFSET UNITYSDK_OFFSET(0x125BE930)
#define GBAPOEMJBNM_PGPHACKPOBD_OFFSET UNITYSDK_OFFSET(0x125BE810)
#define GBAPOEMJBNM_PHDOKDDEDPB_OFFSET UNITYSDK_OFFSET(0x125BE7B0)
#define GBAPOEMJBNM__CTOR_OFFSET UNITYSDK_OFFSET(0x125BE6F0)

inline static constexpr unsigned int GBAPOEMJBNM_TypeDefinitionIndex = 63574;

class GBAPOEMJBNM : public ::APADONELOHK
{
public:
	::System::Boolean IDDAPONJINF; // 0x20

	::System::Void _ctor(::MoleMole::HollowChessboard::HollowCell LFEONIKJIAA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GBAPOEMJBNM__CTOR_OFFSET))(this, LFEONIKJIAA);
	}

	::System::Void JDDMFEELKDH(::IMBMPPCPHOD& FFDHBBHAANK, ::System::Single PBCAAADNEPK, ::MoleMole::HollowChessboard::HollowCell EKPEBNCLJPM)
	{
		return ((::System::Void(*)(::PVOID, ::IMBMPPCPHOD&, ::System::Single, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GBAPOEMJBNM_JDDMFEELKDH_OFFSET))(this, FFDHBBHAANK, PBCAAADNEPK, EKPEBNCLJPM);
	}

	::System::Void PHDOKDDEDPB(::MoleMole::HollowChessboard::HollowCell PJIDDIHFDOO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GBAPOEMJBNM_PHDOKDDEDPB_OFFSET))(this, PJIDDIHFDOO);
	}

	::System::Void PGPHACKPOBD(::MoleMole::HollowChessboard::HollowCell PJIDDIHFDOO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GBAPOEMJBNM_PGPHACKPOBD_OFFSET))(this, PJIDDIHFDOO);
	}

	::System::Void BGOKFAOFAKK(::MoleMole::HollowChessboard::HollowCell PJIDDIHFDOO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GBAPOEMJBNM_BGOKFAOFAKK_OFFSET))(this, PJIDDIHFDOO);
	}

	::System::Void HPHEKGPOFDP(::MoleMole::HollowChessboard::HollowCell PJIDDIHFDOO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GBAPOEMJBNM_HPHEKGPOFDP_OFFSET))(this, PJIDDIHFDOO);
	}

	::System::Void PCDIFGAOPJA(::MoleMole::HollowChessboard::HollowCell PJIDDIHFDOO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GBAPOEMJBNM_PCDIFGAOPJA_OFFSET))(this, PJIDDIHFDOO);
	}

	::System::Void JBMICLKIHNO(::MoleMole::HollowChessboard::HollowCell PJIDDIHFDOO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + GBAPOEMJBNM_JBMICLKIHNO_OFFSET))(this, PJIDDIHFDOO);
	}
};
