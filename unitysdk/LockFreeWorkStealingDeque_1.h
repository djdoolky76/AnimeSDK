#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

template <typename T> class CircularArray_1;

inline static constexpr unsigned int LockFreeWorkStealingDeque_1_TypeDefinitionIndex = 38082;

template <typename T>
class LockFreeWorkStealingDeque_1 : public ::System::Object
{
public:
	static T* StaticGet_Empty()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(LockFreeWorkStealingDeque_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static T* StaticGet_Abort()
	{
		return (T*)Il2CppClass::FromTypeDefinitionIndex(LockFreeWorkStealingDeque_1_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::CircularArray_1<T>* activeArray; // 0x0
	::System::Int32 bottom; // 0x0
	::System::Int32 top; // 0x0
};
