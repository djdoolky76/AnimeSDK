#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define KCIHAHLEGGO_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x1A4A3440)
#define KCIHAHLEGGO_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x1A4A37A0)
#define KCIHAHLEGGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4A3430)

inline static constexpr unsigned int KCIHAHLEGGO_TypeDefinitionIndex = 45193;

class KCIHAHLEGGO : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + KCIHAHLEGGO__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCIHAHLEGGO_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KCIHAHLEGGO_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
