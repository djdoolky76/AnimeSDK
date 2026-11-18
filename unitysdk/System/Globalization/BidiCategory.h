#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int BidiCategory_TypeDefinitionIndex = 700;

	enum class BidiCategory : ::System::Int32
	{
		LeftToRight = 0,
		LeftToRightEmbedding = 1,
		LeftToRightOverride = 2,
		RightToLeft = 3,
		RightToLeftArabic = 4,
		RightToLeftEmbedding = 5,
		RightToLeftOverride = 6,
		PopDirectionalFormat = 7,
		EuropeanNumber = 8,
		EuropeanNumberSeparator = 9,
		EuropeanNumberTerminator = 10,
		ArabicNumber = 11,
		CommonNumberSeparator = 12,
		NonSpacingMark = 13,
		BoundaryNeutral = 14,
		ParagraphSeparator = 15,
		SegmentSeparator = 16,
		Whitespace = 17,
		OtherNeutrals = 18,
		LeftToRightIsolate = 19,
		RightToLeftIsolate = 20,
		FirstStrongIsolate = 21,
		PopDirectionIsolate = 22,
	};
}
