#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class NNGGMIDBJEG;

#define NNGGMIDBJEG_FEOLOMGAHJG_GBEMDEKKFPM_OFFSET UNITYSDK_OFFSET(0x172A6A80)
#define NNGGMIDBJEG_FEOLOMGAHJG__CTOR_OFFSET UNITYSDK_OFFSET(0x172A6A70)

inline static constexpr unsigned int NNGGMIDBJEG_FEOLOMGAHJG_TypeDefinitionIndex = 57207;

class NNGGMIDBJEG_FEOLOMGAHJG : public ::System::Object
{
public:
	::NNGGMIDBJEG* KLHPEBKNIFB; // 0x10
	::MoleMole::HollowChessboard::HollowCell MONEHIFPAOC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGGMIDBJEG_FEOLOMGAHJG__CTOR_OFFSET))(this);
	}

	::System::Void GBEMDEKKFPM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGGMIDBJEG_FEOLOMGAHJG_GBEMDEKKFPM_OFFSET))(this);
	}
};
