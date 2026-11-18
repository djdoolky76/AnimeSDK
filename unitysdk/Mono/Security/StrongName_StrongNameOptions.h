#pragma once
#include "unitysdk/unitysdk.h"

namespace Mono::Security
{
	inline static constexpr unsigned int StrongName_StrongNameOptions_TypeDefinitionIndex = 2284;

	enum class StrongName_StrongNameOptions : ::System::Int32
	{
		Metadata = 0,
		Signature = 1,
	};
}
