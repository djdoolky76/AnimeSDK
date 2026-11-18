#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define IPODOFHGDMA_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x1988F230)
#define IPODOFHGDMA_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x1988F2A0)
#define IPODOFHGDMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1988F220)

inline static constexpr unsigned int IPODOFHGDMA_TypeDefinitionIndex = 73141;

class IPODOFHGDMA : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + IPODOFHGDMA__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IPODOFHGDMA_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IPODOFHGDMA_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
