#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int Extensions___c__13_2_TypeDefinitionIndex = 7176;

	template <typename T1, typename T2>
	class Extensions___c__13_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Extensions___c__13_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<T1, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>** StaticGet___9__13_0()
		{
			return (::System::Func_2<T1, ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken*>*>**)Il2CppClass::FromTypeDefinitionIndex(Extensions___c__13_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
