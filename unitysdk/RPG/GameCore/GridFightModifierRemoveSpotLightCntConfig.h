#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierRemoveSpotLightCntConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVESPOTLIGHTCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E943080)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVESPOTLIGHTCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E943090)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVESPOTLIGHTCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E943040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierRemoveSpotLightCntConfig_TypeDefinitionIndex = 19788;

	class GridFightModifierRemoveSpotLightCntConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVESPOTLIGHTCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRemoveSpotLightCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRemoveSpotLightCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVESPOTLIGHTCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierRemoveSpotLightCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierRemoveSpotLightCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREMOVESPOTLIGHTCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
