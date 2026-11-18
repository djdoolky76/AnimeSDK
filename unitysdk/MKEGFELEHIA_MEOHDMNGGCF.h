#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHLILAKNEGM.h"
#include "unitysdk/System/Object.h"

class MKEGFELEHIA;

#define MKEGFELEHIA_MEOHDMNGGCF_HBGNHDMHFEJ_OFFSET UNITYSDK_OFFSET(0x13194C90)
#define MKEGFELEHIA_MEOHDMNGGCF__CTOR_OFFSET UNITYSDK_OFFSET(0x13194C80)

inline static constexpr unsigned int MKEGFELEHIA_MEOHDMNGGCF_TypeDefinitionIndex = 58092;

class MKEGFELEHIA_MEOHDMNGGCF : public ::System::Object
{
public:
	::MKEGFELEHIA* KLHPEBKNIFB; // 0x10
	::System::Int32 FGHMEEEHCDC; // 0x18
	::System::Int32 FEPFMLKBCIG; // 0x1C
	::System::Int32 IGAAKDOIPNN; // 0x20
	::BHLILAKNEGM KNMOFJBCDKA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_MEOHDMNGGCF__CTOR_OFFSET))(this);
	}

	::System::Void HBGNHDMHFEJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKEGFELEHIA_MEOHDMNGGCF_HBGNHDMHFEJ_OFFSET))(this);
	}
};
