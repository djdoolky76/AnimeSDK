#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }

namespace MessagePack::Internal
{
	template <typename T>
	class ThreadsafeTypeKeyHashTable_1_Entry : public ::System::Object
	{
	public:
		::System::Object* Next; // 0x0
		::System::Type* _Key_k__BackingField; // 0x0
		T _Value_k__BackingField; // 0x0
		::System::Int32 _Hash_k__BackingField; // 0x0
	};
}
