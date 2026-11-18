#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MaterialPropertyModifierEnumDefine
{
	inline static constexpr unsigned int LightSource_TypeDefinitionIndex = 79105;

	enum class LightSource : ::System::Byte
	{
		MainLight = 0,
		Point = 2,
		CameraView = 1,
	};
}
