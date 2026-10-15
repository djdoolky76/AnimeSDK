#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_AbilityCooldown; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D32F870)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D32F880)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D32F840)

namespace RPG::Client
{
	class RoadRashGameModifier_AbilityCooldown : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::System::String* AbilityName; // 0x18
		::RPG::GameCore::FixPoint Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_AbilityCooldown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_AbilityCooldown*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_AbilityCooldown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_AbilityCooldown*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ABILITYCOOLDOWN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
