#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KAFMJLPNNAG;

#define MOLEMOLE_PERFORMANCESETTINGPOSTPROCESSPROFILEBASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x118F7570)
#define MOLEMOLE_PERFORMANCESETTINGPOSTPROCESSPROFILEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x118F74F0)

namespace MoleMole
{
	inline static constexpr unsigned int PerformanceSettingPostProcessProfileBase_TypeDefinitionIndex = 53157;

	class PerformanceSettingPostProcessProfileBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPOSTPROCESSPROFILEBASE__CTOR_OFFSET))(this);
		}

		::KAFMJLPNNAG* GetPerformanceProfilePostProcessor()
		{
			return ((::KAFMJLPNNAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PERFORMANCESETTINGPOSTPROCESSPROFILEBASE_GETPERFORMANCEPROFILEPOSTPROCESSOR_OFFSET))(this);
		}
	};
}
