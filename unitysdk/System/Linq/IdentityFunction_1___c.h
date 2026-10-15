#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace System::Linq
{
	inline static constexpr unsigned int IdentityFunction_1___c_TypeDefinitionIndex = 3166;

	template <typename T>
	class IdentityFunction_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<T, T>** StaticGet___9__1_0()
		{
			return (::System::Func_2<T, T>**)UnitySDK::FromName("System.Linq", "<>c")->GetStaticField(0x0);
		}

	};
}
