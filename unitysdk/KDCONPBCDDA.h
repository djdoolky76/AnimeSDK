#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int KDCONPBCDDA_TypeDefinitionIndex = 38819;

enum class KDCONPBCDDA : ::System::Byte
{
	String = 8,
	Double = 5,
	Float = 4,
	Bool = 1,
	Vector2 = 6,
	ValueHolder = 10,
	Object = 9,
	Nullable = 0,
	Int32 = 2,
	Vector3 = 7,
	Int64 = 3,
};
