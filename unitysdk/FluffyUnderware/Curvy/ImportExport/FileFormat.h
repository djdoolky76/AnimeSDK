#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::ImportExport
{
	inline static constexpr unsigned int FileFormat_TypeDefinitionIndex = 37709;

	enum class FileFormat : ::System::Int32
	{
		SVG = 1,
		JSON = 0,
	};
}
