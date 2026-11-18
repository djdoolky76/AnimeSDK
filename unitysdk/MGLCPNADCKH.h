#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define MGLCPNADCKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED49A40)

inline static constexpr unsigned int MGLCPNADCKH_TypeDefinitionIndex = 94666;

class MGLCPNADCKH : public ::BIHPBFHEOOA
{
public:
	::System::Single EEODALLOKMF; // 0x10
	::System::Single JLJFEDOHDJP; // 0x14
	::System::UInt32 BKLGNCBNEGM; // 0x18
	::JGLIFHIAIEH CJDEFHFPAGK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLCPNADCKH__CTOR_OFFSET))(this);
	}
};
