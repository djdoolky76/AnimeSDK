#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMPDINEAGPO.h"
#include "unitysdk/IONKMMOCFMM.h"

class KGBFLHNJHHN;

#define MHKPIMBLCAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1910B690)

inline static constexpr unsigned int MHKPIMBLCAM_TypeDefinitionIndex = 16716;

class MHKPIMBLCAM : public ::EMPDINEAGPO
{
public:
	::System::Void _ctor(::IONKMMOCFMM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IONKMMOCFMM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHKPIMBLCAM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}
};
