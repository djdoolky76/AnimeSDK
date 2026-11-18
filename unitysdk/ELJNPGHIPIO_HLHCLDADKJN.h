#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ELJNPGHIPIO_HLHCLDADKJN_EJOOJAGNCMM_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define ELJNPGHIPIO_HLHCLDADKJN_ICNBNOMCGED_OFFSET UNITYSDK_OFFSET(0x359320)
#define ELJNPGHIPIO_HLHCLDADKJN_MECNPJFKKIO_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define ELJNPGHIPIO_HLHCLDADKJN__CTOR_OFFSET UNITYSDK_OFFSET(0x4971C0)

inline static constexpr unsigned int ELJNPGHIPIO_HLHCLDADKJN_TypeDefinitionIndex = 28851;

struct alignas(4) ELJNPGHIPIO_HLHCLDADKJN
{
	::System::UInt32 _IAMBCDNHLBM_k__BackingField; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 _EDEFOOPFMGK_k__BackingField; // 0x18
	::System::UInt64 _EJCIEHKFCPE_k__BackingField; // 0x20

	::System::Void _ctor(::System::UInt32 KMLLPDNJPAP, ::System::UInt64 JPJABMHIFLO, ::System::UInt64 HKGDBDLJGOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_HLHCLDADKJN__CTOR_OFFSET))(this, KMLLPDNJPAP, JPJABMHIFLO, HKGDBDLJGOJ);
	}

	::System::UInt64 MECNPJFKKIO()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_HLHCLDADKJN_MECNPJFKKIO_OFFSET))(this);
	}

	::System::UInt32 ICNBNOMCGED()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_HLHCLDADKJN_ICNBNOMCGED_OFFSET))(this);
	}

	::System::UInt64 EJOOJAGNCMM()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJNPGHIPIO_HLHCLDADKJN_EJOOJAGNCMM_OFFSET))(this);
	}
};
