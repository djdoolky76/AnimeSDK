#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LCIIAGGMCOC.h"
#include "unitysdk/EFKBHIEGJCP.h"

class GEIEDJHJHHN;
class KGBFLHNJHHN;

#define IOELCALDECH_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1DA08590)
#define IOELCALDECH__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA08580)

inline static constexpr unsigned int IOELCALDECH_TypeDefinitionIndex = 93399;

class IOELCALDECH : public ::LCIIAGGMCOC
{
public:
	::System::Void _ctor(::EFKBHIEGJCP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EFKBHIEGJCP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IOELCALDECH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean MDGCOKBMLFG(::GEIEDJHJHHN* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::GEIEDJHJHHN*))((::PBYTE)hIl2Cpp + IOELCALDECH_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
