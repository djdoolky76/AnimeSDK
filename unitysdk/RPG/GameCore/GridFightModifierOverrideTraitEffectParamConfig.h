#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierOverrideTraitEffectParamConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707690)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7076A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierOverrideTraitEffectParamConfig_TypeDefinitionIndex = 19459;

	class GridFightModifierOverrideTraitEffectParamConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierOverrideTraitEffectParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierOverrideTraitEffectParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierOverrideTraitEffectParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierOverrideTraitEffectParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDETRAITEFFECTPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
