#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int Extensions___c__1_1_TypeDefinitionIndex = 7171;

	template <typename T>
	class Extensions___c__1_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Extensions___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<T, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>**)Il2CppClass::FromTypeDefinitionIndex(Extensions___c__1_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
