#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class MiHoYoSDKBiliBiliInterface_WNDENUMPROC; }

namespace MiHoYo::SDK
{
	class MiHoYoSDKBiliBiliInterface___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKBiliBiliInterface_WNDENUMPROC** StaticGet__0___WindowProccess()
		{
			return (::MiHoYo::SDK::MiHoYoSDKBiliBiliInterface_WNDENUMPROC**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x259E0);
		}

	};
}
