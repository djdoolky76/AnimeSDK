#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFC8540)
#define MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS15_0__GETMOBILEVERIFYCODE_B__0_OFFSET UNITYSDK_OFFSET(0x1BFD01D0)

namespace MiHoYo::SDK
{
	class RequestManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::String* mobile; // 0x18
		::System::Action* callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetMobileVerifyCode_b__0(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_REQUESTMANAGER___C__DISPLAYCLASS15_0__GETMOBILEVERIFYCODE_B__0_OFFSET))(this, a1, a2);
		}

	};
}
