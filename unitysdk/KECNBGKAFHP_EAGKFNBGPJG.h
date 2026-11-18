#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPMACEGMIOC;
class KECNBGKAFHP;

#define KECNBGKAFHP_EAGKFNBGPJG_KHAOBELIHKB_OFFSET UNITYSDK_OFFSET(0x17643140)
#define KECNBGKAFHP_EAGKFNBGPJG__CTOR_OFFSET UNITYSDK_OFFSET(0x17643130)

inline static constexpr unsigned int KECNBGKAFHP_EAGKFNBGPJG_TypeDefinitionIndex = 65125;

class KECNBGKAFHP_EAGKFNBGPJG : public ::System::Object
{
public:
	::JPMACEGMIOC* KGPDEJGGPLK; // 0x10
	::KECNBGKAFHP* KLHPEBKNIFB; // 0x18
	::System::Boolean JEFBMEIEOJP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_EAGKFNBGPJG__CTOR_OFFSET))(this);
	}

	::System::Void KHAOBELIHKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_EAGKFNBGPJG_KHAOBELIHKB_OFFSET))(this);
	}
};
