#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitEntityEventV2; }

#define RPG_GAMECORE_WAITENTITYEVENTV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC97090)
#define RPG_GAMECORE_WAITENTITYEVENTV2_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC970A0)
#define RPG_GAMECORE_WAITENTITYEVENTV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC97050)

namespace RPG::GameCore
{
	class WaitEntityEventV2 : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENTV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEntityEventV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEntityEventV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENTV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEntityEventV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEntityEventV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENTV2_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
