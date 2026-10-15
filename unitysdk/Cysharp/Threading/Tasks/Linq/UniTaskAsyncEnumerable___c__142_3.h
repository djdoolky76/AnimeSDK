#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__142_3_TypeDefinitionIndex = 45192;

	template <typename T1, typename T2, typename T3>
	class UniTaskAsyncEnumerable___c__142_3 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__142`3")->GetStaticField(0x0);
		}

		static ::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask>** StaticGet___9__142_0()
		{
			return (::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__142`3")->GetStaticField(0x0);
		}

	};
}
