#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class AsyncLazy_1 : public ::System::Object
	{
	public:
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* taskFactory; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSource* completionSource; // 0x0
		::System::Object* awaiter; // 0x0
		::System::Object* syncLock; // 0x0
		::System::Boolean initialized; // 0x0
		static ::System::Action** StaticGet_continuation()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AsyncLazy`1")->GetStaticField(0x0);
		}

	};
}
