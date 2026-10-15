#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class IAsyncWriter_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class Create_1 : public ::System::Object
	{
	public:
		::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* create; // 0x0
	};
}
