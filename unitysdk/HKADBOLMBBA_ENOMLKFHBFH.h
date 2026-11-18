#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define HKADBOLMBBA_ENOMLKFHBFH_CKCHDLFCBFC_OFFSET UNITYSDK_OFFSET(0x7F0D70)

inline static constexpr unsigned int HKADBOLMBBA_ENOMLKFHBFH_TypeDefinitionIndex = 57944;

struct alignas(4) HKADBOLMBBA_ENOMLKFHBFH
{
	::System::Int32 APHAIAEOCOH; // 0x10
	::System::Int32 OPOLDCGPGGB; // 0x14
	::System::Int32 ONGBMHJDCOG; // 0x18

	::System::Int32 CKCHDLFCBFC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HKADBOLMBBA_ENOMLKFHBFH_CKCHDLFCBFC_OFFSET))(this);
	}
};
