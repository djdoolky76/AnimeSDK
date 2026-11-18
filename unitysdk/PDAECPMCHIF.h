#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PDAECPMCHIF_CFKPBKOKPBM_OFFSET UNITYSDK_OFFSET(0x809310)
#define PDAECPMCHIF_EFLAGLONHHM_OFFSET UNITYSDK_OFFSET(0x8092C0)
#define PDAECPMCHIF_PAJNCNHJDKM_OFFSET UNITYSDK_OFFSET(0x8092B0)

inline static constexpr unsigned int PDAECPMCHIF_TypeDefinitionIndex = 49305;

struct alignas(4) PDAECPMCHIF
{
	// static const ::System::Int32 OOLNEOHHIKM = -0x1; // 0x0
	// static const ::System::Int32 AOPPHODJNGE = 0x0; // 0x0
	// static const ::System::Int32 GAJCKCGAGEO = 0x1; // 0x0
	// static const ::System::Int32 CAHDGGEALHA = 0x2; // 0x0

	::System::Boolean PAJNCNHJDKM(::System::Int32 HMJNCJELGHI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDAECPMCHIF_PAJNCNHJDKM_OFFSET))(this, HMJNCJELGHI);
	}

	::System::Boolean EFLAGLONHHM(::System::Int32 HMJNCJELGHI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDAECPMCHIF_EFLAGLONHHM_OFFSET))(this, HMJNCJELGHI);
	}

	::System::Boolean CFKPBKOKPBM(::System::Int32 HMJNCJELGHI)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PDAECPMCHIF_CFKPBKOKPBM_OFFSET))(this, HMJNCJELGHI);
	}
};
