#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterFinishPrayQuestConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706500)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706510)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERFINISHPRAYQUESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7064C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterFinishPrayQuestConfig_TypeDefinitionIndex = 19499;

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
