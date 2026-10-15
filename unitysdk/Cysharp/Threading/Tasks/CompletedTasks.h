#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_COMPLETEDTASKS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F117020)

namespace Cysharp::Threading::Tasks
{
	class CompletedTasks : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_MinusOne()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x1130);
		}

		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_Zero()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x1140);
		}

		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_False()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x1150);
		}

		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_One()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x1160);
		}

		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_True()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x1170);
		}

		static ::Cysharp::Threading::Tasks::UniTask* StaticGet_AsyncUnit()
		{
			return (::Cysharp::Threading::Tasks::UniTask*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x1180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPLETEDTASKS_CCTOR_OFFSET))();
		}

	};
}
