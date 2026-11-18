#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAFLLHDKDKD.h"
#include "unitysdk/FABENOKEDPC.h"

class KGBFLHNJHHN;
class NBHKCFIMHML;

#define PFBNBEECFAC_LBNPODOOBGE_OFFSET UNITYSDK_OFFSET(0x1DB93650)
#define PFBNBEECFAC_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DB936A0)
#define PFBNBEECFAC__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB93640)

inline static constexpr unsigned int PFBNBEECFAC_TypeDefinitionIndex = 94120;

class PFBNBEECFAC : public ::GAFLLHDKDKD
{
public:
	::System::Void _ctor(::FABENOKEDPC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FABENOKEDPC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PFBNBEECFAC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LBNPODOOBGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PFBNBEECFAC_LBNPODOOBGE_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG(::NBHKCFIMHML* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::NBHKCFIMHML*))((::PBYTE)hIl2Cpp + PFBNBEECFAC_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
