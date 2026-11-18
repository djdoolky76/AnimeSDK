#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

namespace MessagePack::Internal
{
	inline static constexpr unsigned int ThreadsafeTypeKeyHashTable_1_Entry_TypeDefinitionIndex = 30866;

	template <typename T>
	class ThreadsafeTypeKeyHashTable_1_Entry : public ::System::Object
	{
	public:
		::System::Type* Key; // 0x0
		T Value; // 0x0
		::System::Int32 Hash; // 0x0
		::System::Object* Next; // 0x0
	};
}
