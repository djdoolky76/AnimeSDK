#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNLHFLFKGMP.h"
#include "unitysdk/PJEDCKIIJNE.h"

#define GDBJAHFOLBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC63700)

inline static constexpr unsigned int GDBJAHFOLBF_TypeDefinitionIndex = 95194;

class GDBJAHFOLBF : public ::KNLHFLFKGMP
{
public:
	::System::Boolean OAFIGOELHLH; // 0x68
	::System::Byte _padding0[0x3];
	::PJEDCKIIJNE OCOJFKMOKMK; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBJAHFOLBF__CTOR_OFFSET))(this);
	}
};
