#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class UniTask_DeferPromise_1 : public ::System::Object
	{
	public:
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* factory; // 0x0
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
		::System::Object* awaiter; // 0x0
	};
}
