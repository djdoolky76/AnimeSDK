#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowInteractCondition.h"

class PDFPKGIKEEJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONOR_CREATECONDITION_OFFSET UNITYSDK_OFFSET(0xFFD5200)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONOR__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD52E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowInteractConditionOr_TypeDefinitionIndex = 64943;

	class ConfigHollowInteractConditionOr : public ::MoleMole::Config::ConfigHollowInteractCondition
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigHollowInteractCondition*>* conditions; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONOR__CTOR_OFFSET))(this);
		}

		::PDFPKGIKEEJ* CreateCondition()
		{
			return ((::PDFPKGIKEEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWINTERACTCONDITIONOR_CREATECONDITION_OFFSET))(this);
		}
	};
}
