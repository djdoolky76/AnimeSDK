#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }

namespace MessagePack::Formatters
{
	template <typename T>
	class EnumAsStringFormatter_1 : public ::System::Object
	{
	public:
		::System::Boolean ignoreCase; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, T>* nameValueMapping; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<T, ::System::String*>* valueNameMapping; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* clrToSerializationName; // 0x0
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::String*, ::System::String*>* serializationToClrName; // 0x0
		::System::Boolean isFlags; // 0x0
	};
}
