#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAEAKAILOPG.h"
#include "unitysdk/JLHGDEHENID.h"

class GLACFOMHOFE;
class KGBFLHNJHHN;

#define FPFMKCAGFKG_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1D9B01E0)
#define FPFMKCAGFKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B01D0)

inline static constexpr unsigned int FPFMKCAGFKG_TypeDefinitionIndex = 93630;

class FPFMKCAGFKG : public ::GAEAKAILOPG
{
public:
	::System::Void _ctor(::JLHGDEHENID LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JLHGDEHENID, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FPFMKCAGFKG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::GLACFOMHOFE* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::GLACFOMHOFE*))((::PBYTE)hIl2Cpp + FPFMKCAGFKG_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
