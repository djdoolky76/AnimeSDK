#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetTutorialSpotLightConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSPOTLIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208BBA90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSPOTLIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208BBAA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSPOTLIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208BBA50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetTutorialSpotLightConfig_TypeDefinitionIndex = 19685;

	class GridFightModifierSetTutorialSpotLightConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSPOTLIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialSpotLightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSPOTLIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetTutorialSpotLightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetTutorialSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETTUTORIALSPOTLIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
