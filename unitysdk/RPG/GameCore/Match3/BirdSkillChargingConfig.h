#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BirdSkillChargeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class BirdSkillChargingConfig; }

#define RPG_GAMECORE_MATCH3_BIRDSKILLCHARGINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81D810)
#define RPG_GAMECORE_MATCH3_BIRDSKILLCHARGINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81D6D0)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BirdSkillChargingConfig_TypeDefinitionIndex = 24929;

	class BirdSkillChargingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::Match3::BirdSkillChargeType ChargeType; // 0x10
		::System::UInt32 StyleID; // 0x14
		::System::UInt32 ChargeCount; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLCHARGINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::BirdSkillChargingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::BirdSkillChargingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_BIRDSKILLCHARGINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
