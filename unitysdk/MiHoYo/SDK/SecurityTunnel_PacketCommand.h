#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_IS_OFFSET UNITYSDK_OFFSET(0x44D8D0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F430B80)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_PacketCommand_TypeDefinitionIndex = 35409;

	struct alignas(4) SecurityTunnel_PacketCommand
	{
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Logout()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CA0);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_KickOff()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CA4);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Heartbeat()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CA8);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_FileTransforBegin()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CAC);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_ExchangeSecretKey()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CB0);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_FileTransforEnd()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CB4);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Null()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CB8);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_ClientMessage()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CBC);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_SecureMessage()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CC0);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Login()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CC4);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_Shutdown()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CC8);
		}
		static ::MiHoYo::SDK::SecurityTunnel_PacketCommand* StaticGet_FileTransforData()
		{
			return (::MiHoYo::SDK::SecurityTunnel_PacketCommand*)Il2CppClass::FromTypeDefinitionIndex(SecurityTunnel_PacketCommand_TypeDefinitionIndex)->GetStaticField(0x8CCC);
		}
		::System::UInt32 CommandCode; // 0x10

		::System::Void _ctor(::System::UInt32 commandCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND__CTOR_OFFSET))(this, commandCode);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND__CCTOR_OFFSET))();
		}

		/*
		::System::Boolean Is(::MiHoYo::SDK::SecurityTunnel_PacketCommand other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketCommand))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETCOMMAND_IS_OFFSET))(this, other);
		}
		*/
	};
}
