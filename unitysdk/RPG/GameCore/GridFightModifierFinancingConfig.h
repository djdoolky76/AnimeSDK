#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierFinancingConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734710)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734720)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7346D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierFinancingConfig_TypeDefinitionIndex = 19498;

	class GridFightModifierFinancingConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierFinancingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierFinancingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierFinancingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierFinancingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERFINANCINGCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
