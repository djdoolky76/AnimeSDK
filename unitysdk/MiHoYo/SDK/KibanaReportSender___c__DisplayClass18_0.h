#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAFBAAD0)
#define MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__POSTREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0xAFBB1D0)
#define MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__POSTREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0xAFBB910)

namespace MiHoYo::SDK
{
	class KibanaReportSender___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0_CTOR_OFFSET))(this);
		}

		::System::Void _PostRequest_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__POSTREQUEST_B__0_OFFSET))(this, a1);
		}

		::System::Void _PostRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KIBANAREPORTSENDER___C__DISPLAYCLASS18_0__POSTREQUEST_B__1_OFFSET))(this);
		}

	};
}
