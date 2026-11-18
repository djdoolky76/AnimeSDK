#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"
#include "unitysdk/ProtoScript/HollowEntityType.h"

class PDFPKGIKEEJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYENTITYTYPE_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0x1653B880)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYENTITYTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1653B960)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionByEntityType_TypeDefinitionIndex = 64467;

	class ConfigHollowInteractConditionByEntityType : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* TemplateIDs; // 0x10
		::ProtoScript::HollowEntityType EntityType; // 0x18
		::System::Boolean SetInteractEntity; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYENTITYTYPE__CTOR_OFFSET))(this);
		}

		::PDFPKGIKEEJ* CreateCondition()
		{
			return ((::PDFPKGIKEEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONBYENTITYTYPE_CREATECONDITION_OFFSET))(this);
		}
	};
}
