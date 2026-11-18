#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int ParserToken_TypeDefinitionIndex = 7862;

	enum class ParserToken : ::System::Int32
	{
		ObjectPrime = 65545,
		Null = 65540,
		Number = 65537,
		Pair = 65546,
		ArrayPrime = 65549,
		Array = 65548,
		Value = 65550,
		Epsilon = 65555,
		Object = 65544,
		End = 65554,
		Char = 65542,
		Comment = 65553,
		False = 65539,
		PairRest = 65547,
		ValueRest = 65551,
		Text = 65543,
		CharSeq = 65541,
		String = 65552,
		True = 65538,
		None = 65536,
	};
}
