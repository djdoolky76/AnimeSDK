#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHFFDBEONKO.h"
#include "unitysdk/KNBLIANFOFA.h"

class KGBFLHNJHHN;

#define MLPKNFFCNCO_EPEJHCEMOOB_OFFSET UNITYSDK_OFFSET(0x1C17F7E0)
#define MLPKNFFCNCO_HCMECFCEAIN_OFFSET UNITYSDK_OFFSET(0x1C17F7B0)
#define MLPKNFFCNCO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C17F7A0)

inline static constexpr unsigned int MLPKNFFCNCO_TypeDefinitionIndex = 15442;

class MLPKNFFCNCO : public ::NHFFDBEONKO
{
public:
	::System::Void _ctor(::KNBLIANFOFA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KNBLIANFOFA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MLPKNFFCNCO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean HCMECFCEAIN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPKNFFCNCO_HCMECFCEAIN_OFFSET))(this);
	}

	::System::Boolean EPEJHCEMOOB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MLPKNFFCNCO_EPEJHCEMOOB_OFFSET))(this);
	}
};
