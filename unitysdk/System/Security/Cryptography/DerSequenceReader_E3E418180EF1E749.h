#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DerSequenceReader_E3E418180EF1E749_TypeDefinitionIndex = 15197;

	enum class DerSequenceReader_E3E418180EF1E749 : ::System::Byte
	{
		Boolean = 1,
		Integer = 2,
		BitString = 3,
		OctetString = 4,
		Null = 5,
		ObjectIdentifier = 6,
		UTF8String = 12,
		Sequence = 16,
		Set = 17,
		PrintableString = 19,
		T61String = 20,
		IA5String = 22,
		UTCTime = 23,
		GeneralizedTime = 24,
		BMPString = 30,
	};
}
