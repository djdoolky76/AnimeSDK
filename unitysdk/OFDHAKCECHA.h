#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define OFDHAKCECHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C6320)

inline static constexpr unsigned int OFDHAKCECHA_TypeDefinitionIndex = 93705;

class OFDHAKCECHA : public ::BIHPBFHEOOA
{
public:
	::JGLIFHIAIEH PADJNMGMGHO; // 0x10
	::System::UInt32 BKLGNCBNEGM; // 0x18
	::JGLIFHIAIEH KDEHMPGOCEP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDHAKCECHA__CTOR_OFFSET))(this);
	}
};
