#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int StackGuard___c__3_2_TypeDefinitionIndex = 3274;

	template <typename T1, typename T2>
	class StackGuard___c__3_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "<>c__3`2")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Object*, ::System::Object*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Object*>**)UnitySDK::FromName("System.Linq.Expressions", "<>c__3`2")->GetStaticField(0x0);
		}

	};
}
