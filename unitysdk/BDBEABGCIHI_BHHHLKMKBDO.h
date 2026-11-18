#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class BDBEABGCIHI;
class LLAKLLFJAAD;
class MBJCLLBMALO;

#define BDBEABGCIHI_BHHHLKMKBDO__CTOR_OFFSET UNITYSDK_OFFSET(0x18665B50)

inline static constexpr unsigned int BDBEABGCIHI_BHHHLKMKBDO_TypeDefinitionIndex = 80503;

class BDBEABGCIHI_BHHHLKMKBDO : public ::System::Object
{
public:
	::LLAKLLFJAAD* LJBPECKCCEA; // 0x10
	::MBJCLLBMALO* KKPFEIGFAKK; // 0x18
	::BDBEABGCIHI* KLHPEBKNIFB; // 0x20
	::MoleMole::HollowChessboard::HollowCell PILJJPDCLLM; // 0x28
	::MoleMole::HollowChessboard::HollowCell ECHBPPIEIKI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBEABGCIHI_BHHHLKMKBDO__CTOR_OFFSET))(this);
	}
};
