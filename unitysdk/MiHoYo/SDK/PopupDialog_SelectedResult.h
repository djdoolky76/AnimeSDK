#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class PopupDialog_SelectedResult : ::System::Int32
	{
		TopSelected = 0,
		BottomSelected = 1,
		Closed = 2,
	};
}
