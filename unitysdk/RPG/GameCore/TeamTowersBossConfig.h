#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersBossConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEAMTOWERSBOSSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB7C560)
#define RPG_GAMECORE_TEAMTOWERSBOSSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7C320)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersBossConfig_TypeDefinitionIndex = 18956;

	class TeamTowersBossConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MaxBossHP; // 0x10
		::System::Single InitialBossCharge; // 0x14
		::System::Single MaxBossCharge; // 0x18
		::System::Single BossChargeIncrementPerSecond; // 0x1C
		::System::Single BossChargeDecrementOnBrickPlaced; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* BrickSequenceJsonPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersBossConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersBossConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
