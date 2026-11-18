#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EBIMBMLNBOM;
class IHCADCOJCHL;

#define POODDBJFAPA_HOCBAAFNGIF_AIGPOBMPCKK_OFFSET UNITYSDK_OFFSET(0x1374A800)
#define POODDBJFAPA_HOCBAAFNGIF__CTOR_OFFSET UNITYSDK_OFFSET(0x13736690)

inline static constexpr unsigned int POODDBJFAPA_HOCBAAFNGIF_TypeDefinitionIndex = 90274;

class POODDBJFAPA_HOCBAAFNGIF : public ::System::Object
{
public:
	::IHCADCOJCHL* IPMMCGDMODG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POODDBJFAPA_HOCBAAFNGIF__CTOR_OFFSET))(this);
	}

	::System::Boolean AIGPOBMPCKK(::EBIMBMLNBOM* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::EBIMBMLNBOM*))((::PBYTE)hIl2Cpp + POODDBJFAPA_HOCBAAFNGIF_AIGPOBMPCKK_OFFSET))(this, HAAEBCOBKFF);
	}
};
