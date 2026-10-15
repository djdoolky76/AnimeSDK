#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashPropEvent; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A35F0)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A3600)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A35C0)

namespace RPG::GameCore
{
	class RogueAdvRoomCandyCrashPropEvent : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* CurrentState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdvRoomCandyCrashPropEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
