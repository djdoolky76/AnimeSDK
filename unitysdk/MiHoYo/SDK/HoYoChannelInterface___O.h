#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }
namespace MiHoYo::SDK { class HoYoChannelSDK_LogHandler; }

namespace MiHoYo::SDK
{
	class HoYoChannelInterface___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__8___OnMicroTxnCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20C80);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnLoginCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20C88);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__9___OnGameOverlayCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20C90);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__7___OnConsumeCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20C98);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__5___OnCheckoutCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20CA0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__11___OnQueryCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20CA8);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnInitCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20CB0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__6___OnEntitlementsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20CB8);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__4___OnProductsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20CC0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__10___OnAuthStatusChangedCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20CC8);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_LogHandler** StaticGet__0___LogHandler()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_LogHandler**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20CD0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__3___OnAuthTokenCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x20CD8);
		}

	};
}
