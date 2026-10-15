#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class PSCommerceDialogCheckoutResult : ::System::Int32
	{
		ErrorOccured = -1,
		Closed = 0,
		UserCanceled = 1,
		Purchased = 2,
	};
}
