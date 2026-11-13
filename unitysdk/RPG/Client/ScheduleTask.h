#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ScheduleData; }
namespace RPG::Client { class ScheduleTask; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_SCHEDULETASK_CANCEL_OFFSET UNITYSDK_OFFSET(0x1C0941A0)
#define RPG_CLIENT_SCHEDULETASK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C095310)
#define RPG_CLIENT_SCHEDULETASK_GET_ENABLERANDOMDELAY_OFFSET UNITYSDK_OFFSET(0x1C0951D0)
#define RPG_CLIENT_SCHEDULETASK_GET_FINISHACTION_OFFSET UNITYSDK_OFFSET(0x1C094320)
#define RPG_CLIENT_SCHEDULETASK_GET_FINISHMSTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C095220)
#define RPG_CLIENT_SCHEDULETASK_GET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C0942C0)
#define RPG_CLIENT_SCHEDULETASK_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1C094280)
#define RPG_CLIENT_SCHEDULETASK_INITRANDOMDELAY_OFFSET UNITYSDK_OFFSET(0x1C094F20)
#define RPG_CLIENT_SCHEDULETASK_ISDONE_OFFSET UNITYSDK_OFFSET(0x1C0952D0)
#define RPG_CLIENT_SCHEDULETASK_ONNEW_OFFSET UNITYSDK_OFFSET(0x1C095190)
#define RPG_CLIENT_SCHEDULETASK_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x1C095040)
#define RPG_CLIENT_SCHEDULETASK_SET_ENABLERANDOMDELAY_OFFSET UNITYSDK_OFFSET(0x1C0945E0)
#define RPG_CLIENT_SCHEDULETASK_SET_FINISHACTION_OFFSET UNITYSDK_OFFSET(0x1C094540)
#define RPG_CLIENT_SCHEDULETASK_SET_FINISHTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C0944F0)
#define RPG_CLIENT_SCHEDULETASK_SET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0x1C094590)
#define RPG_CLIENT_SCHEDULETASK_START_OFFSET UNITYSDK_OFFSET(0x1C093C40)
#define RPG_CLIENT_SCHEDULETASK__DONE_OFFSET UNITYSDK_OFFSET(0x1C095260)
#define RPG_CLIENT_SCHEDULETASK__RELEASETIMER_OFFSET UNITYSDK_OFFSET(0x1C095100)

namespace RPG::Client
{
	inline static constexpr unsigned int ScheduleTask_TypeDefinitionIndex = 69850;

	class ScheduleTask : public ::System::Object
	{
	public:
		::System::Action_1<::RPG::Client::ScheduleTask*>* OnTaskFinish; // 0x10
		::RPG::Client::ScheduleData* _ScheduleData; // 0x18
		::System::Action_1<::RPG::Client::ScheduleData*>* _FinishAction; // 0x20
		::System::UInt64 _FinishMsTimeStamp; // 0x28
		::System::Int32 _TimerID; // 0x30
		::System::UInt32 _DelayMs; // 0x34
		::System::Boolean _IsDone; // 0x38
		// static const ::System::Object _RANDOM_DELAY_MIN; // 0x0
		// static const ::System::Object _RANDOM_DELAY_MAX; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_CTOR_OFFSET))(this);
		}

		::System::Void InitRandomDelay()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_INITRANDOMDELAY_OFFSET))(this);
		}

		::System::Boolean OnRecycle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_ONRECYCLE_OFFSET))(this);
		}

		::System::Void OnNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_ONNEW_OFFSET))(this);
		}

		::System::Void set_FinishTimeStamp(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_FINISHTIMESTAMP_OFFSET))(this, a1);
		}

		::System::UInt64 get_FinishTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_FINISHTIMESTAMP_OFFSET))(this);
		}

		::System::Boolean get_EnableRandomDelay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_ENABLERANDOMDELAY_OFFSET))(this);
		}

		::System::Void set_EnableRandomDelay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_ENABLERANDOMDELAY_OFFSET))(this, a1);
		}

		::System::UInt64 get_FinishMsTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_FINISHMSTIMESTAMP_OFFSET))(this);
		}

		::System::Action_1<::RPG::Client::ScheduleData*>* get_FinishAction()
		{
			return ((::System::Action_1<::RPG::Client::ScheduleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_FINISHACTION_OFFSET))(this);
		}

		::System::Void set_FinishAction(::System::Action_1<::RPG::Client::ScheduleData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::ScheduleData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_FINISHACTION_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Void set_ScheduleData(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_SET_SCHEDULEDATA_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_START_OFFSET))(this);
		}

		::System::Void Cancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_CANCEL_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK_ISDONE_OFFSET))(this);
		}

		::System::Void _Done()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK__DONE_OFFSET))(this);
		}

		::System::Void _ReleaseTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SCHEDULETASK__RELEASETIMER_OFFSET))(this);
		}

	};
}
