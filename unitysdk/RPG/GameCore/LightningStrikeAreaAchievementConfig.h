#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LightningStrikeAreaAchievementConfig; }

#define RPG_GAMECORE_LIGHTNINGSTRIKEAREAACHIEVEMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CFC80)
#define RPG_GAMECORE_LIGHTNINGSTRIKEAREAACHIEVEMENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CFBE0)

namespace RPG::GameCore
{
	class LightningStrikeAreaAchievementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 HitByLightningAchievementID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREAACHIEVEMENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LightningStrikeAreaAchievementConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LightningStrikeAreaAchievementConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LIGHTNINGSTRIKEAREAACHIEVEMENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
