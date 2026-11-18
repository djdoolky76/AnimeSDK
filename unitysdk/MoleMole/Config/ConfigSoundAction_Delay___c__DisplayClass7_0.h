#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IOHLHLGNLBO;
namespace MoleMole::Config { class ConfigSoundAction_Delay; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A5F20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay___c__DisplayClass7_0_TypeDefinitionIndex = 50613;

	class ConfigSoundAction_Delay___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSoundAction_Delay* __4__this; // 0x10
		::IOHLHLGNLBO* audioManager; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}
	};
}
