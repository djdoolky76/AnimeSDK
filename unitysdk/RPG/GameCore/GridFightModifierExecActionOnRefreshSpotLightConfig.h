#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionOnRefreshSpotLightConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONREFRESHSPOTLIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208B97C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONREFRESHSPOTLIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208B97D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONREFRESHSPOTLIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208B9780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionOnRefreshSpotLightConfig_TypeDefinitionIndex = 19804;

	class GridFightModifierExecActionOnRefreshSpotLightConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONREFRESHSPOTLIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionOnRefreshSpotLightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionOnRefreshSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONREFRESHSPOTLIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionOnRefreshSpotLightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionOnRefreshSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONREFRESHSPOTLIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
