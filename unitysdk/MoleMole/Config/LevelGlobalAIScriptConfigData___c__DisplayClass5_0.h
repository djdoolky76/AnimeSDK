#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalAIScriptConfig; }
namespace System { class Action; }

#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B3440)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA___C__DISPLAYCLASS5_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x1B8B3450)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIScriptConfigData___c__DisplayClass5_0_TypeDefinitionIndex = 86520;

	class LevelGlobalAIScriptConfigData___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_b__0(::MoleMole::Config::LevelGlobalAIScriptConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalAIScriptConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA___C__DISPLAYCLASS5_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
		}
	};
}
