#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class BIKHOIPCKPC_ENOHKMIIGHK;

#define BIKHOIPCKPC_CBCNMJLCBEB_AGIFMHMIHOI_OFFSET UNITYSDK_OFFSET(0x14252670)
#define BIKHOIPCKPC_CBCNMJLCBEB__CTOR_OFFSET UNITYSDK_OFFSET(0x14252660)

inline static constexpr unsigned int BIKHOIPCKPC_CBCNMJLCBEB_TypeDefinitionIndex = 46386;

class BIKHOIPCKPC_CBCNMJLCBEB : public ::System::Object
{
public:
	::BIKHOIPCKPC_ENOHKMIIGHK* EEMOEMFLABI; // 0x10
	::System::Boolean MEKKLAFOCCH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIKHOIPCKPC_CBCNMJLCBEB__CTOR_OFFSET))(this);
	}

	::System::Void AGIFMHMIHOI(::MoleMole::HollowChessboard::HollowCell HODAIDNDKHD, ::MoleMole::HollowChessboard::HollowCell KLNKFNEDDEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BIKHOIPCKPC_CBCNMJLCBEB_AGIFMHMIHOI_OFFSET))(this, HODAIDNDKHD, KLNKFNEDDEJ);
	}
};
