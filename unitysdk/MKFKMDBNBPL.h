#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OCJCLCPEKHP.h"
#include "unitysdk/System/ValueType.h"

class HBHOMOKNOPM;

#define MKFKMDBNBPL_EHCEENOFDPP_OFFSET UNITYSDK_OFFSET(0x7C07B0)
#define MKFKMDBNBPL_FFCPIEDHBDP_OFFSET UNITYSDK_OFFSET(0x7C08A0)
#define MKFKMDBNBPL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7C0760)
#define MKFKMDBNBPL_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x7C0830)
#define MKFKMDBNBPL__CCTOR_OFFSET UNITYSDK_OFFSET(0x17D458C0)
#define MKFKMDBNBPL__CTOR_OFFSET UNITYSDK_OFFSET(0x7C06D0)

inline static constexpr unsigned int MKFKMDBNBPL_TypeDefinitionIndex = 71936;

struct alignas(8) MKFKMDBNBPL
{
	static ::System::UInt32* StaticGet_MCDLPLCPEBH()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(MKFKMDBNBPL_TypeDefinitionIndex)->GetStaticField(0x12D50);
	}
	::System::Int32 KKKPHDNOCGN; // 0x10
	::System::UInt32 HGDOGOHGDNJ; // 0x14
	::OCJCLCPEKHP HLBKHEFJAPH; // 0x18
	::System::Byte _padding0[0x4];
	::HBHOMOKNOPM* LOGHEGIPGDD; // 0x20
	::System::Int32 EEOABPNGIAB; // 0x28

	::System::Void _ctor(::System::Int32 KKKPHDNOCGN, ::HBHOMOKNOPM* LOGHEGIPGDD, ::OCJCLCPEKHP DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::HBHOMOKNOPM*, ::OCJCLCPEKHP))((::PBYTE)hIl2Cpp + MKFKMDBNBPL__CTOR_OFFSET))(this, KKKPHDNOCGN, LOGHEGIPGDD, DKOFFFNEFJC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKFKMDBNBPL__CCTOR_OFFSET))();
	}

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFKMDBNBPL_GETHASHCODE_OFFSET))(this);
	}

	::System::Boolean EHCEENOFDPP(::System::UInt32 IMGBAKKLEMJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKFKMDBNBPL_EHCEENOFDPP_OFFSET))(this, IMGBAKKLEMJ);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFKMDBNBPL_HLPHPBAODIF_OFFSET))(this);
	}

	::System::Boolean FFCPIEDHBDP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFKMDBNBPL_FFCPIEDHBDP_OFFSET))(this);
	}
};
