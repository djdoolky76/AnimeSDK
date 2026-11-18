#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define GDMDLLDIFBI_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x10EE5920)
#define GDMDLLDIFBI_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x10EE5990)
#define GDMDLLDIFBI__CTOR_OFFSET UNITYSDK_OFFSET(0x10EE5910)

inline static constexpr unsigned int GDMDLLDIFBI_TypeDefinitionIndex = 50036;

class GDMDLLDIFBI : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + GDMDLLDIFBI__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMDLLDIFBI_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDMDLLDIFBI_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
