#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class KHBEBKBAKEF_FIOCIPKLPMF;

#define KHBEBKBAKEF_NACLBOJFKFK_LCHJJLJOEMC_OFFSET UNITYSDK_OFFSET(0x1520E860)
#define KHBEBKBAKEF_NACLBOJFKFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1520E850)

inline static constexpr unsigned int KHBEBKBAKEF_NACLBOJFKFK_TypeDefinitionIndex = 71730;

class KHBEBKBAKEF_NACLBOJFKFK : public ::System::Object
{
public:
	::KHBEBKBAKEF_FIOCIPKLPMF* EEMOEMFLABI; // 0x10
	::System::Boolean MEKKLAFOCCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHBEBKBAKEF_NACLBOJFKFK__CTOR_OFFSET))(this);
	}

	::System::Void LCHJJLJOEMC(::MoleMole::HollowChessboard::HollowCell HODAIDNDKHD, ::MoleMole::HollowChessboard::HollowCell KLNKFNEDDEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + KHBEBKBAKEF_NACLBOJFKFK_LCHJJLJOEMC_OFFSET))(this, HODAIDNDKHD, KLNKFNEDDEJ);
	}
};
