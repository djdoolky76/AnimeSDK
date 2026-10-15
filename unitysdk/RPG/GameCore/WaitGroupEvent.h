#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitGroupEvent; }

#define RPG_GAMECORE_WAITGROUPEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC99C50)
#define RPG_GAMECORE_WAITGROUPEVENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC99C60)
#define RPG_GAMECORE_WAITGROUPEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC99C10)

namespace RPG::GameCore
{
	class WaitGroupEvent : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::RPG::GameCore::DynamicString* EventName; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEvent; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGroupEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitGroupEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitGroupEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITGROUPEVENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
