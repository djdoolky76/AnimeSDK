#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

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

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, T1>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, T1>**)UnitySDK::FromName("Google.Protobuf.Collections", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, T2>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, T2>**)UnitySDK::FromName("Google.Protobuf.Collections", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::DictionaryEntry>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::Collections::DictionaryEntry>**)UnitySDK::FromName("Google.Protobuf.Collections", "<>c")->GetStaticField(0x0);
		}

	};
}
