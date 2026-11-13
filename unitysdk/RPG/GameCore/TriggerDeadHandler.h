#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerDeadHandler; }

#define RPG_GAMECORE_TRIGGERDEADHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E321EB0)
#define RPG_GAMECORE_TRIGGERDEADHANDLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E321EC0)
#define RPG_GAMECORE_TRIGGERDEADHANDLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E321DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerDeadHandler_TypeDefinitionIndex = 22827;

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
