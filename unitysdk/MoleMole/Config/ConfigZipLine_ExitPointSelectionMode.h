#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_ExitPointSelectionMode_TypeDefinitionIndex = 54259;

	enum class ConfigZipLine_ExitPointSelectionMode : ::System::Int32
	{
		SplineExit = 2,
		NavMesh = 1,
		None = 0,
	};
}
