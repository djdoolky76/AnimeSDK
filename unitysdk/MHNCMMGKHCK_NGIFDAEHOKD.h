#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class MHNCMMGKHCK;

#define MHNCMMGKHCK_NGIFDAEHOKD_BAKBBGDOIAD_OFFSET UNITYSDK_OFFSET(0x14DE69E0)
#define MHNCMMGKHCK_NGIFDAEHOKD_FNMONEGOBHD_OFFSET UNITYSDK_OFFSET(0x14DE6DA0)
#define MHNCMMGKHCK_NGIFDAEHOKD__CTOR_OFFSET UNITYSDK_OFFSET(0x14DE69D0)

inline static constexpr unsigned int MHNCMMGKHCK_NGIFDAEHOKD_TypeDefinitionIndex = 43323;

class MHNCMMGKHCK_NGIFDAEHOKD : public ::System::Object
{
public:
	::MHNCMMGKHCK* KLHPEBKNIFB; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNCMMGKHCK_NGIFDAEHOKD__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath BAKBBGDOIAD()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNCMMGKHCK_NGIFDAEHOKD_BAKBBGDOIAD_OFFSET))(this);
	}

	::System::Boolean FNMONEGOBHD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHNCMMGKHCK_NGIFDAEHOKD_FNMONEGOBHD_OFFSET))(this);
	}
};
