#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define DGLHNFEEAKD_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x19D5FA40)
#define DGLHNFEEAKD_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x19D5FD60)
#define DGLHNFEEAKD__CTOR_OFFSET UNITYSDK_OFFSET(0x19D5FA30)

inline static constexpr unsigned int DGLHNFEEAKD_TypeDefinitionIndex = 89028;

class DGLHNFEEAKD : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + DGLHNFEEAKD__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGLHNFEEAKD_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGLHNFEEAKD_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
