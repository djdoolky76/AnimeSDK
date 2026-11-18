#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPFKGBABKBK.h"
#include "unitysdk/HPDDKDEOBKG.h"

class DPPAPDENJEO;
class KGBFLHNJHHN;

#define GKAIJKJJAAD_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9B5180)
#define GKAIJKJJAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B5170)

inline static constexpr unsigned int GKAIJKJJAAD_TypeDefinitionIndex = 93751;

class GKAIJKJJAAD : public ::NPFKGBABKBK
{
public:
	::System::Void _ctor(::HPDDKDEOBKG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HPDDKDEOBKG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GKAIJKJJAAD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::DPPAPDENJEO* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::DPPAPDENJEO*))((::PBYTE)hIl2Cpp + GKAIJKJJAAD_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
