#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_PacketCommand.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_PacketFlag.h"
namespace System { class String; }
namespace System::IO { class MemoryStream; }

#define MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3F08C50)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_CTOR_2_OFFSET UNITYSDK_OFFSET(0x3F08C70)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_CTOR_OFFSET UNITYSDK_OFFSET(0x3F08C40)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x3F08CF0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_GET_FIXEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1DD28AC0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x3F08BB0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_GET_WANTSGENERATEDID_OFFSET UNITYSDK_OFFSET(0x3F08BD0)
#define MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3F08D00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_PacketHeader_TypeDefinitionIndex = 47412;

	struct alignas(8) SecurityTunnel_PacketHeader
	{
		::System::UInt64 ID; // 0x10
		::MiHoYo::SDK::SecurityTunnel_PacketFlag Flag; // 0x18
		::MiHoYo::SDK::SecurityTunnel_PacketCommand Command; // 0x1C
		::Il2CppArray<::System::Byte>* Extra; // 0x20
		::System::Void _ctor(::System::IO::MemoryStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::MemoryStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt64 a1, ::MiHoYo::SDK::SecurityTunnel_PacketFlag a2, ::MiHoYo::SDK::SecurityTunnel_PacketCommand a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::MiHoYo::SDK::SecurityTunnel_PacketFlag, ::MiHoYo::SDK::SecurityTunnel_PacketCommand, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::MiHoYo::SDK::SecurityTunnel_PacketFlag a1, ::MiHoYo::SDK::SecurityTunnel_PacketCommand a2, ::Il2CppArray<::System::Byte>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_PacketFlag, ::MiHoYo::SDK::SecurityTunnel_PacketCommand, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		static ::System::UInt32 get_FixedLength()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_GET_FIXEDLENGTH_OFFSET))();
		}

		::System::UInt32 get_Length()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_GET_LENGTH_OFFSET))(this);
		}

		::System::Boolean get_WantsGeneratedID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_GET_WANTSGENERATEDID_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_GETBYTES_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_PACKETHEADER_TOSTRING_OFFSET))(this);
		}

	};
}
