#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionTraitRefreshConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7345F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734600)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7345B0)

namespace RPG::GameCore
{
	class GridFightModifierExecActionTraitRefreshConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionTraitRefreshConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONTRAITREFRESHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
