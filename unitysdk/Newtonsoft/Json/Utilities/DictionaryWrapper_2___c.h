#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Newtonsoft::Json::Utilities
{
	inline static constexpr unsigned int DictionaryWrapper_2___c_TypeDefinitionIndex = 9667;

	template <typename T1, typename T2>
	class DictionaryWrapper_2___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Newtonsoft.Json.Utilities", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<T1, T2>>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::System::Collections::DictionaryEntry, ::System::Collections::Generic::KeyValuePair_2<T1, T2>>**)UnitySDK::FromName("Newtonsoft.Json.Utilities", "<>c")->GetStaticField(0x0);
		}

	};
}
