#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaGuideDrawConfig; }

#define RPG_GAMECORE_ROGUEPERSONAGUIDEDRAWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2BA20)
#define RPG_GAMECORE_ROGUEPERSONAGUIDEDRAWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B9E0)

namespace RPG::GameCore
{
	class RoguePersonaGuideDrawConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAGUIDEDRAWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaGuideDrawConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaGuideDrawConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONAGUIDEDRAWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
