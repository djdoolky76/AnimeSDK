#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PHBOHCDHMDK.h"
#include "unitysdk/System/Object.h"

class AJDNLFCGMEI;

#define GBJOIDIEMBG_COMPARETO_OFFSET UNITYSDK_OFFSET(0x132461E0)
#define GBJOIDIEMBG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x132461C0)
#define GBJOIDIEMBG__CTOR_OFFSET UNITYSDK_OFFSET(0x13246180)

inline static constexpr unsigned int GBJOIDIEMBG_TypeDefinitionIndex = 88978;

class GBJOIDIEMBG : public ::System::Object
{
public:
	::System::UInt32 HPBJCCLDANP; // 0x10
	::System::UInt32 EBKNMNPDAFC; // 0x14
	::System::Boolean NCHODCGOJLP; // 0x18
	::System::Boolean HMACIMCCLLN; // 0x19
	::System::Byte _padding0[0x2];
	::PHBOHCDHMDK BDHBCKPLOFG; // 0x1C
	::System::UInt32 LJLLNHLAJFF; // 0x20

	::System::Void _ctor(::AJDNLFCGMEI* PMLAACAFPDO)
	{
		return ((::System::Void(*)(::PVOID, ::AJDNLFCGMEI*))((::PBYTE)hIl2Cpp + GBJOIDIEMBG__CTOR_OFFSET))(this, PMLAACAFPDO);
	}

	::System::Void _ctor_1(::System::UInt32 HPBJCCLDANP, ::System::UInt32 EBKNMNPDAFC, ::System::UInt32 LJLLNHLAJFF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + GBJOIDIEMBG__CTOR_1_OFFSET))(this, HPBJCCLDANP, EBKNMNPDAFC, LJLLNHLAJFF);
	}

	::System::Int32 CompareTo(::GBJOIDIEMBG* LIBPKNHDIGP)
	{
		return ((::System::Int32(*)(::PVOID, ::GBJOIDIEMBG*))((::PBYTE)hIl2Cpp + GBJOIDIEMBG_COMPARETO_OFFSET))(this, LIBPKNHDIGP);
	}
};
