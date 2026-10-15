#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__150_3_TypeDefinitionIndex = 45196;

	template <typename T1, typename T2, typename T3>
	class UniTaskAsyncEnumerable___c__150_3 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__150`3")->GetStaticField(0x0);
		}

		static ::System::Func_3<T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<T1>>** StaticGet___9__150_0()
		{
			return (::System::Func_3<T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<T1>>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__150`3")->GetStaticField(0x0);
		}

	};
}
