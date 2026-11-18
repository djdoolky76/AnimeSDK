#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseConfigSoundAction.h"

class EIOKLKEJAME;

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING_EXECUTEANDENDSCOPE_1_OFFSET UNITYSDK_OFFSET(0x190A5710)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING_EXECUTEANDENDSCOPE_OFFSET UNITYSDK_OFFSET(0x190A56A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING__CTOR_OFFSET UNITYSDK_OFFSET(0x190A57B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionIntending_TypeDefinitionIndex = 75716;

	class ConfigSoundActionIntending : public ::MoleMole::Config::BaseConfigSoundAction
	{
	public:
		::System::UInt32 scopeToken; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING__CTOR_OFFSET))(this);
		}

		::System::Void ExecuteAndEndScope(::EIOKLKEJAME* context)
		{
			return ((::System::Void(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING_EXECUTEANDENDSCOPE_OFFSET))(this, context);
		}

		::System::Void ExecuteAndEndScope_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONINTENDING_EXECUTEANDENDSCOPE_1_OFFSET))(this);
		}
	};
}
