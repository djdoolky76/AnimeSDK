#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_Mode_TypeDefinitionIndex = 54522;

	enum class UITableViewCell_Mode : ::System::Int32
	{
		CalcEvery = 2,
		CalcOnce = 1,
		NoCalc = 3,
		Fixed = 0,
	};
}
