#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define AJADMPGPKFI_NIDPDGMFLFG_EQUALS_OFFSET UNITYSDK_OFFSET(0x99BAD0)
#define AJADMPGPKFI_NIDPDGMFLFG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99BB30)
#define AJADMPGPKFI_NIDPDGMFLFG_HLPHPBAODIF_OFFSET UNITYSDK_OFFSET(0x99BB80)

inline static constexpr unsigned int AJADMPGPKFI_NIDPDGMFLFG_TypeDefinitionIndex = 95314;

struct alignas(4) AJADMPGPKFI_NIDPDGMFLFG
{
	::System::Int32 HAAEBCOBKFF; // 0x10
	::System::Int32 GNHOCNHLCCA; // 0x14

	/*
	::System::Boolean Equals(::AJADMPGPKFI_NIDPDGMFLFG LIBPKNHDIGP)
	{
		return ((::System::Boolean(*)(::PVOID, ::AJADMPGPKFI_NIDPDGMFLFG))((::PBYTE)hIl2Cpp + AJADMPGPKFI_NIDPDGMFLFG_EQUALS_OFFSET))(this, LIBPKNHDIGP);
	}
	*/

	::System::Int32 GetHashCode()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJADMPGPKFI_NIDPDGMFLFG_GETHASHCODE_OFFSET))(this);
	}

	::System::Int32 HLPHPBAODIF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJADMPGPKFI_NIDPDGMFLFG_HLPHPBAODIF_OFFSET))(this);
	}
};
