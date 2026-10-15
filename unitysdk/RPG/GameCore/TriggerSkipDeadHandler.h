#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerSkipDeadHandler; }

#define RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC5DD50)
#define RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC5DD60)
#define RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC5DC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerSkipDeadHandler_TypeDefinitionIndex = 22500;

	class TriggerSkipDeadHandler : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSkipDeadHandler* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSkipDeadHandler*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerSkipDeadHandler* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerSkipDeadHandler*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERSKIPDEADHANDLER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
