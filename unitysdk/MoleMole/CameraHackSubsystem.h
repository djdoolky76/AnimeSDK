#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

class OGJNHDLJIBM;
namespace MoleMole { class HackEntrySubSystem; }
namespace MoleMole::Config { class ConfigHack; }

#define MOLEMOLE_CAMERAHACKSUBSYSTEM_INITCAMERAROTATIONCACHE_OFFSET UNITYSDK_OFFSET(0xFFB6530)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ISCAMERAMOVELIMITED_OFFSET UNITYSDK_OFFSET(0xFFB6CE0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFFB6400)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFFB6810)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFFB6960)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_POSSESSED_OFFSET UNITYSDK_OFFSET(0xFFB6100)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xFFB5E00)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET UNITYSDK_OFFSET(0xFFB5E70)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_UNPOSSESSED_OFFSET UNITYSDK_OFFSET(0xFFB6270)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xFFB60A0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFFB71C0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xFFB71E0)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xFFB7270)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xFFB7300)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xFFB7390)
#define MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET UNITYSDK_OFFSET(0xFFB7420)

namespace MoleMole
{
	inline static constexpr unsigned int CameraHackSubsystem_TypeDefinitionIndex = 41786;

	class CameraHackSubsystem
	{
	public:
		// static const ::System::Single CameraMoveLimitDeltaThreshold; // 0x0
		::MoleMole::HackEntrySubSystem* _hackEntrySubSystem; // 0x10
		::MoleMole::Config::ConfigHack* _configHack; // 0x18
		::OGJNHDLJIBM* _generalEventCollection; // 0x20
		::System::Boolean _isNewOpenHackEntrySubSystem; // 0x28
		::System::Boolean _isCameraMoveLimitSoundTriggered; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single _lastCameraPitch; // 0x2C
		::System::Single _lastCameraYaw; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void Possessed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_POSSESSED_OFFSET))(this);
		}

		::System::Void UnPossessed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_UNPOSSESSED_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void InitCameraRotationCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_INITCAMERAROTATIONCACHE_OFFSET))(this);
		}

		::System::Boolean IsCameraMoveLimited(::UnityEngine::Vector2 inputDelta)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_ISCAMERAMOVELIMITED_OFFSET))(this, inputDelta);
		}

		::System::Void RegisterUIEventNotifyType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM_REGISTERUIEVENTNOTIFYTYPE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_RegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_REGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}

		::System::Void __base_UnRegisterEventSystemCallBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAHACKSUBSYSTEM___BASE_UNREGISTEREVENTSYSTEMCALLBACK_OFFSET))(this);
		}
	};
}
