#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB04D520)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_IS_OFFSET UNITYSDK_OFFSET(0xAF50)

namespace MiHoYo::SDK
{
	struct alignas(4) SecurityTunnel_PacketFlag
	{
		::System::UInt32 FlagCode; // 0x10
		static ::MiHoYo::SDK::SecurityTunnel_PacketFlag* StaticGet_Response()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketFlag*)UnitySDK::FromName("MiHoYo.SDK", "PacketFlag")->GetStaticField(0xABC0);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketFlag* StaticGet_Request()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketFlag*)UnitySDK::FromName("MiHoYo.SDK", "PacketFlag")->GetStaticField(0xABC4);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_CCTOR_OFFSET))();
		}

		/*
		::System::Boolean Is(::MiHoYo::SDK::SecurityTunnel_PacketFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketFlag))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETFLAG_IS_OFFSET))(this, a1);
		}
		*/

	};
}
