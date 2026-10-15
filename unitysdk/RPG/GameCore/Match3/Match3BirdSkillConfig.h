#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdItemPackWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdPieceTypeWeightConfig; }
namespace RPG::GameCore::Match3 { class BirdSkillChargingConfig; }
namespace RPG::GameCore::Match3 { class BirdStyleWeightConfig; }
namespace RPG::GameCore::Match3 { class Match3ActionBase; }
namespace RPG::GameCore::Match3 { class Match3BirdSkillConfig; }

#define RPG_GAMECORE_MATCH3_MATCH3BIRDSKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84C3B0)
#define RPG_GAMECORE_MATCH3_MATCH3BIRDSKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84C1A0)

namespace RPG::GameCore::Match3
{
	class Match3BirdSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::Match3::BirdStyleWeightConfig*>* StyleWeightConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::Match3::BirdItemPackWeightConfig*>* ItemPackWeightConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::Match3::BirdPieceTypeWeightConfig*>* PieceTypeWeightConfig; // 0x20
		::RPG::GameCore::Match3::BirdSkillChargingConfig* ChargingConfig; // 0x28
		::Il2CppArray<::RPG::GameCore::Match3::Match3ActionBase*>* Actions; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3BIRDSKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::Match3BirdSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::Match3BirdSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_MATCH3BIRDSKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
