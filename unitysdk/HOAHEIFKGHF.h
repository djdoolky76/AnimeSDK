#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define HOAHEIFKGHF_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x1470BB40)
#define HOAHEIFKGHF_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x1470BE40)
#define HOAHEIFKGHF__CTOR_OFFSET UNITYSDK_OFFSET(0x1470BB30)

inline static constexpr unsigned int HOAHEIFKGHF_TypeDefinitionIndex = 45776;

class HOAHEIFKGHF : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + HOAHEIFKGHF__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOAHEIFKGHF_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOAHEIFKGHF_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
