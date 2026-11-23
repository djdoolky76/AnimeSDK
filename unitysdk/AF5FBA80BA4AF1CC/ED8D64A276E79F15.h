#pragma once
#include "unitysdk/unitysdk.h"

namespace AF5FBA80BA4AF1CC
{
	inline static constexpr unsigned int ED8D64A276E79F15_TypeDefinitionIndex = 15186;

	enum class ED8D64A276E79F15 : ::System::Int32
	{
		None = 0,
		IsDownload = 1,
		IsUpload = 2,
		TakesParameter = 4,
		MayTakeParameter = 8,
		DoesNotTakeParameter = 16,
		ParameterIsDirectory = 32,
		ShouldParseForResponseUri = 64,
		HasHttpCommand = 128,
		MustChangeWorkingDirectoryToPath = 256,
	};
}
