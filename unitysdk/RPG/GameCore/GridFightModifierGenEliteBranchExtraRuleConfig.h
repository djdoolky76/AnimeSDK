#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierGenEliteBranchExtraRuleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707040)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D707050)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierGenEliteBranchExtraRuleConfig_TypeDefinitionIndex = 19482;

	class GridFightModifierGenEliteBranchExtraRuleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierGenEliteBranchExtraRuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierGenEliteBranchExtraRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierGenEliteBranchExtraRuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierGenEliteBranchExtraRuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERGENELITEBRANCHEXTRARULECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
