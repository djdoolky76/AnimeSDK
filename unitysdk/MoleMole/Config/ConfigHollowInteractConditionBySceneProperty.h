#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/Share/EScenePropertyType.h"

class PDFPKGIKEEJ;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSCENEPROPERTY_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x1B921AE0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSCENEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B921BC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionBySceneProperty_TypeDefinitionIndex = 54754;

	class ConfigHollowInteractConditionBySceneProperty : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::Share::EScenePropertyType Property; // 0x10
		::MoleMole::Config::ValueCompareType CompareType; // 0x14
		::System::Int32 Target; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSCENEPROPERTY__CTOR_OFFSET))(this);
		}

		::PDFPKGIKEEJ* CreateCondition()
		{
			return ((::PDFPKGIKEEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSCENEPROPERTY_CREATECONDITION_OFFSET))(this);
		}
	};
}
