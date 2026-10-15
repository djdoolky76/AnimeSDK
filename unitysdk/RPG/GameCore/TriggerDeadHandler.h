#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerDeadHandler; }

#define RPG_GAMECORE_TRIGGERDEADHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC18630)
#define RPG_GAMECORE_TRIGGERDEADHANDLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC18640)
#define RPG_GAMECORE_TRIGGERDEADHANDLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC18570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerDeadHandler_TypeDefinitionIndex = 22418;

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
