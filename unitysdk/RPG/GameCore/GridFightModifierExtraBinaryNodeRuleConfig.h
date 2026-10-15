#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExtraBinaryNodeRuleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734650)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734660)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXTRABINARYNODERULECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734610)

namespace RPG::GameCore
{
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
