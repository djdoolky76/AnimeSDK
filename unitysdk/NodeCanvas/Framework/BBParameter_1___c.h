#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int BBParameter_1___c_TypeDefinitionIndex = 29376;

	template <typename T>
	class BBParameter_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(BBParameter_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<T>** StaticGet___9__21_1()
		{
			return (::System::Action_1<T>**)Il2CppClass::FromTypeDefinitionIndex(BBParameter_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
