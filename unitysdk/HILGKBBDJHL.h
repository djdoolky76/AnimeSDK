#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define HILGKBBDJHL_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x16CF3FF0)
#define HILGKBBDJHL_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x16CF44F0)
#define HILGKBBDJHL__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF3FE0)

inline static constexpr unsigned int HILGKBBDJHL_TypeDefinitionIndex = 63055;

class HILGKBBDJHL : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + HILGKBBDJHL__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HILGKBBDJHL_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HILGKBBDJHL_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
