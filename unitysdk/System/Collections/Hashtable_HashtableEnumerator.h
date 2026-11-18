#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/DictionaryEntry.h"

namespace System::Collections { class Hashtable; }

#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_CLONE_OFFSET UNITYSDK_OFFSET(0x1DB49000)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DB492A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_ENTRY_OFFSET UNITYSDK_OFFSET(0x1DB49220)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1DB490A0)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DB49340)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1DB49110)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1DB493B0)
#define SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB48FC0)

namespace System::Collections
{
	inline static constexpr unsigned int Hashtable_HashtableEnumerator_TypeDefinitionIndex = 1462;

	class Hashtable_HashtableEnumerator : public ::System::Object
	{
	public:
		::System::Object* currentKey; // 0x10
		::System::Object* currentValue; // 0x18
		::System::Collections::Hashtable* hashtable; // 0x20
		::System::Int32 getObjectRetType; // 0x28
		::System::Boolean current; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Int32 bucket; // 0x30
		::System::Int32 version; // 0x34

		::System::Void _ctor(::System::Collections::Hashtable* hashtable, ::System::Int32 getObjRetType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Hashtable*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR__CTOR_OFFSET))(this, hashtable, getObjRetType);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_CLONE_OFFSET))(this);
		}

		::System::Object* get_Key()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_KEY_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Collections::DictionaryEntry get_Entry()
		{
			return ((::System::Collections::DictionaryEntry(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_ENTRY_OFFSET))(this);
		}

		::System::Object* get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* get_Value()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_GET_VALUE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_HASHTABLE_HASHTABLEENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
