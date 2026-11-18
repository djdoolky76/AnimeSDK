#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define HIOLFJENFCO_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x19E26390)
#define HIOLFJENFCO_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x19E264F0)
#define HIOLFJENFCO__CTOR_OFFSET UNITYSDK_OFFSET(0x19E26380)

inline static constexpr unsigned int HIOLFJENFCO_TypeDefinitionIndex = 65670;

class HIOLFJENFCO : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + HIOLFJENFCO__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIOLFJENFCO_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIOLFJENFCO_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
