#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::HoYoUI
{
	inline static constexpr unsigned int ImageStretchMode_TypeDefinitionIndex = 35748;

	enum class ImageStretchMode : ::System::Int32
	{
		Both = 0,
		HorizontalOnly = 1,
	};
}
