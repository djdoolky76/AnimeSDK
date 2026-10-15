#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerPartnerAnimSync; }

#define RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC57410)
#define RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC57420)
#define RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC573E0)

namespace RPG::GameCore
{
	class TriggerPartnerAnimSync : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DoSync; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPartnerAnimSync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPartnerAnimSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerPartnerAnimSync* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerPartnerAnimSync*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARTNERANIMSYNC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
