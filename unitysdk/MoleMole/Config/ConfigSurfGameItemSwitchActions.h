#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

class MBDIFFENBJO;
namespace MoleMole::Config { class ConfigSurfGameItemPredicate; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xFFE36E0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFFE3640)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_INTERNALEXECUTE_OFFSET UNITYSDK_OFFSET(0xFFE3760)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE3810)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS___BASE_EXECUTE_OFFSET UNITYSDK_OFFSET(0xFFE3820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemSwitchActions_TypeDefinitionIndex = 62283;

	class ConfigSurfGameItemSwitchActions : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* FalseActions; // 0x10
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* TrueActions; // 0x18
		::MoleMole::Config::ConfigSurfGameItemPredicate* Predicate; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_OFFSET))(this);
		}

		::System::Void Execute_1(::MBDIFFENBJO* source)
		{
			return ((::System::Void(*)(::PVOID, ::MBDIFFENBJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_EXECUTE_1_OFFSET))(this, source);
		}

		::System::Void InternalExecute(::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* actions, ::MBDIFFENBJO* source)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>*, ::MBDIFFENBJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS_INTERNALEXECUTE_OFFSET))(this, actions, source);
		}

		::System::Void __base_Execute(::MBDIFFENBJO* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MBDIFFENBJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMSWITCHACTIONS___BASE_EXECUTE_OFFSET))(this, P0);
		}
	};
}
