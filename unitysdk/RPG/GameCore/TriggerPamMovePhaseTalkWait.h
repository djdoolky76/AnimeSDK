#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerPamMovePhaseTalkWait; }

#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC56A80)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC56A90)
#define RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC569C0)

namespace RPG::GameCore
{
	class TriggerPamMovePhaseTalkWait : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamMovePhaseTalkWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamMovePhaseTalkWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPamMovePhaseTalkWait* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPamMovePhaseTalkWait*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPAMMOVEPHASETALKWAIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
