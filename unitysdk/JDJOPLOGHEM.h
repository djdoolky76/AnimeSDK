#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MENGACGOHOG.h"
#include "unitysdk/NKGKDNFNPIN.h"
#include "unitysdk/System/ValueType.h"

#define JDJOPLOGHEM__CTOR_OFFSET UNITYSDK_OFFSET(0x6F9BA0)

inline static constexpr unsigned int JDJOPLOGHEM_TypeDefinitionIndex = 69751;

struct alignas(4) JDJOPLOGHEM
{
	::MENGACGOHOG OBCACCFJLAL; // 0x10
	::NKGKDNFNPIN EOHMOBFDJMO; // 0x28

	::System::Void _ctor(::MENGACGOHOG& HKNNDBGONAL, ::NKGKDNFNPIN& EMFJHAPMHBB)
	{
		return ((::System::Void(*)(::PVOID, ::MENGACGOHOG&, ::NKGKDNFNPIN&))((::PBYTE)hIl2Cpp + JDJOPLOGHEM__CTOR_OFFSET))(this, HKNNDBGONAL, EMFJHAPMHBB);
	}
};
