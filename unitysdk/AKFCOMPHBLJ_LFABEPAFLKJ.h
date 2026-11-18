#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMDBFMGKGNO.h"

#define AKFCOMPHBLJ_LFABEPAFLKJ_EMHFEKOCIPP_OFFSET UNITYSDK_OFFSET(0x1648A980)
#define AKFCOMPHBLJ_LFABEPAFLKJ_IAFAHIELKKO_OFFSET UNITYSDK_OFFSET(0x1648ABE0)
#define AKFCOMPHBLJ_LFABEPAFLKJ_NICHLBNOMDI_OFFSET UNITYSDK_OFFSET(0x1648AAC0)

inline static constexpr unsigned int AKFCOMPHBLJ_LFABEPAFLKJ_TypeDefinitionIndex = 77043;

class AKFCOMPHBLJ_LFABEPAFLKJ : public ::System::Object
{
public:
	static ::BMDBFMGKGNO EMHFEKOCIPP()
	{
		return ((::BMDBFMGKGNO(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_LFABEPAFLKJ_EMHFEKOCIPP_OFFSET))();
	}

	static ::System::Boolean NICHLBNOMDI()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_LFABEPAFLKJ_NICHLBNOMDI_OFFSET))();
	}

	static ::System::Void IAFAHIELKKO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFCOMPHBLJ_LFABEPAFLKJ_IAFAHIELKKO_OFFSET))();
	}
};
