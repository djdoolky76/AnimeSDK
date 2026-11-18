#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int DelegateChain_2___c_TypeDefinitionIndex = 8392;

	template <typename T1, typename T2>
	class DelegateChain_2___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DelegateChain_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T1, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<T1, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DelegateChain_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T1, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<T1, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DelegateChain_2___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
