#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFNLAHMAND.h"
#include "unitysdk/System/Memory_1.h"
namespace System { class String; }

#define ECAOILCPKLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x3C2A690)
#define ECAOILCPKLA_CTOR_OFFSET UNITYSDK_OFFSET(0x3C2A650)
#define ECAOILCPKLA_GET_PACKEDARGS_OFFSET UNITYSDK_OFFSET(0xEC9A0)
#define ECAOILCPKLA_GET_SERVERTICK_OFFSET UNITYSDK_OFFSET(0xEDCE0)
#define ECAOILCPKLA_SET_PACKEDARGS_OFFSET UNITYSDK_OFFSET(0xF3640)
#define ECAOILCPKLA_SET_SERVERTICK_OFFSET UNITYSDK_OFFSET(0x3C2A640)

inline static constexpr unsigned int ECAOILCPKLA_TypeDefinitionIndex = 36893;

	struct alignas(8) ECAOILCPKLA
	{
		::BNFNLAHMAND DKHNNMHCBPJ; // 0x10
		::System::Byte _padding0[0x4];
		::System::Memory_1<::System::Byte> _PackedArgs_k__BackingField; // 0x18
		::System::Byte _padding1[0x8];
		::System::UInt32 _ServerTick_k__BackingField; // 0x28
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ECAOILCPKLA_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAOILCPKLA_CTOR_1_OFFSET))(this);
		}

		::System::Memory_1<::System::Byte> get_PackedArgs()
		{
			return ((::System::Memory_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAOILCPKLA_GET_PACKEDARGS_OFFSET))(this);
		}

		::System::Void set_PackedArgs(::System::Memory_1<::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Memory_1<::System::Byte>))((::PBYTE)hIl2Cpp + ECAOILCPKLA_SET_PACKEDARGS_OFFSET))(this, a1);
		}

		::System::UInt32 get_ServerTick()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECAOILCPKLA_GET_SERVERTICK_OFFSET))(this);
		}

		::System::Void set_ServerTick(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECAOILCPKLA_SET_SERVERTICK_OFFSET))(this, a1);
		}

	};
