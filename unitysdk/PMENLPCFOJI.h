#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"
#include "unitysdk/JGLIFHIAIEH.h"

#define PMENLPCFOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7358A0)

inline static constexpr unsigned int PMENLPCFOJI_TypeDefinitionIndex = 94185;

class PMENLPCFOJI : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::JGLIFHIAIEH KDEHMPGOCEP; // 0x14
	::JGLIFHIAIEH PADJNMGMGHO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMENLPCFOJI__CTOR_OFFSET))(this);
	}
};
