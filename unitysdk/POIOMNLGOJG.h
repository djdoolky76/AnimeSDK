#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define POIOMNLGOJG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB95D60)

inline static constexpr unsigned int POIOMNLGOJG_TypeDefinitionIndex = 94306;

class POIOMNLGOJG : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 AMHFLBPBKLL; // 0x10
	::System::UInt32 BKLGNCBNEGM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIOMNLGOJG__CTOR_OFFSET))(this);
	}
};
