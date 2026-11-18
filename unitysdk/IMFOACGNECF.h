#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define IMFOACGNECF_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x1381D940)
#define IMFOACGNECF_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x1381DA10)
#define IMFOACGNECF__CTOR_OFFSET UNITYSDK_OFFSET(0x1381D930)

inline static constexpr unsigned int IMFOACGNECF_TypeDefinitionIndex = 84685;

class IMFOACGNECF : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + IMFOACGNECF__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMFOACGNECF_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMFOACGNECF_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
