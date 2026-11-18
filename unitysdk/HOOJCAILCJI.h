#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define HOOJCAILCJI_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x153889C0)
#define HOOJCAILCJI_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x15389060)
#define HOOJCAILCJI__CTOR_OFFSET UNITYSDK_OFFSET(0x153889B0)

inline static constexpr unsigned int HOOJCAILCJI_TypeDefinitionIndex = 77378;

class HOOJCAILCJI : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + HOOJCAILCJI__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOOJCAILCJI_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOOJCAILCJI_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
