#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/PPJLIOKMNBP.h"

#define LGCGKPEODOH_LHMIMMPLAAD_HCECMDGJEAC_OFFSET UNITYSDK_OFFSET(0x1F983470)
#define LGCGKPEODOH_LHMIMMPLAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1F983460)

inline static constexpr unsigned int LGCGKPEODOH_LHMIMMPLAAD_TypeDefinitionIndex = 95353;

class LGCGKPEODOH_LHMIMMPLAAD : public ::System::Object
{
public:
	::System::UInt64 BKLGNCBNEGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCGKPEODOH_LHMIMMPLAAD__CTOR_OFFSET))(this);
	}

	::System::Boolean HCECMDGJEAC(::PPJLIOKMNBP IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::PPJLIOKMNBP))((::PBYTE)hIl2Cpp + LGCGKPEODOH_LHMIMMPLAAD_HCECMDGJEAC_OFFSET))(this, IPMMCGDMODG);
	}
};
