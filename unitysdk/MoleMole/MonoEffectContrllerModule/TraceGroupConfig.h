#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/GuidanceModule.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/TraceModule.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NADMKNEODPN.h"

namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_CLEARTARGET_OFFSET UNITYSDK_OFFSET(0x11939190)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x11938D70)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x11938DF0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x11938EA0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_RETARGET_OFFSET UNITYSDK_OFFSET(0x11938F90)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11939300)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int TraceGroupConfig_TypeDefinitionIndex = 58752;

	class TraceGroupConfig : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x7];
		::MoleMole::MonoEffectContrllerModule::TraceModule TraceModule; // 0x18
		::MoleMole::MonoEffectContrllerModule::GuidanceModule GuidanceModule; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONCREATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONDESTROYCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_ONUPDATECONTROLLER_OFFSET))(this, controller);
		}

		::System::Void Retarget(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller, ::NADMKNEODPN target)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*, ::NADMKNEODPN))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_RETARGET_OFFSET))(this, controller, target);
		}

		::System::Void ClearTarget(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_TRACEGROUPCONFIG_CLEARTARGET_OFFSET))(this, controller);
		}
	};
}
