#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Foundation
{
	inline static constexpr unsigned int IEnumerableX___c__0_1_TypeDefinitionIndex = 8109;

	template <typename T>
	class IEnumerableX___c__0_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(IEnumerableX___c__0_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, ::System::String*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<T, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IEnumerableX___c__0_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
