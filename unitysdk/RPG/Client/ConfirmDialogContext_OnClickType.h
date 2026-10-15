#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ConfirmDialogContext_OnClickType : ::System::Int32
	{
		Ok = 0,
		Cancel = 1,
		Close = 2,
		Bg = 3,
		None = 4,
	};
}
