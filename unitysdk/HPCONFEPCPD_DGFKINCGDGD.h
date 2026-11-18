#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPCONFEPCPD_DGFKINCGDGD_OKAKHCAGBCM_OFFSET UNITYSDK_OFFSET(0x17A634A0)
#define HPCONFEPCPD_DGFKINCGDGD__CTOR_OFFSET UNITYSDK_OFFSET(0x17A63490)

inline static constexpr unsigned int HPCONFEPCPD_DGFKINCGDGD_TypeDefinitionIndex = 90921;

class HPCONFEPCPD_DGFKINCGDGD : public ::System::Object
{
public:
	::System::Single IFLELIBOKMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_DGFKINCGDGD__CTOR_OFFSET))(this);
	}

	::System::Single OKAKHCAGBCM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_DGFKINCGDGD_OKAKHCAGBCM_OFFSET))(this);
	}
};
