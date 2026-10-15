#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__471_2_TypeDefinitionIndex = 45203;

	template <typename T1, typename T2>
	class UniTaskAsyncEnumerable___c__471_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__471`2")->GetStaticField(0x0);
		}

		static ::System::Func_3<T1, T2, ::System::ValueTuple>** StaticGet___9__471_0()
		{
			return (::System::Func_3<T1, T2, ::System::ValueTuple>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__471`2")->GetStaticField(0x0);
		}

	};
}
