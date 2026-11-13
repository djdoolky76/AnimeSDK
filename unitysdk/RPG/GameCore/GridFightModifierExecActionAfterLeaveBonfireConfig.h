#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterLeaveBonfireConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERLEAVEBONFIRECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x208B9220)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERLEAVEBONFIRECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x208B9230)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERLEAVEBONFIRECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x208B91E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterLeaveBonfireConfig_TypeDefinitionIndex = 19771;

	class GridFightModifierExecActionAfterLeaveBonfireConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERLEAVEBONFIRECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterLeaveBonfireConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterLeaveBonfireConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERLEAVEBONFIRECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterLeaveBonfireConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterLeaveBonfireConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERLEAVEBONFIRECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
