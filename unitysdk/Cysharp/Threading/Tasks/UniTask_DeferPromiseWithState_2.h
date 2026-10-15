#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks
{
	template <typename T1, typename T2>
	class UniTask_DeferPromiseWithState_2 : public ::System::Object
	{
	public:
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask>* factory; // 0x0
		T2 argument; // 0x0
		::Cysharp::Threading::Tasks::UniTask task; // 0x0
		::System::Object* awaiter; // 0x0
	};
}
