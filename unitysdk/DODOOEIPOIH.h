#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define DODOOEIPOIH_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x7FDD2B0)
#define DODOOEIPOIH_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x7FDD610)
#define DODOOEIPOIH__CTOR_OFFSET UNITYSDK_OFFSET(0x7FDD2A0)

inline static constexpr unsigned int DODOOEIPOIH_TypeDefinitionIndex = 85645;

class DODOOEIPOIH : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + DODOOEIPOIH__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DODOOEIPOIH_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DODOOEIPOIH_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
