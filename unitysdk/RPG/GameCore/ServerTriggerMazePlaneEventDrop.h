#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServerTriggerMazePlaneEventDrop; }

#define RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA4480)
#define RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECA4490)
#define RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECA4440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServerTriggerMazePlaneEventDrop_TypeDefinitionIndex = 22720;

	class ServerTriggerMazePlaneEventDrop : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerTriggerMazePlaneEventDrop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerTriggerMazePlaneEventDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServerTriggerMazePlaneEventDrop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServerTriggerMazePlaneEventDrop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVERTRIGGERMAZEPLANEEVENTDROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
