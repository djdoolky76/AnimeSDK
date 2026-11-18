#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AMGLMCOIEIK_PNDLNJPDCFM.h"
#include "unitysdk/NNBMBHMDPFH.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigMovement; }
namespace MoleMole::Config { class ConfigRotation; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_BCGJFHCJGGP_OFFSET UNITYSDK_OFFSET(0x7C59F0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_DGHKIIOLJCD_OFFSET UNITYSDK_OFFSET(0x7C59A0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_DHOENMOOPHC_OFFSET UNITYSDK_OFFSET(0x7C5A40)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_FFBIJLFKHJN_OFFSET UNITYSDK_OFFSET(0x180FA510)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_FLEDMHDKNKC_OFFSET UNITYSDK_OFFSET(0x7C5A90)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONCREATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x7C58D0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONDESTROYCONTROLLER_OFFSET UNITYSDK_OFFSET(0x7C58E0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONUPDATECONTROLLER_OFFSET UNITYSDK_OFFSET(0x7C5950)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int BulletModule_TypeDefinitionIndex = 81039;

	struct alignas(8) BulletModule
	{
		::System::Single TargetTrackSpeed; // 0x10
		::System::Boolean NeedsProxyReset; // 0x14
		::System::Byte _padding0[0x3];
		::AMGLMCOIEIK_PNDLNJPDCFM FollowMode; // 0x18
		::System::Boolean FixFirstFrameToEmitter; // 0x1C
		::System::Boolean InheritInertia; // 0x1D
		::System::Boolean UseEmitterInherit; // 0x1E
		::System::Byte _padding1[0x1];
		::System::Single InertiaScale; // 0x20
		::System::Single SpeedDecayTime; // 0x24
		::System::Single MinSpeedLimit; // 0x28
		::NNBMBHMDPFH DirectionMode; // 0x2C
		::MoleMole::Config::ConfigMovement* OverrideConfigMovement; // 0x30
		::MoleMole::Config::ConfigRotation* OverrideConfigRoatation; // 0x38

		::System::Void OnCreateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONCREATECONTROLLER_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Void OnDestroyController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONDESTROYCONTROLLER_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Void OnUpdateController(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_ONUPDATECONTROLLER_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Void DGHKIIOLJCD(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_DGHKIIOLJCD_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Void BCGJFHCJGGP(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_BCGJFHCJGGP_OFFSET))(this, NCIMBHDKIJM);
		}

		static ::System::Void FFBIJLFKHJN(::UnityEngine::GameObject* JEIDPPCEHLD)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_FFBIJLFKHJN_OFFSET))(JEIDPPCEHLD);
		}

		::System::Void DHOENMOOPHC(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_DHOENMOOPHC_OFFSET))(this, NCIMBHDKIJM);
		}

		::System::Void FLEDMHDKNKC(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* NCIMBHDKIJM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_BULLETMODULE_FLEDMHDKNKC_OFFSET))(this, NCIMBHDKIJM);
		}
	};
}
