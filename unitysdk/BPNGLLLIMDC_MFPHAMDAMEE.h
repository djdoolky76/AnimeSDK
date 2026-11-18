#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JEOKDJECNDL;
class MEAJMOFMAAK;

#define BPNGLLLIMDC_MFPHAMDAMEE_AFHGFHMPAAN_OFFSET UNITYSDK_OFFSET(0x14771AC0)
#define BPNGLLLIMDC_MFPHAMDAMEE__CTOR_OFFSET UNITYSDK_OFFSET(0x14771AB0)

inline static constexpr unsigned int BPNGLLLIMDC_MFPHAMDAMEE_TypeDefinitionIndex = 56028;

class BPNGLLLIMDC_MFPHAMDAMEE : public ::System::Object
{
public:
	::JEOKDJECNDL* IGAAKDOIPNN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_MFPHAMDAMEE__CTOR_OFFSET))(this);
	}

	::System::Boolean AFHGFHMPAAN(::MEAJMOFMAAK* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MEAJMOFMAAK*))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_MFPHAMDAMEE_AFHGFHMPAAN_OFFSET))(this, HAAEBCOBKFF);
	}
};
