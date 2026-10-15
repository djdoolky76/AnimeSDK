#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskStatus.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class IUniTaskSource; }
namespace System::Runtime::ExceptionServices { class ExceptionDispatchInfo; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class UniTask_1_MemoizeSource : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskSource* source; // 0x0
		T result; // 0x0
		::System::Runtime::ExceptionServices::ExceptionDispatchInfo* exception; // 0x0
		::Cysharp::Threading::Tasks::UniTaskStatus status; // 0x0
	};
}
