#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class SteamDelegate_GetNickNameDelegate; }
namespace MiHoYo::SDK { class SteamDelegate_GetSteamIdDelegate; }
namespace MiHoYo::SDK { class SteamDelegate_GetTicketDelegate; }
namespace MiHoYo::SDK { class SteamDelegate_RegisterCallbackDelegate; }
namespace MiHoYo::SDK { class SteamDelegate_SetAppIdDelegate; }
namespace System { class String; }

#define MIHOYO_SDK_STEAMDELEGATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1689E0)
#define MIHOYO_SDK_STEAMDELEGATE_DEDUCT_OFFSET UNITYSDK_OFFSET(0x1D168980)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SteamDelegate_TypeDefinitionIndex = 7704;

	class SteamDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::SteamDelegate_GetNickNameDelegate** StaticGet_GetNickName()
		{
			return (::MiHoYo::SDK::SteamDelegate_GetNickNameDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SteamDelegate")->GetStaticField(0x2A120);
		}

		static ::MiHoYo::SDK::SteamDelegate_GetSteamIdDelegate** StaticGet_GetSteamId()
		{
			return (::MiHoYo::SDK::SteamDelegate_GetSteamIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SteamDelegate")->GetStaticField(0x2A128);
		}

		static ::MiHoYo::SDK::SteamDelegate_RegisterCallbackDelegate** StaticGet_RegisterCallback()
		{
			return (::MiHoYo::SDK::SteamDelegate_RegisterCallbackDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SteamDelegate")->GetStaticField(0x2A130);
		}

		static ::MiHoYo::SDK::SteamDelegate_GetTicketDelegate** StaticGet_GetTicket()
		{
			return (::MiHoYo::SDK::SteamDelegate_GetTicketDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SteamDelegate")->GetStaticField(0x2A138);
		}

		static ::MiHoYo::SDK::SteamDelegate_SetAppIdDelegate** StaticGet_SetAppId()
		{
			return (::MiHoYo::SDK::SteamDelegate_SetAppIdDelegate**)UnitySDK::FromName("MiHoYo.SDK", "SteamDelegate")->GetStaticField(0x2A140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_CTOR_OFFSET))(this);
		}

		static ::System::Void Deduct(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_STEAMDELEGATE_DEDUCT_OFFSET))(a1);
		}

	};
}
