#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Threading { class ParameterizedThreadStart; }

namespace MiHoYo::SDK::MTR
{
	class MiHoYoMTRInterface___O : public ::System::Object
	{
	public:
		static ::System::Threading::ParameterizedThreadStart** StaticGet__1___StopUrlUsageProc()
		{
			return (::System::Threading::ParameterizedThreadStart**)UnitySDK::FromName("MiHoYo.SDK.MTR", "<>O")->GetStaticField(0x25480);
		}

		static ::System::Threading::ParameterizedThreadStart** StaticGet__0___StopMTRProc()
		{
			return (::System::Threading::ParameterizedThreadStart**)UnitySDK::FromName("MiHoYo.SDK.MTR", "<>O")->GetStaticField(0x25488);
		}

	};
}
