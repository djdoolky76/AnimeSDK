#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define DMHJCBCFDAF_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x16BB79C0)
#define DMHJCBCFDAF_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x16BB7A30)
#define DMHJCBCFDAF__CTOR_OFFSET UNITYSDK_OFFSET(0x16BB79B0)

inline static constexpr unsigned int DMHJCBCFDAF_TypeDefinitionIndex = 62106;

class DMHJCBCFDAF : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + DMHJCBCFDAF__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMHJCBCFDAF_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DMHJCBCFDAF_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
