#pragma once
#include "unitysdk/unitysdk.h"

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD28A60)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_IS_OFFSET UNITYSDK_OFFSET(0x3EE9440)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_PacketCommand_TypeDefinitionIndex = 47411;

	struct alignas(4) SecurityTunnel_PacketCommand
	{
		::System::UInt32 CommandCode; // 0x10
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Login()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88C0);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_SecureMessage()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88C4);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_FileTransforEnd()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88C8);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_FileTransforBegin()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88CC);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_KickOff()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88D0);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Null()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88D4);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Logout()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88D8);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Heartbeat()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88DC);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Shutdown()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88E0);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_FileTransforData()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88E4);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_ExchangeSecretKey()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88E8);
		}

		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_ClientMessage()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)UnitySDK::FromName("MiHoYo.SDK", "PacketCommand")->GetStaticField(0x88EC);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_CCTOR_OFFSET))();
		}

		/*
		::System::Boolean Is(::MiHoYo::SDK::SecurityTunnel_PacketCommand a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketCommand))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_IS_OFFSET))(this, a1);
		}
		*/

	};
}
