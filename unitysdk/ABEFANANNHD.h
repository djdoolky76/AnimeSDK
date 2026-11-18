#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define ABEFANANNHD__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2242C0)

inline static constexpr unsigned int ABEFANANNHD_TypeDefinitionIndex = 93338;

class ABEFANANNHD : public ::BIHPBFHEOOA
{
public:
	::JGLIFHIAIEH OHOGDOMNHNK; // 0x10
	::System::UInt32 BKLGNCBNEGM; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABEFANANNHD__CTOR_OFFSET))(this);
	}
};
