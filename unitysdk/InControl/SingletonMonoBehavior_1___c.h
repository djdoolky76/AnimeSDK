#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

namespace InControl
{
	template <typename T>
	class SingletonMonoBehavior_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("InControl", "<>c")->GetStaticField(0x0);
		}

		static ::System::Comparison_1<T>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<T>**)UnitySDK::FromName("InControl", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<T, ::System::Boolean>** StaticGet___9__14_0()
		{
			return (::System::Func_2<T, ::System::Boolean>**)UnitySDK::FromName("InControl", "<>c")->GetStaticField(0x0);
		}

	};
}
