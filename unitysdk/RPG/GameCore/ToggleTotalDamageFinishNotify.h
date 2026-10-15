#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ToggleTotalDamageFinishNotify; }

#define RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8C8A0)
#define RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB8C8B0)
#define RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB8C870)

namespace RPG::GameCore
{
	class ToggleTotalDamageFinishNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean DisableAutoNotify; // 0x18
		::System::Boolean TriggerImmediately; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleTotalDamageFinishNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleTotalDamageFinishNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleTotalDamageFinishNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleTotalDamageFinishNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLETOTALDAMAGEFINISHNOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
