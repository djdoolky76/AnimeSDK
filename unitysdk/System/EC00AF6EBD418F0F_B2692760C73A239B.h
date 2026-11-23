#pragma once
#include "unitysdk/unitysdk.h"

namespace System
{
	inline static constexpr unsigned int EC00AF6EBD418F0F_B2692760C73A239B_TypeDefinitionIndex = 14851;

	enum class EC00AF6EBD418F0F_B2692760C73A239B : ::System::Int32
	{
		None = 0,
		EscapedCanonical = 1,
		DisplayCanonical = 2,
		DotSlashAttn = 4,
		DotSlashEscaped = 128,
		BackslashInPath = 16,
		ReservedFound = 32,
		NotIriCanonical = 64,
		FoundNonAscii = 8,
	};
}
