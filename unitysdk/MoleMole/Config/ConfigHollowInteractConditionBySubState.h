#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"
#include "unitysdk/OMDJLKPMLMM.h"

class PDFPKGIKEEJ;

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSUBSTATE_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x1929F740)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSUBSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1929F820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionBySubState_TypeDefinitionIndex = 55827;

	class ConfigHollowInteractConditionBySubState : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::OMDJLKPMLMM SubState; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSUBSTATE__CTOR_OFFSET))(this);
		}

		::PDFPKGIKEEJ* CreateCondition()
		{
			return ((::PDFPKGIKEEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYSUBSTATE_CREATECONDITION_OFFSET))(this);
		}
	};
}
