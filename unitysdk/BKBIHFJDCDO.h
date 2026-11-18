#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class MBJCLLBMALO;

#define BKBIHFJDCDO_ACALKPGHILE_OFFSET UNITYSDK_OFFSET(0xFF828C0)
#define BKBIHFJDCDO_BFOENCBNPKD_OFFSET UNITYSDK_OFFSET(0xFF82930)

inline static constexpr unsigned int BKBIHFJDCDO_TypeDefinitionIndex = 38941;

class BKBIHFJDCDO : public ::System::Object
{
public:
	static ::System::Void ACALKPGHILE(::MBJCLLBMALO* GBELIHABEDH, ::MoleMole::HollowChessboard::HollowCell GALMEKPFIKN)
	{
		return ((::System::Void(*)(::MBJCLLBMALO*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BKBIHFJDCDO_ACALKPGHILE_OFFSET))(GBELIHABEDH, GALMEKPFIKN);
	}

	static ::System::Void BFOENCBNPKD(::MBJCLLBMALO* GBELIHABEDH, ::MoleMole::HollowChessboard::HollowChessboardUID ACHBBPJIBIE, ::MoleMole::HollowChessboard::HollowCell GALMEKPFIKN)
	{
		return ((::System::Void(*)(::MBJCLLBMALO*, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BKBIHFJDCDO_BFOENCBNPKD_OFFSET))(GBELIHABEDH, ACHBBPJIBIE, GALMEKPFIKN);
	}
};
