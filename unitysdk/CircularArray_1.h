#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

inline static constexpr unsigned int CircularArray_1_TypeDefinitionIndex = 38080;

template <typename T>
class CircularArray_1 : public ::System::Object
{
public:
	::System::Int32 size; // 0x0
	::Il2CppArray<T>* segment; // 0x0
	::System::UInt32 mask; // 0x0
};
