#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class WeGameDelegate_AsyncAcquireSessionTicketDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_AsyncShowPaymentWindowDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_DoAwakeDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_GetPlayerIDDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_GetPlayerNameDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_RailFireEventsDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_RegisterCallbackDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_SetNotifyWindowEnableDelegate; }
namespace MiHoYo::SDK { class WeGameDelegate_UnRegisterCallbackDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_WEGAMEDELEGATE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BFEF2C0)
#define MIHOYO_SDK_WEGAMEDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFEF2B0)
#define MIHOYO_SDK_WEGAMEDELEGATE_ONWEGAMEANTIADDICTION_OFFSET UNITYSDK_OFFSET(0x1BFEF0C0)
#define MIHOYO_SDK_WEGAMEDELEGATE_ONWEGAMEEXIT_OFFSET UNITYSDK_OFFSET(0x1BFEF1C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WeGameDelegate_TypeDefinitionIndex = 7710;

	class WeGameDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::WeGameDelegate_SetNotifyWindowEnableDelegate** StaticGet_SetNotifyWindowEnable()
		{
			return (::MiHoYo::SDK::WeGameDelegate_SetNotifyWindowEnableDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x2BA00);
		}

		static ::MiHoYo::SDK::WeGameDelegate_UnRegisterCallbackDelegate** StaticGet_UnRegisterCallback()
		{
			return (::MiHoYo::SDK::WeGameDelegate_UnRegisterCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x2BA08);
		}

		static ::MiHoYo::SDK::WeGameDelegate_RegisterCallbackDelegate** StaticGet_RegisterCallback()
		{
			return (::MiHoYo::SDK::WeGameDelegate_RegisterCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x2BA10);
		}

		static ::MiHoYo::SDK::WeGameDelegate_GetPlayerNameDelegate** StaticGet_GetPlayerName()
		{
			return (::MiHoYo::SDK::WeGameDelegate_GetPlayerNameDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x2BA18);
		}

		static ::MiHoYo::SDK::WeGameDelegate_DoAwakeDelegate** StaticGet_DoAwake()
		{
			return (::MiHoYo::SDK::WeGameDelegate_DoAwakeDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x2BA20);
		}

		static ::MiHoYo::SDK::WeGameDelegate_RailFireEventsDelegate** StaticGet_RailFireEvents()
		{
			return (::MiHoYo::SDK::WeGameDelegate_RailFireEventsDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x2BA28);
		}

		static ::MiHoYo::SDK::WeGameDelegate_GetPlayerIDDelegate** StaticGet_GetPlayerID()
		{
			return (::MiHoYo::SDK::WeGameDelegate_GetPlayerIDDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x2BA30);
		}

		static ::MiHoYo::SDK::WeGameDelegate_AsyncAcquireSessionTicketDelegate** StaticGet_AsyncAcquireSessionTicket()
		{
			return (::MiHoYo::SDK::WeGameDelegate_AsyncAcquireSessionTicketDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x2BA38);
		}

		static ::MiHoYo::SDK::WeGameDelegate_AsyncShowPaymentWindowDelegate** StaticGet_AsyncShowPaymentWindow()
		{
			return (::MiHoYo::SDK::WeGameDelegate_AsyncShowPaymentWindowDelegate**)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x2BA40);
		}

		static ::System::Boolean* StaticGet_antiAddictionNotifyEnable()
		{
			return (::System::Boolean*)UnitySDK::FromName("MiHoYo.SDK", "WeGameDelegate")->GetStaticField(0x9200);
		}

		// static const ::System::Object GameId; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_CCTOR_OFFSET))();
		}

		static ::System::Void OnWeGameAntiAddiction(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ONWEGAMEANTIADDICTION_OFFSET))(a1);
		}

		static ::System::Void OnWeGameExit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEGAMEDELEGATE_ONWEGAMEEXIT_OFFSET))(a1);
		}

	};
}
