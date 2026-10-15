#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	enum class HandheldEmailBindingDialog_HighlightableObject : ::System::Int32
	{
		MailInputField = 0,
		CaptchaInputField = 1,
		AgreementCheckbox = 2,
		BindButton = 3,
	};
}
