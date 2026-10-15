#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionOnGlobalSavedValueReachConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734530)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734540)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7344F0)

namespace RPG::GameCore
{
	class GridFightModifierExecActionOnGlobalSavedValueReachConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionOnGlobalSavedValueReachConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionOnGlobalSavedValueReachConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionOnGlobalSavedValueReachConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionOnGlobalSavedValueReachConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONONGLOBALSAVEDVALUEREACHCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
