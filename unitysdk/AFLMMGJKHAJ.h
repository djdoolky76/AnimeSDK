#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define AFLMMGJKHAJ_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x135DBA90)
#define AFLMMGJKHAJ_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x135DBB00)
#define AFLMMGJKHAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x135DBA80)

inline static constexpr unsigned int AFLMMGJKHAJ_TypeDefinitionIndex = 40563;

class AFLMMGJKHAJ : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + AFLMMGJKHAJ__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFLMMGJKHAJ_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFLMMGJKHAJ_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
