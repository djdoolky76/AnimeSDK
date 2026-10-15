#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace MiHoYo::SDK::PC::OS { class HoYoChannelStatisticsResult; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF1E3F0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF1E430)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATEACHIEVEMENT_B__29_0_OFFSET UNITYSDK_OFFSET(0x1BF1E440)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATERECENTPLAYERS_B__48_0_OFFSET UNITYSDK_OFFSET(0x1BF1E460)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATESTATISTICS_B__31_0_OFFSET UNITYSDK_OFFSET(0x1BF1E450)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c_TypeDefinitionIndex = 8507;

	class HoYoChannel___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__48_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "<>c")->GetStaticField(0x14BE0);
		}

		static ::System::Action** StaticGet___9__29_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "<>c")->GetStaticField(0x14BE8);
		}

		static ::System::Action** StaticGet___9__31_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "<>c")->GetStaticField(0x14BF0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "<>c")->GetStaticField(0x14BF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C_CTOR_OFFSET))(this);
		}

		::System::Void _UpdateAchievement_b__29_0(::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATEACHIEVEMENT_B__29_0_OFFSET))(this, a1);
		}

		::System::Void _UpdateStatistics_b__31_0(::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelStatisticsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATESTATISTICS_B__31_0_OFFSET))(this, a1);
		}

		::System::Void _UpdateRecentPlayers_b__48_0(::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__UPDATERECENTPLAYERS_B__48_0_OFFSET))(this, a1);
		}

	};
}
