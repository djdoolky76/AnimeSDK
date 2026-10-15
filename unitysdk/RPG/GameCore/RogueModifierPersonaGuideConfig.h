#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierPersonaGuideConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA19280)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA19290)
#define RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA19240)

namespace RPG::GameCore
{
	class RogueModifierPersonaGuideConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaGuideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaGuideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierPersonaGuideConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierPersonaGuideConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERPERSONAGUIDECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
