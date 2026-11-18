#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define IDBJPPBJKGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE54580)

inline static constexpr unsigned int IDBJPPBJKGK_TypeDefinitionIndex = 93366;

class IDBJPPBJKGK : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 EKOHIAJDIEC; // 0x10
	::System::UInt32 JBNIIHBJAJD; // 0x14
	::System::UInt32 BKLGNCBNEGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDBJPPBJKGK__CTOR_OFFSET))(this);
	}
};
