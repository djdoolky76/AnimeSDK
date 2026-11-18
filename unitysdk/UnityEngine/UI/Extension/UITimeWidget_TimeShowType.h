#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITimeWidget_TimeShowType_TypeDefinitionIndex = 85888;

	enum class UITimeWidget_TimeShowType : ::System::Int32
	{
		DefaultType = 0,
		ShowMinuteSecond = 6,
		ActivityType = 1,
		ShowHourMinuteSecond = 5,
		ShowHourMinute = 3,
		ShowOne = 2,
		OnlyDay = 4,
	};
}
