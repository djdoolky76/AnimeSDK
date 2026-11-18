#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class CGBGBGOGEMK;
class DODHDNJCLCI;
class EIOKLKEJAME;
class IOHLHLGNLBO;
namespace MoleMole::Config { class ConfigSoundAction_Delay; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x190A60C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS10_0__EXECUTEPAUSABLE_B__0_OFFSET UNITYSDK_OFFSET(0x190A60D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS10_0__EXECUTEPAUSABLE_B__1_OFFSET UNITYSDK_OFFSET(0x190A6250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay___c__DisplayClass10_0_TypeDefinitionIndex = 50612;

	class ConfigSoundAction_Delay___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::IOHLHLGNLBO* audioManager; // 0x10
		::DODHDNJCLCI* copyContext; // 0x18
		::CGBGBGOGEMK* syncs; // 0x20
		::EIOKLKEJAME* exeContext; // 0x28
		::MoleMole::Config::ConfigSoundAction_Delay* __4__this; // 0x30
		::System::Boolean interruptible; // 0x38
		::System::Byte _padding0[0x3];
		::Foundation::Coroutine::CoroutineHandle handle; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecutePausable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS10_0__EXECUTEPAUSABLE_B__0_OFFSET))(this);
		}

		::System::Void _ExecutePausable_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS10_0__EXECUTEPAUSABLE_B__1_OFFSET))(this);
		}
	};
}
