#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALHNDPMOFNF;
class DHOPEBFAMPP;

#define ALHNDPMOFNF_CGAMOIINONI_CEKABBIKPBF_OFFSET UNITYSDK_OFFSET(0x16FFB100)
#define ALHNDPMOFNF_CGAMOIINONI__CTOR_OFFSET UNITYSDK_OFFSET(0x16FFB0F0)

inline static constexpr unsigned int ALHNDPMOFNF_CGAMOIINONI_TypeDefinitionIndex = 86730;

class ALHNDPMOFNF_CGAMOIINONI : public ::System::Object
{
public:
	::DHOPEBFAMPP* FFNKDGGHBPP; // 0x10
	::ALHNDPMOFNF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_CGAMOIINONI__CTOR_OFFSET))(this);
	}

	::System::Void CEKABBIKPBF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHNDPMOFNF_CGAMOIINONI_CEKABBIKPBF_OFFSET))(this);
	}
};
