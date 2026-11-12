#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierEliteBranchExtraRewardConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERELITEBRANCHEXTRAREWARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E940E70)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERELITEBRANCHEXTRAREWARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E940E80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERELITEBRANCHEXTRAREWARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E940E30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierEliteBranchExtraRewardConfig_TypeDefinitionIndex = 19786;

	class GridFightModifierEliteBranchExtraRewardConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERELITEBRANCHEXTRAREWARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierEliteBranchExtraRewardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierEliteBranchExtraRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERELITEBRANCHEXTRAREWARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierEliteBranchExtraRewardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierEliteBranchExtraRewardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERELITEBRANCHEXTRAREWARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
