#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraHackOperateType_TypeDefinitionIndex = 62628;

	enum class CameraHackOperateType : ::System::Int32
	{
		Scan = 0,
		CameraView = 1,
		Hack = 99,
		Eavesdrop = 2,
	};
}
