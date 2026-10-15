#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int UniTaskAsyncEnumerable___c__310_2_TypeDefinitionIndex = 45198;

	template <typename T1, typename T2>
	class UniTaskAsyncEnumerable___c__310_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__310`2")->GetStaticField(0x0);
		}

		static ::System::Func_3<T1, T2, T2>** StaticGet___9__310_0()
		{
			return (::System::Func_3<T1, T2, T2>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "<>c__310`2")->GetStaticField(0x0);
		}

	};
}
