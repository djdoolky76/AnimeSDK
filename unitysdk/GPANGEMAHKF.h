#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODOPDJKEEIG.h"

#define GPANGEMAHKF__CTOR_OFFSET UNITYSDK_OFFSET(0x17A2CE10)

inline static constexpr unsigned int GPANGEMAHKF_TypeDefinitionIndex = 57157;

class GPANGEMAHKF : public ::ODOPDJKEEIG
{
public:
	::System::Boolean MFBGAPGMJKN; // 0x20
	::System::Boolean NCEAEHKEPJN; // 0x21
	::System::Boolean KHMDJHFCAIL; // 0x22
	::System::Boolean EFMFKFHBGPM; // 0x23
	::System::Boolean MNFDGMHBLIO; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPANGEMAHKF__CTOR_OFFSET))(this);
	}
};
