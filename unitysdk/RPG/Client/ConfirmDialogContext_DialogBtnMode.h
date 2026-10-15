#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ConfirmDialogContext_DialogBtnMode : ::System::Int32
	{
		eOk = 0,
		eOkCancel = 1,
		eCancel = 2,
		eCustomOkCancel = 3,
		None = 4,
	};
}
