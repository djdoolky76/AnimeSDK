#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterFinishPrayQuestConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D733F90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D733FA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D733F50)

namespace RPG::GameCore
{
	class GridFightModifierExecActionAfterFinishPrayQuestConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterFinishPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterFinishPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterFinishPrayQuestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterFinishPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
