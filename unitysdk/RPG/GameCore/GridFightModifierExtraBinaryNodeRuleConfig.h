#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExtraBinaryNodeRuleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706BC0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706BD0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D706B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExtraBinaryNodeRuleConfig_TypeDefinitionIndex = 19447;

	class GridFightModifierExtraBinaryNodeRuleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExtraBinaryNodeRuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExtraBinaryNodeRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExtraBinaryNodeRuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExtraBinaryNodeRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
