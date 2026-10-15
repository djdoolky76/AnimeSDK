#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterAddRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733C90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733CA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733C50)

namespace RPG::GameCore
{
	class GridFightModifierExecActionAfterAddRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterAddRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterAddRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterAddRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERADDROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
