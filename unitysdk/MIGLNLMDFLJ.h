#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEHBOOFPNLI.h"
#include "unitysdk/HKHCHKPKIJE.h"

class KGBFLHNJHHN;

#define MIGLNLMDFLJ_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x1C089AB0)
#define MIGLNLMDFLJ_IPDIAPFGABC_OFFSET UNITYSDK_OFFSET(0x1C089990)
#define MIGLNLMDFLJ_LKCDEMLCBNM_OFFSET UNITYSDK_OFFSET(0x1C089870)
#define MIGLNLMDFLJ_OOMPHNKNCOF_OFFSET UNITYSDK_OFFSET(0x1C089750)
#define MIGLNLMDFLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C089740)

inline static constexpr unsigned int MIGLNLMDFLJ_TypeDefinitionIndex = 17252;

class MIGLNLMDFLJ : public ::PEHBOOFPNLI
{
public:
	::System::Void _ctor(::HKHCHKPKIJE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HKHCHKPKIJE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MIGLNLMDFLJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 OOMPHNKNCOF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGLNLMDFLJ_OOMPHNKNCOF_OFFSET))(this);
	}

	::System::Boolean LKCDEMLCBNM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGLNLMDFLJ_LKCDEMLCBNM_OFFSET))(this);
	}

	::System::Int32 IPDIAPFGABC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGLNLMDFLJ_IPDIAPFGABC_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGLNLMDFLJ_IGKFAFBGBAP_OFFSET))(this);
	}
};
