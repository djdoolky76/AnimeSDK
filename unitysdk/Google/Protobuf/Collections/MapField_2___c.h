#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2___c_TypeDefinitionIndex = 5584;

	template <typename T1, typename T2>
	class MapField_2___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Collections", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, T1>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, T1>**)UnitySDK::FromName("Google.Protobuf.Collections", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, T2>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, T2>**)UnitySDK::FromName("Google.Protobuf.Collections", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, ::System::Collections::DictionaryEntry>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, ::System::Collections::DictionaryEntry>**)UnitySDK::FromName("Google.Protobuf.Collections", "<>c")->GetStaticField(0x0);
		}

	};
}
