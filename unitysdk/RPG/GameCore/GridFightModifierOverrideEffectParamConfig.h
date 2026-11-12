#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierOverrideEffectParamConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942BA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E942BB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E942B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierOverrideEffectParamConfig_TypeDefinitionIndex = 19709;

	class GridFightModifierOverrideEffectParamConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierOverrideEffectParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierOverrideEffectParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierOverrideEffectParamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierOverrideEffectParamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEROVERRIDEEFFECTPARAMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
