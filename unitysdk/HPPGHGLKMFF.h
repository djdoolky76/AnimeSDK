#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGPDJGDBGCA.h"
#include "unitysdk/GIDAOGFALGL.h"

class KGBFLHNJHHN;

#define HPPGHGLKMFF_DJKBJNJFEEA_OFFSET UNITYSDK_OFFSET(0x1A4F44E0)
#define HPPGHGLKMFF_KDHBKKIOPDP_OFFSET UNITYSDK_OFFSET(0x1A4F44F0)
#define HPPGHGLKMFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4F44D0)

inline static constexpr unsigned int HPPGHGLKMFF_TypeDefinitionIndex = 15042;

class HPPGHGLKMFF : public ::CGPDJGDBGCA
{
public:
	::System::Void _ctor(::GIDAOGFALGL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GIDAOGFALGL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HPPGHGLKMFF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DJKBJNJFEEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGHGLKMFF_DJKBJNJFEEA_OFFSET))(this);
	}

	::System::Int32 KDHBKKIOPDP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPGHGLKMFF_KDHBKKIOPDP_OFFSET))(this);
	}
};
