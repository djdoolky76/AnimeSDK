#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierReplaceSupplyRuleIdConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735540)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735550)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735500)

namespace RPG::GameCore
{
	class GridFightModifierReplaceSupplyRuleIdConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierReplaceSupplyRuleIdConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERREPLACESUPPLYRULEIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
