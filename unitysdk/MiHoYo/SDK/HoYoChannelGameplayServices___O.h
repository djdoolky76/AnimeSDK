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
		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__3___OnActivityCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1BB20);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__5___OnRecentPlayersCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1BB28);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__1___OnStatisticsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1BB30);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__6___OnInviteReceivedCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1BB38);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__4___OnInviteCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1BB40);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__0___OnAchievementsCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1BB48);
		}

		static ::MiHoYo::SDK::HoYoChannelSDK_CallBack** StaticGet__2___OnLeaderboardCallback()
		{
			return (::MiHoYo::SDK::HoYoChannelSDK_CallBack**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1BB50);
		}

	};
}
