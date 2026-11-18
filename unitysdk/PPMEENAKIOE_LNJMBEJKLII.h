#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class PPMEENAKIOE_GACMEJHOPPJ;

#define PPMEENAKIOE_LNJMBEJKLII_JPJHGJDBJKF_OFFSET UNITYSDK_OFFSET(0x1CB5DDA0)
#define PPMEENAKIOE_LNJMBEJKLII__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5DD90)

inline static constexpr unsigned int PPMEENAKIOE_LNJMBEJKLII_TypeDefinitionIndex = 75037;

class PPMEENAKIOE_LNJMBEJKLII : public ::System::Object
{
public:
	::PPMEENAKIOE_GACMEJHOPPJ* FGBNBFHOKAA; // 0x10
	::MoleMole::HollowChessboard::HollowCell EOGLMAEPALE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMEENAKIOE_LNJMBEJKLII__CTOR_OFFSET))(this);
	}

	::System::Void JPJHGJDBJKF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPMEENAKIOE_LNJMBEJKLII_JPJHGJDBJKF_OFFSET))(this);
	}
};
