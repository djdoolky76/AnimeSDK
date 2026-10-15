#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamFormationTemplateConfig; }
namespace RPG::GameCore { class TeamFormationTemplateSingleConfig; }

#define RPG_GAMECORE_TEAMFORMATIONTEMPLATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB79E80)
#define RPG_GAMECORE_TEAMFORMATIONTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB79D90)

namespace RPG::GameCore
{
	class TeamFormationTemplateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TeamFormationTemplateSingleConfig*>* TemplateSingleConfigList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONTEMPLATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamFormationTemplateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamFormationTemplateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMFORMATIONTEMPLATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
