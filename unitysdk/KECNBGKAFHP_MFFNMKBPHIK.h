#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JPMACEGMIOC;
class KECNBGKAFHP;

#define KECNBGKAFHP_MFFNMKBPHIK_PAJOGKDCIOA_OFFSET UNITYSDK_OFFSET(0x130B5870)
#define KECNBGKAFHP_MFFNMKBPHIK__CTOR_OFFSET UNITYSDK_OFFSET(0x130B5860)

inline static constexpr unsigned int KECNBGKAFHP_MFFNMKBPHIK_TypeDefinitionIndex = 65120;

class KECNBGKAFHP_MFFNMKBPHIK : public ::System::Object
{
public:
	::JPMACEGMIOC* BHOPHHBHIHM; // 0x10
	::KECNBGKAFHP* KLHPEBKNIFB; // 0x18
	::System::Boolean KKMNEDAEFDF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_MFFNMKBPHIK__CTOR_OFFSET))(this);
	}

	::System::Void PAJOGKDCIOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KECNBGKAFHP_MFFNMKBPHIK_PAJOGKDCIOA_OFFSET))(this);
	}
};
