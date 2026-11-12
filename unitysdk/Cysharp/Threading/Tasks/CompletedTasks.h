#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/AsyncUnit.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"

#define CYSHARP_THREADING_TASKS_COMPLETEDTASKS_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C8060)

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int CompletedTasks_TypeDefinitionIndex = 39291;

	class CompletedTasks : public ::System::Object
	{
	public:
		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>* StaticGet_Zero()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x10D0);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>* StaticGet_One()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x10E0);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit>* StaticGet_AsyncUnit()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x10F0);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>* StaticGet_True()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x1100);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>* StaticGet_False()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x1110);
		}

		static ::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>* StaticGet_MinusOne()
		{
			return (::Cysharp::Threading::Tasks::UniTask_1<::System::Int32>*)UnitySDK::FromName("Cysharp.Threading.Tasks", "CompletedTasks")->GetStaticField(0x1120);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_COMPLETEDTASKS_CCTOR_OFFSET))();
		}

	};
}
