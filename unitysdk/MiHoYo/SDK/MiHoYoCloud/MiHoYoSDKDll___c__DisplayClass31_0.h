#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class InvokeResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS31_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE9DEF0)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS31_0__ONGETINVOKERESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x1BEA06A0)

namespace MiHoYo::SDK::MiHoYoCloud
{
	class MiHoYoSDKDll___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::MiHoYo::SDK::InvokeResponseModel* resp; // 0x18
		::System::Int32 indexResp; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS31_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnGetInvokeResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS31_0__ONGETINVOKERESPONSE_B__0_OFFSET))(this);
		}

	};
}
