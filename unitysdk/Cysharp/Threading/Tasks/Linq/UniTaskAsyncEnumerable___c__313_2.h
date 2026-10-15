#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__313_2_TypeDefinitionIndex = 45199;

	template <typename T1, typename T2>
	class UniTaskAsyncEnumerable___c__313_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__313`2")->GetStaticField(0x0);
		}

		static ::System::Func_3<T1, T2, ::Cysharp::Threading::Tasks::UniTask_1<T2>>** StaticGet___9__313_0()
		{
			return (::System::Func_3<T1, T2, ::Cysharp::Threading::Tasks::UniTask_1<T2>>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__313`2")->GetStaticField(0x0);
		}

	};
}
