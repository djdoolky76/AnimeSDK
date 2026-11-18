#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"
#include "unitysdk/MoleMole/Config/HollowInteractRelativePosition.h"

class PDFPKGIKEEJ;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONRELATIVEPOSITION_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x190A2BF0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONRELATIVEPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x190A2CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionRelativePosition_TypeDefinitionIndex = 41991;

	class ConfigHollowInteractConditionRelativePosition : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::MoleMole::Config::HollowInteractRelativePosition RelativePosition; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONRELATIVEPOSITION__CTOR_OFFSET))(this);
		}

		::PDFPKGIKEEJ* CreateCondition()
		{
			return ((::PDFPKGIKEEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONRELATIVEPOSITION_CREATECONDITION_OFFSET))(this);
		}
	};
}
