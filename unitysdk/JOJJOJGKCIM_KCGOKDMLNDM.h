#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JOJJOJGKCIM_LJFHACMOHLE;

#define JOJJOJGKCIM_KCGOKDMLNDM_MNNAKMABLLK_OFFSET UNITYSDK_OFFSET(0x15B75500)
#define JOJJOJGKCIM_KCGOKDMLNDM__CTOR_OFFSET UNITYSDK_OFFSET(0x15B754F0)

inline static constexpr unsigned int JOJJOJGKCIM_KCGOKDMLNDM_TypeDefinitionIndex = 50375;

class JOJJOJGKCIM_KCGOKDMLNDM : public ::System::Object
{
public:
	::JOJJOJGKCIM_LJFHACMOHLE* FGBNBFHOKAA; // 0x10
	::System::UInt32 KLCELHJKJNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJJOJGKCIM_KCGOKDMLNDM__CTOR_OFFSET))(this);
	}

	::System::Boolean MNNAKMABLLK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOJJOJGKCIM_KCGOKDMLNDM_MNNAKMABLLK_OFFSET))(this);
	}
};
