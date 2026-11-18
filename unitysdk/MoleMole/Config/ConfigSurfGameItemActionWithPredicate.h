#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

class MBDIFFENBJO;
namespace MoleMole::Config { class ConfigSurfGameItemPredicate; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x1B92CCD0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B92CC80)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92CDA0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE___BASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B92CDB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemActionWithPredicate_TypeDefinitionIndex = 49278;

	class ConfigSurfGameItemActionWithPredicate : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* Actions; // 0x10
		::MoleMole::Config::ConfigSurfGameItemPredicate* Predicate; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_OFFSET))(this);
		}

		::System::Void Execute_1(::MBDIFFENBJO* source)
		{
			return ((::System::Void(*)(::PVOID, ::MBDIFFENBJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE_EXECUTE_1_OFFSET))(this, source);
		}

		::System::Void __base_Execute(::MBDIFFENBJO* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MBDIFFENBJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTIONWITHPREDICATE___BASE_EXECUTE_OFFSET))(this, P0);
		}
	};
}
