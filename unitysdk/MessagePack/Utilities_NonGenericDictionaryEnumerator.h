#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"
namespace System { class Object; }
namespace System::Collections { class IDictionary; }
namespace System::Collections { class IDictionaryEnumerator; }

#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0x3F3B930)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB480)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F3B940)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3F3B970)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x3F3B980)
#define MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x3F3B960)

namespace MessagePack
{
	inline static constexpr unsigned int Utilities_NonGenericDictionaryEnumerator_TypeDefinitionIndex = 7260;

	struct alignas(8) Utilities_NonGenericDictionaryEnumerator
	{
		::System::Collections::IDictionaryEnumerator* enumerator; // 0x10
		::System::Void _ctor(::System::Collections::IDictionary* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::IDictionary*))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::DictionaryEntry get_Current()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UTILITIES_NONGENERICDICTIONARYENUMERATOR_RESET_OFFSET))(this);
		}

	};
}
