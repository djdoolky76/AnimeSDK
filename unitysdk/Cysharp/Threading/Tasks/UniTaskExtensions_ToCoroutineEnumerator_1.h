#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class UniTaskExtensions_ToCoroutineEnumerator_1 : public ::System::Object
	{
	public:
		::System::Boolean completed; // 0x0
		::System::Action* resultHandler; // 0x0
		::System::Action* exceptionHandler; // 0x0
		::System::Boolean isStarted; // 0x0
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
		::System::Object* current; // 0x0
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x0
	};
}
