#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPMACEGMIOC;
class KECNBGKAFHP;

#define KECNBGKAFHP_NGAPBOPCHFA_NKINKALGFFO_OFFSET UNITYSDK_OFFSET(0x178F9D90)
#define KECNBGKAFHP_NGAPBOPCHFA__CTOR_OFFSET UNITYSDK_OFFSET(0x178F9D80)

inline static constexpr unsigned int KECNBGKAFHP_NGAPBOPCHFA_TypeDefinitionIndex = 65118;

class KECNBGKAFHP_NGAPBOPCHFA : public ::System::Object
{
public:
	::KECNBGKAFHP* KLHPEBKNIFB; // 0x10
	::JPMACEGMIOC* HJICNNIDPLF; // 0x18
	::System::Boolean PDPOALJNNGO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_NGAPBOPCHFA__CTOR_OFFSET))(this);
	}

	::System::Void NKINKALGFFO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_NGAPBOPCHFA_NKINKALGFFO_OFFSET))(this);
	}
};
