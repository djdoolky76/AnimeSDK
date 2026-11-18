#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HPCONFEPCPD_OPPFFOOOAFO_LGIEPJBBKHH_OFFSET UNITYSDK_OFFSET(0x140CDAC0)
#define HPCONFEPCPD_OPPFFOOOAFO__CTOR_OFFSET UNITYSDK_OFFSET(0x140CDAB0)

inline static constexpr unsigned int HPCONFEPCPD_OPPFFOOOAFO_TypeDefinitionIndex = 90926;

class HPCONFEPCPD_OPPFFOOOAFO : public ::System::Object
{
public:
	::System::Single IFLELIBOKMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_OPPFFOOOAFO__CTOR_OFFSET))(this);
	}

	::System::Single LGIEPJBBKHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HPCONFEPCPD_OPPFFOOOAFO_LGIEPJBBKHH_OFFSET))(this);
	}
};
