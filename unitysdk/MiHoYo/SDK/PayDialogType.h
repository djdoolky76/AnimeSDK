#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class PayDialogType : ::System::Int32
	{
		Default = 0,
		Native = 1,
		Embedded = 2,
		AdyenDirect = 3,
	};
}
