#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int ArrayPropertyType_TypeDefinitionIndex = 27010;

enum class ArrayPropertyType : ::System::Int32
{
	Float = 0,
	HDRColor = 3,
	Color = 2,
	Invalid = -1,
	Vector = 1,
};
