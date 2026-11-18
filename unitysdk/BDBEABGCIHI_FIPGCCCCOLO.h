#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BDBEABGCIHI_BHHHLKMKBDO;
namespace MoleMole::HollowChessboard { class HollowEntity; }

#define BDBEABGCIHI_FIPGCCCCOLO_JIKFBCLNGJN_OFFSET UNITYSDK_OFFSET(0x18665B70)
#define BDBEABGCIHI_FIPGCCCCOLO__CTOR_OFFSET UNITYSDK_OFFSET(0x18665B60)

inline static constexpr unsigned int BDBEABGCIHI_FIPGCCCCOLO_TypeDefinitionIndex = 80502;

class BDBEABGCIHI_FIPGCCCCOLO : public ::System::Object
{
public:
	::BDBEABGCIHI_BHHHLKMKBDO* FGBNBFHOKAA; // 0x10
	::MoleMole::HollowChessboard::HollowEntity* BDIABDDNLJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBEABGCIHI_FIPGCCCCOLO__CTOR_OFFSET))(this);
	}

	::System::Void JIKFBCLNGJN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBEABGCIHI_FIPGCCCCOLO_JIKFBCLNGJN_OFFSET))(this);
	}
};
