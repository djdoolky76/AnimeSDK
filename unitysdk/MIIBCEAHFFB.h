#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOCMOCAMEFK.h"
#include "unitysdk/DKNMNJKHIIE.h"

class KGBFLHNJHHN;
class NIHMJEPBGIN;

#define MIIBCEAHFFB_DPJJIKODPBG_OFFSET UNITYSDK_OFFSET(0x1E1D2430)
#define MIIBCEAHFFB_MDGCOKBMLFG_OFFSET UNITYSDK_OFFSET(0x1E1D2480)
#define MIIBCEAHFFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D2420)

inline static constexpr unsigned int MIIBCEAHFFB_TypeDefinitionIndex = 93442;

class MIIBCEAHFFB : public ::NOCMOCAMEFK
{
public:
	::System::Void _ctor(::DKNMNJKHIIE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DKNMNJKHIIE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MIIBCEAHFFB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DPJJIKODPBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIBCEAHFFB_DPJJIKODPBG_OFFSET))(this);
	}

	::System::Boolean MDGCOKBMLFG(::NIHMJEPBGIN* PFJJJOBKCPE)
	{
		return ((::System::Boolean(*)(::PVOID, ::NIHMJEPBGIN*))((::PBYTE)hIl2Cpp + MIIBCEAHFFB_MDGCOKBMLFG_OFFSET))(this, PFJJJOBKCPE);
	}
};
