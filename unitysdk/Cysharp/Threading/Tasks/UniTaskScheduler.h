#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Threading { class SendOrPostCallback; }

#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_ADD_UNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F155BD0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F155E60)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F155D90)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F148DD0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_REMOVE_UNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F155CB0)

namespace Cysharp::Threading::Tasks
{
	class UniTaskScheduler : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_UnobservedTaskException()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0x48EB0);
		}

		static ::System::Threading::SendOrPostCallback** StaticGet_handleExceptionInvoke()
		{
			return (::System::Threading::SendOrPostCallback**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0x48EB8);
		}

		static ::UnityEngine::LogType* StaticGet_UnobservedExceptionWriteLogType()
		{
			return (::UnityEngine::LogType*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0x11290);
		}

		static ::System::Boolean* StaticGet_DispatchUnityMainThread()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0x11294);
		}

		static ::System::Boolean* StaticGet_PropagateOperationCanceledException()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0x11295);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_CCTOR_OFFSET))();
		}

		static ::System::Void add_UnobservedTaskException(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_ADD_UNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void remove_UnobservedTaskException(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_REMOVE_UNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void InvokeUnobservedTaskException(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void PublishUnobservedTaskException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::System::Exception*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
		}

	};
}
