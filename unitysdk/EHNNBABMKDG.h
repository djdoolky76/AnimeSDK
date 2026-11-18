#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define EHNNBABMKDG_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x14A964E0)
#define EHNNBABMKDG_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x14A96840)
#define EHNNBABMKDG__CTOR_OFFSET UNITYSDK_OFFSET(0x14A964D0)

inline static constexpr unsigned int EHNNBABMKDG_TypeDefinitionIndex = 41618;

class EHNNBABMKDG : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + EHNNBABMKDG__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHNNBABMKDG_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EHNNBABMKDG_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
