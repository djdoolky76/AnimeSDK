#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class LightningStrikeAreaAchievementConfig; }
namespace RPG::GameCore { class LightningStrikeAreaGlobalConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LIGHTNINGSTRIKEAREAGLOBALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D02E0)
#define RPG_GAMECORE_LIGHTNINGSTRIKEAREAGLOBALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D01C0)

namespace RPG::GameCore
{
	class LightningStrikeAreaGlobalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x10
		::RPG::GameCore::LightningStrikeAreaAchievementConfig* AchievementConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnHitPlayer; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREAGLOBALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LightningStrikeAreaGlobalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LightningStrikeAreaGlobalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREAGLOBALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
