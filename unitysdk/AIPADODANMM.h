#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define AIPADODANMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2DCE70)

inline static constexpr unsigned int AIPADODANMM_TypeDefinitionIndex = 93961;

class AIPADODANMM : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::System::UInt32 FLEDHKJGAEP; // 0x14
	::System::UInt32 AMHFLBPBKLL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIPADODANMM__CTOR_OFFSET))(this);
	}
};
