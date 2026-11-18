#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KAFMJLPNNAG.h"

namespace MoleMole { class PerformanceSettingPostProcessProfileBase; }

#define GOJHMBMFOEI_KOCHHHPBJHB_OFFSET UNITYSDK_OFFSET(0x125EEDB0)
#define GOJHMBMFOEI_MMGOOBGJHNF_OFFSET UNITYSDK_OFFSET(0x125EF040)
#define GOJHMBMFOEI__CTOR_OFFSET UNITYSDK_OFFSET(0x125EEDA0)

inline static constexpr unsigned int GOJHMBMFOEI_TypeDefinitionIndex = 58645;

class GOJHMBMFOEI : public ::KAFMJLPNNAG
{
public:
	::System::Void _ctor(::MoleMole::PerformanceSettingPostProcessProfileBase* JFDDLNDKIKM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::PerformanceSettingPostProcessProfileBase*))((::PBYTE)hIl2Cpp + GOJHMBMFOEI__CTOR_OFFSET))(this, JFDDLNDKIKM);
	}

	::System::Void KOCHHHPBJHB(::System::Boolean ICALOEBJCBL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOJHMBMFOEI_KOCHHHPBJHB_OFFSET))(this, ICALOEBJCBL);
	}

	::System::Void MMGOOBGJHNF(::System::Boolean MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOJHMBMFOEI_MMGOOBGJHNF_OFFSET))(this, MIALFKCCCPI);
	}
};
