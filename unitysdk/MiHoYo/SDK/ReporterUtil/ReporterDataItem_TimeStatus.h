#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::ReporterUtil
{
	enum class ReporterDataItem_TimeStatus : ::System::Int32
	{
		None = 0,
		BeginTimeSetted = 1,
		EndTimeSetted = 2,
	};
}
