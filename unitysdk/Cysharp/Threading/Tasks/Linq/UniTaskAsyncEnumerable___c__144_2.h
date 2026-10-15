#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__144_2_TypeDefinitionIndex = 45193;

	template <typename T1, typename T2>
	class UniTaskAsyncEnumerable___c__144_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__144`2")->GetStaticField(0x0);
		}

		static ::System::Func_3<T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<T1>>** StaticGet___9__144_0()
		{
			return (::System::Func_3<T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<T1>>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__144`2")->GetStaticField(0x0);
		}

	};
}
