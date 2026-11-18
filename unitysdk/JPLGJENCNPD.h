#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/AHOCGFMGIBF.h"
#include "unitysdk/IODPOEFKGOI.h"

#define JPLGJENCNPD_DCALBIOCNDA_OFFSET UNITYSDK_OFFSET(0x7AA4D0)
#define JPLGJENCNPD_IAFHBCHLBME_OFFSET UNITYSDK_OFFSET(0x7AA4C0)

inline static constexpr unsigned int JPLGJENCNPD_TypeDefinitionIndex = 64794;

struct alignas(4) JPLGJENCNPD
{
	::System::Void IAFHBCHLBME(::AHOCGFMGIBF& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AHOCGFMGIBF&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + JPLGJENCNPD_IAFHBCHLBME_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}

	::System::Void DCALBIOCNDA(::AHOCGFMGIBF& HNOGOACBONK, ::IODPOEFKGOI& AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::AHOCGFMGIBF&, ::IODPOEFKGOI&))((::PBYTE)hIl2Cpp + JPLGJENCNPD_DCALBIOCNDA_OFFSET))(this, HNOGOACBONK, AAOCANGHBDG);
	}
};
