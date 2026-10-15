#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T1, typename T2>
	class UniTaskAsyncEnumerable___c__136_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__136`2")->GetStaticField(0x0);
		}

		static ::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__136_0()
		{
			return (::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__136`2")->GetStaticField(0x0);
		}

	};
}
