#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__317_2_TypeDefinitionIndex = 45201;

	template <typename T1, typename T2>
	class UniTaskAsyncEnumerable___c__317_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__317`2")->GetStaticField(0x0);
		}

		static ::System::Func_4<T1, T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__317_0()
		{
			return (::System::Func_4<T1, T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__317`2")->GetStaticField(0x0);
		}

	};
}
