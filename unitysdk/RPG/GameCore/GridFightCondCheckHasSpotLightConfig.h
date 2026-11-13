#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCondCheckHasSpotLightConfig; }

#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASSPOTLIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x205FF100)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASSPOTLIGHTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x205FF110)
#define RPG_GAMECORE_GRIDFIGHTCONDCHECKHASSPOTLIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x205FF0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCondCheckHasSpotLightConfig_TypeDefinitionIndex = 19545;

	class GridFightCondCheckHasSpotLightConfig : public ::RPG::GameCore::GridFightConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASSPOTLIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondCheckHasSpotLightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondCheckHasSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASSPOTLIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCondCheckHasSpotLightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCondCheckHasSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDCHECKHASSPOTLIGHTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
