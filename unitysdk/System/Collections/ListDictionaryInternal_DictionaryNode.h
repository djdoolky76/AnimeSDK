#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections { class ListDictionaryInternal_DictionaryNode; }

#define SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_DICTIONARYNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C9C40)

namespace System::Collections
{
	class ListDictionaryInternal_DictionaryNode : public ::System::Object
	{
	public:
		::System::Object* value; // 0x10
		::System::Object* key; // 0x18
		::System::Collections::ListDictionaryInternal_DictionaryNode* next; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_LISTDICTIONARYINTERNAL_DICTIONARYNODE_CTOR_OFFSET))(this);
		}

	};
}
