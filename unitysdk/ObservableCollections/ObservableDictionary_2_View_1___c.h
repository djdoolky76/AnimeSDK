#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableDictionary_2_View_1___c_TypeDefinitionIndex = 28089;

	template <typename T1, typename T2>
	class ObservableDictionary_2_View_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ObservableDictionary_2_View_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, T1>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, T1>**)Il2CppClass::FromTypeDefinitionIndex(ObservableDictionary_2_View_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
