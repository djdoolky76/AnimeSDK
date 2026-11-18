#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FMDLEABINEN__CTOR_OFFSET UNITYSDK_OFFSET(0xBB577E0)

inline static constexpr unsigned int FMDLEABINEN_TypeDefinitionIndex = 57921;

class FMDLEABINEN : public ::System::Object
{
public:
	::System::UInt64 OOEJIILEDIP; // 0x10
	::System::Int32 MKBOBEEHPHD; // 0x18
	::System::Int32 KNMHCPPLABK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMDLEABINEN__CTOR_OFFSET))(this);
	}
};
