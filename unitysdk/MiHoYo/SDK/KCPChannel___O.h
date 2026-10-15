#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class KcpOutput; }

namespace MiHoYo::SDK
{
	class KCPChannel___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::KcpOutput** StaticGet__0___KcpOutput()
		{
			return (::MiHoYo::SDK::KcpOutput**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x24DE0);
		}

	};
}
