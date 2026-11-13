#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionTriggerSpotLightSelectConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERSPOTLIGHTSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205FA3C0)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERSPOTLIGHTSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205FA3D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERSPOTLIGHTSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205FA380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionTriggerSpotLightSelectConfig_TypeDefinitionIndex = 19520;

	class GridFightActionTriggerSpotLightSelectConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERSPOTLIGHTSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerSpotLightSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerSpotLightSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERSPOTLIGHTSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionTriggerSpotLightSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionTriggerSpotLightSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONTRIGGERSPOTLIGHTSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
