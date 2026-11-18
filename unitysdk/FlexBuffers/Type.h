#pragma once
#include "unitysdk/unitysdk.h"

namespace FlexBuffers
{
	inline static constexpr unsigned int Type_TypeDefinitionIndex = 6771;

	enum class Type : ::System::Byte
	{
		Null = 0,
		Int = 1,
		Uint = 2,
		Float = 3,
		Key = 4,
		String = 5,
		IndirectInt = 6,
		IndirectUInt = 7,
		IndirectFloat = 8,
		Map = 9,
		Vector = 10,
		VectorInt = 11,
		VectorUInt = 12,
		VectorFloat = 13,
		VectorKey = 14,
		VectorString = 15,
		VectorInt2 = 16,
		VectorUInt2 = 17,
		VectorFloat2 = 18,
		VectorInt3 = 19,
		VectorUInt3 = 20,
		VectorFloat3 = 21,
		VectorInt4 = 22,
		VectorUInt4 = 23,
		VectorFloat4 = 24,
		Blob = 25,
		Bool = 26,
		VectorBool = 36,
	};
}
