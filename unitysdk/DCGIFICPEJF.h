#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class NEJHOELDCBI;

#define DCGIFICPEJF_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x147C1810)
#define DCGIFICPEJF_NODKEKBCDFJ_OFFSET UNITYSDK_OFFSET(0x147C18F0)
#define DCGIFICPEJF_ONSTART_OFFSET UNITYSDK_OFFSET(0x147C18B0)
#define DCGIFICPEJF__CTOR_OFFSET UNITYSDK_OFFSET(0x147C1800)

inline static constexpr unsigned int DCGIFICPEJF_TypeDefinitionIndex = 46275;

class DCGIFICPEJF : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIFICPEJF__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIFICPEJF_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCGIFICPEJF_ONSTART_OFFSET))(this);
	}

	::System::Void NODKEKBCDFJ(::NEJHOELDCBI* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NEJHOELDCBI*))((::PBYTE)hIl2Cpp + DCGIFICPEJF_NODKEKBCDFJ_OFFSET))(this, NKMKJFCBBCK);
	}
};
