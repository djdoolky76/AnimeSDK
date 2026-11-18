#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JDDKPKONMAL;

#define JDDKPKONMAL_PBANJFGOEPL_GDIFGAGNMBE_OFFSET UNITYSDK_OFFSET(0x153CBBA0)
#define JDDKPKONMAL_PBANJFGOEPL_NAFGEJAGMHB_OFFSET UNITYSDK_OFFSET(0x153CBBF0)
#define JDDKPKONMAL_PBANJFGOEPL__CTOR_OFFSET UNITYSDK_OFFSET(0x153CBB90)

inline static constexpr unsigned int JDDKPKONMAL_PBANJFGOEPL_TypeDefinitionIndex = 55013;

class JDDKPKONMAL_PBANJFGOEPL : public ::System::Object
{
public:
	::JDDKPKONMAL* KLHPEBKNIFB; // 0x10
	::System::Single FNIOPKPHDEH; // 0x18
	::System::Single JABKCLKHHLP; // 0x1C
	::System::Single JMBBLJOCOBF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDKPKONMAL_PBANJFGOEPL__CTOR_OFFSET))(this);
	}

	::System::Void GDIFGAGNMBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDKPKONMAL_PBANJFGOEPL_GDIFGAGNMBE_OFFSET))(this);
	}

	::System::Void NAFGEJAGMHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDKPKONMAL_PBANJFGOEPL_NAFGEJAGMHB_OFFSET))(this);
	}
};
