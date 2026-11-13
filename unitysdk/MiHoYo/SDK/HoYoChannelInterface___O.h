#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }
namespace MiHoYo::SDK { class HoYoChannelSDK_LogHandler; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___O_TypeDefinitionIndex = 47552;

	class HoYoChannelInterface___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__4___OnProductsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7A0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__6___OnEntitlementsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7A8);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__11___OnQueryCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7B0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__9___OnGameOverlayCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7B8);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__7___OnConsumeCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7C0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__5___OnCheckoutCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7C8);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnInitCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7D0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnLoginCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7D8);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__10___OnAuthStatusChangedCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7E0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_LogHandler** StaticGet__0___LogHandler()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_LogHandler**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7E8);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__3___OnAuthTokenCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7F0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__8___OnMicroTxnCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A7F8);
		}

	};
}
