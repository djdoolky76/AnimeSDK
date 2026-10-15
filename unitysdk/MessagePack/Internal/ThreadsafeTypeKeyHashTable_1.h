#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace MessagePack::Internal
{
	template <typename T>
	class ThreadsafeTypeKeyHashTable_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* buckets; // 0x0
		::System::Int32 size; // 0x0
		::System::Object* writerLock; // 0x0
		::System::Single loadFactor; // 0x0
	};
}
