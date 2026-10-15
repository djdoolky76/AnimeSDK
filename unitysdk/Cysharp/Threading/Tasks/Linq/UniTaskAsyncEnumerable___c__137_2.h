#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__137_2_TypeDefinitionIndex = 45190;

	template <typename T1, typename T2>
	class UniTaskAsyncEnumerable___c__137_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__137`2")->GetStaticField(0x0);
		}

		static ::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask_1<T1>>** StaticGet___9__137_0()
		{
			return (::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask_1<T1>>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__137`2")->GetStaticField(0x0);
		}

	};
}
