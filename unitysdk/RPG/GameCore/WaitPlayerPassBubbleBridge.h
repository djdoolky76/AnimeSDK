#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitPlayerPassBubbleBridge; }

#define RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC9DD70)
#define RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC9DD80)
#define RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC9DD30)

namespace RPG::GameCore
{
	class WaitPlayerPassBubbleBridge : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPlayerPassBubbleBridge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPlayerPassBubbleBridge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitPlayerPassBubbleBridge* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitPlayerPassBubbleBridge*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPLAYERPASSBUBBLEBRIDGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
