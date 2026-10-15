#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/GameCore/UpgradeAvatarSubRelicType.h"
#include "unitysdk/System/Object.h"
class CCDMGPLMKHJ;
class FCOEMCEDLNL;
class JHCAHJLOHAG;

#define CCDMGPLMKHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA09810)
#define CCDMGPLMKHJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA095D0)

inline static constexpr unsigned int CCDMGPLMKHJ_TypeDefinitionIndex = 15408;

	class CCDMGPLMKHJ : public ::System::Object
	{
	public:
		::Il2CppArray<::JHCAHJLOHAG*>* HHBEAPOCLPC; // 0x10
		::RPG::GameCore::RelicType EMLJEDBDDDM; // 0x18
		::RPG::GameCore::UpgradeAvatarSubRelicType AMAPBCEEKFP; // 0x1C
		::System::UInt32 PPBBCGALMLJ; // 0x20
		::System::UInt32 FAONKFODAHF; // 0x24
		::RPG::GameCore::CombatPowerRelicRarityType GMNJOHLBFDA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCDMGPLMKHJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CCDMGPLMKHJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CCDMGPLMKHJ*))((::PBYTE)hIl2Cpp + CCDMGPLMKHJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
