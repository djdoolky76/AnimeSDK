#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Tuple_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

namespace RPG::Client::Promises
{
	inline static constexpr unsigned int PromiseHelpers___c__1_3_TypeDefinitionIndex = 9897;

	template <typename T1, typename T2, typename T3>
	class PromiseHelpers___c__1_3 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client.Promises", "<>c__1`3")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Tuple_2<::System::Tuple_2<T1, T2>*, T3>*, ::System::Tuple_3<T1, T2, T3>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Tuple_2<::System::Tuple_2<T1, T2>*, T3>*, ::System::Tuple_3<T1, T2, T3>*>**)UnitySDK::FromName("RPG.Client.Promises", "<>c__1`3")->GetStaticField(0x0);
		}

	};
}
