#pragma once
#include "unitysdk/unitysdk.h"

namespace ICSharpCode::SharpZipLib::Zip
{
	inline static constexpr unsigned int FileUpdateMode_TypeDefinitionIndex = 6876;

	enum class FileUpdateMode : ::System::Int32
	{
		Safe = 0,
		Direct = 1,
	};
}
