#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DODHDNJCLCI;

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A6120)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_2__EXECUTE_B__1_OFFSET UNITYSDK_OFFSET(0x1B8A6130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay___c__DisplayClass7_2_TypeDefinitionIndex = 50615;

	template <typename T1, typename T2>
	class ConfigSoundAction_Delay___c__DisplayClass7_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::DODHDNJCLCI* copyContext; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_2__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS7_2__EXECUTE_B__1_OFFSET))(this);
		}
	};
}
