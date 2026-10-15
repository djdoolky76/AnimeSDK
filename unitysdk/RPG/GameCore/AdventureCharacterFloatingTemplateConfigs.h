#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureCharacterFloatingTemplateConfig; }
namespace RPG::GameCore { class AdventureCharacterFloatingTemplateConfigs; }

#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C7470)
#define RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C73B0)

namespace RPG::GameCore
{
	class AdventureCharacterFloatingTemplateConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::AdventureCharacterFloatingTemplateConfig*>* TemplateList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureCharacterFloatingTemplateConfigs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURECHARACTERFLOATINGTEMPLATECONFIGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
