#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class HoYoChannelSDK_CallBack; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___O_TypeDefinitionIndex = 47536;

	class HoYoChannelGameplayServices___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__6___OnInviteReceivedCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A580);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnLeaderboardCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A588);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__0___OnAchievementsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A590);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnStatisticsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A598);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__3___OnActivityCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A5A0);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__5___OnRecentPlayersCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A5A8);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__4___OnInviteCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1A5B0);
		}

	};
}
