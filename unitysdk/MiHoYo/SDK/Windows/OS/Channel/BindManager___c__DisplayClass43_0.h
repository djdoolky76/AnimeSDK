#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK::Windows::OS::Channel { class BindManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE0DA20)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__GETCAPTCHACODE_B__0_OFFSET UNITYSDK_OFFSET(0x1BE11170)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__GETCAPTCHACODE_B__1_OFFSET UNITYSDK_OFFSET(0x1BE11970)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	class BindManager___c__DisplayClass43_0 : public ::System::Object
	{
	public:
		::System::Action* onCreateActionTicket; // 0x10
		::MiHoYo::SDK::Windows::OS::Channel::BindManager* __4__this; // 0x18
		::System::Action* __9__1; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* extHeaders; // 0x28
		::System::String* account; // 0x30
		::System::Boolean forceTokenRefresh; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetCaptchaCode_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__GETCAPTCHACODE_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetCaptchaCode_b__1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGER___C__DISPLAYCLASS43_0__GETCAPTCHACODE_B__1_OFFSET))(this, a1);
		}

	};
}
