#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterCostTrailblazeCoinConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOSTTRAILBLAZECOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E941350)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOSTTRAILBLAZECOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E941360)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOSTTRAILBLAZECOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E941310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterCostTrailblazeCoinConfig_TypeDefinitionIndex = 19793;

	class GridFightModifierExecActionAfterCostTrailblazeCoinConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOSTTRAILBLAZECOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCostTrailblazeCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterCostTrailblazeCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOSTTRAILBLAZECOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterCostTrailblazeCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterCostTrailblazeCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERCOSTTRAILBLAZECOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
