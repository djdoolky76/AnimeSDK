#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DarkTeamFightFormationConfig; }
namespace RPG::GameCore { class LightTeamFightFormationConfig; }
namespace RPG::GameCore { class TeamFormationTemplateSingleConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TEAMFORMATIONTEMPLATESINGLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB79FA0)
#define RPG_GAMECORE_TEAMFORMATIONTEMPLATESINGLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB79E90)

namespace RPG::GameCore
{
	class TeamFormationTemplateSingleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TemplateName; // 0x10
		::RPG::GameCore::LightTeamFightFormationConfig* LightTeamFightFormation; // 0x18
		::RPG::GameCore::DarkTeamFightFormationConfig* DarkTeamFightFormation; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONTEMPLATESINGLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamFormationTemplateSingleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamFormationTemplateSingleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONTEMPLATESINGLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
