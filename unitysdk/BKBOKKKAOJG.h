#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define BKBOKKKAOJG_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x128AD9F0)
#define BKBOKKKAOJG_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x128ADD50)
#define BKBOKKKAOJG__CTOR_OFFSET UNITYSDK_OFFSET(0x128AD9E0)

inline static constexpr unsigned int BKBOKKKAOJG_TypeDefinitionIndex = 65832;

class BKBOKKKAOJG : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + BKBOKKKAOJG__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKBOKKKAOJG_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BKBOKKKAOJG_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
