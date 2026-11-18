#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define OLGNGGCGDEM_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0xFB97240)
#define OLGNGGCGDEM_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0xFB975A0)
#define OLGNGGCGDEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFB97230)

inline static constexpr unsigned int OLGNGGCGDEM_TypeDefinitionIndex = 63464;

class OLGNGGCGDEM : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + OLGNGGCGDEM__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OLGNGGCGDEM_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OLGNGGCGDEM_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
