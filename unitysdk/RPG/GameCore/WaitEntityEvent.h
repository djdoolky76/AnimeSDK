#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitEntityEvent; }

#define RPG_GAMECORE_WAITENTITYEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC69580)
#define RPG_GAMECORE_WAITENTITYEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC69590)
#define RPG_GAMECORE_WAITENTITYEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC69540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitEntityEvent_TypeDefinitionIndex = 20720;

	class WaitEntityEvent : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28
		::RPG::GameCore::DynamicFloat* InstanceID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEntityEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEntityEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitEntityEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitEntityEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITENTITYEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
