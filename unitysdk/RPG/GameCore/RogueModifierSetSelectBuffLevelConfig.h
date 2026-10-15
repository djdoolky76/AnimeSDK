#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetSelectBuffLevelConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A820)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A830)
#define RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A7E0)

namespace RPG::GameCore
{
	class RogueModifierSetSelectBuffLevelConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetSelectBuffLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetSelectBuffLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetSelectBuffLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetSelectBuffLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETSELECTBUFFLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
