#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddTimelineEntityEventListener; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TimelineEntityStateChangeCallback; }

#define RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38CA50)
#define RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38CA60)
#define RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38CA20)

namespace RPG::GameCore
{
	class AddTimelineEntityEventListener : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::TimelineEntityStateChangeCallback*>* StateEnterListener; // 0x20
		::Il2CppArray<::RPG::GameCore::TimelineEntityStateChangeCallback*>* StateLeaveListener; // 0x28
		::Il2CppArray<::RPG::GameCore::TimelineEntityStateChangeCallback*>* StateListener; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStartControlEntity; // 0x38
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnEndControlEntity; // 0x40
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnPause; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnResumePause; // 0x50
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnAddPause; // 0x58
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnRemovePause; // 0x60
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeSelected; // 0x68
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnBeUnselected; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTimelineEntityEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTimelineEntityEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddTimelineEntityEventListener* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddTimelineEntityEventListener*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDTIMELINEENTITYEVENTLISTENER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
