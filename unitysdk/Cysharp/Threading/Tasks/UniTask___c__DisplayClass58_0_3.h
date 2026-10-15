#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

namespace Cysharp::Threading::Tasks
{
	template <typename T1, typename T2, typename T3>
	class UniTask___c__DisplayClass58_0_3 : public ::System::Object
	{
	public:
		::System::Func_5<T1, T2, T3, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTaskVoid>* asyncAction; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
	};
}
