#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerDeadHandler; }

#define RPG_GAMECORE_TRIGGERDEADHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC45EE0)
#define RPG_GAMECORE_TRIGGERDEADHANDLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC45EF0)
#define RPG_GAMECORE_TRIGGERDEADHANDLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC45E20)

namespace RPG::GameCore
{
	class TriggerDeadHandler : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDEADHANDLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDeadHandler* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDeadHandler*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDEADHANDLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerDeadHandler* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerDeadHandler*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERDEADHANDLER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
