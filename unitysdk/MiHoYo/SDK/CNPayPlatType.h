#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	enum class CNPayPlatType : ::System::Int32
	{
		none = 0,
		wechatpay = 1,
		alipay = 2,
		pcredit = 3,
		unionpay = 4,
	};
}
