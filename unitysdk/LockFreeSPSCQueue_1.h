#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

inline static constexpr unsigned int LockFreeSPSCQueue_1_TypeDefinitionIndex = 38081;

template <typename T>
class LockFreeSPSCQueue_1 : public ::System::Object
{
public:
	::System::Int32 capacity; // 0x0
	::Il2CppArray<T>* circularBuffer; // 0x0
	::System::Int32 headIndex; // 0x0
	::System::Int32 tailIndex; // 0x0
};
