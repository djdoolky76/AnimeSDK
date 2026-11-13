#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class SendOrPostCallback; }

#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_ADD_UNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E567BF0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E567E80)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_INVOKEUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E567DB0)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_PUBLISHUNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E55AE70)
#define CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_REMOVE_UNOBSERVEDTASKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1E567CD0)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskScheduler_TypeDefinitionIndex = 39374;

	class UniTaskScheduler : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet_UnobservedTaskException()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0x39A20);
		}

		static ::System::Threading::SendOrPostCallback** StaticGet_handleExceptionInvoke()
		{
			return (::System::Threading::SendOrPostCallback**)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0x39A28);
		}

		static ::System::Boolean* StaticGet_PropagateOperationCanceledException()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0xB6E0);
		}

		static ::System::Boolean* StaticGet_DispatchUnityMainThread()
		{
			return (::System::Boolean*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0xB6E1);
		}

		static ::UnityEngine::LogType* StaticGet_UnobservedExceptionWriteLogType()
		{
			return (::UnityEngine::LogType*)UnitySDK::FromName("Cysharp.Threading.Tasks", "UniTaskScheduler")->GetStaticField(0xB6E4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_CCTOR_OFFSET))();
		}

		static ::System::Void add_UnobservedTaskException(::System::Action_1<::System::Exception*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_ADD_UNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
		}

		static ::System::Void remove_UnobservedTaskException(::System::Action_1<::System::Exception*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Exception*>*))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_UNITASKSCHEDULER_REMOVE_UNOBSERVEDTASKEXCEPTION_OFFSET))(a1);
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
