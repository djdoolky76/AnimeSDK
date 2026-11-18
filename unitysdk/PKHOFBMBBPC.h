#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEGPAAOLGIN.h"
#include "unitysdk/System/ValueType.h"

#define PKHOFBMBBPC_BPJNBMABAJK_OFFSET UNITYSDK_OFFSET(0x822400)
#define PKHOFBMBBPC_DDGDBBIMGNB_OFFSET UNITYSDK_OFFSET(0x8225E0)
#define PKHOFBMBBPC_FAFMHACPAHI_OFFSET UNITYSDK_OFFSET(0x822410)
#define PKHOFBMBBPC_HKLHKNKANKO_OFFSET UNITYSDK_OFFSET(0x8224A0)
#define PKHOFBMBBPC_JMOPNJCIOEC_OFFSET UNITYSDK_OFFSET(0x822580)
#define PKHOFBMBBPC_MEKBPIPGBFD_OFFSET UNITYSDK_OFFSET(0x822520)
#define PKHOFBMBBPC_NKALABDLHAM_OFFSET UNITYSDK_OFFSET(0x8223A0)
#define PKHOFBMBBPC__CTOR_OFFSET UNITYSDK_OFFSET(0x721DF0)

inline static constexpr unsigned int PKHOFBMBBPC_TypeDefinitionIndex = 73148;

struct alignas(4) PKHOFBMBBPC
{
	::BEGPAAOLGIN MKLBHALHGBN; // 0x10
	::BEGPAAOLGIN JNFCILLOJKN; // 0x14
	::System::Boolean IGNKDCNGBGI; // 0x18

	::System::Void _ctor(::BEGPAAOLGIN PPBCNEPHBAJ, ::BEGPAAOLGIN BIGIPAICEGN, ::System::Boolean BJCAEMOCIOA)
	{
		return ((::System::Void(*)(::PVOID, ::BEGPAAOLGIN, ::BEGPAAOLGIN, ::System::Boolean))((::PBYTE)hIl2Cpp + PKHOFBMBBPC__CTOR_OFFSET))(this, PPBCNEPHBAJ, BIGIPAICEGN, BJCAEMOCIOA);
	}

	::System::Boolean NKALABDLHAM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHOFBMBBPC_NKALABDLHAM_OFFSET))(this);
	}

	::System::Boolean BPJNBMABAJK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHOFBMBBPC_BPJNBMABAJK_OFFSET))(this);
	}

	::System::Boolean FAFMHACPAHI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHOFBMBBPC_FAFMHACPAHI_OFFSET))(this);
	}

	::System::Boolean HKLHKNKANKO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHOFBMBBPC_HKLHKNKANKO_OFFSET))(this);
	}

	::System::Boolean MEKBPIPGBFD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHOFBMBBPC_MEKBPIPGBFD_OFFSET))(this);
	}

	::System::Boolean JMOPNJCIOEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHOFBMBBPC_JMOPNJCIOEC_OFFSET))(this);
	}

	::System::Boolean DDGDBBIMGNB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHOFBMBBPC_DDGDBBIMGNB_OFFSET))(this);
	}
};
