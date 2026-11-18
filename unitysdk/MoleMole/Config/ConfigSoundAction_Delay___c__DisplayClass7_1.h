#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DODHDNJCLCI;

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A5F30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_1__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x1B8A5F40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay___c__DisplayClass7_1_TypeDefinitionIndex = 50614;

	template <typename T>
	class ConfigSoundAction_Delay___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::DODHDNJCLCI* copyContext; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_1__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_1__EXECUTE_B__0_OFFSET))(this);
		}
	};
}
