#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterSupplyConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706800)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706810)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7067C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterSupplyConfig_TypeDefinitionIndex = 19366;

	class GridFightModifierExecActionAfterSupplyConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterSupplyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterSupplyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterSupplyConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterSupplyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERSUPPLYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
