#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/ZNet/MouseOrbit_AKPILIPLHHJ.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_ZNET_MOUSEORBIT_CAPTUREORBITSTATE_OFFSET UNITYSDK_OFFSET(0x1058F860)
#define MOLEMOLE_ZNET_MOUSEORBIT_DAFLHFGODJM_OFFSET UNITYSDK_OFFSET(0x10590340)
#define MOLEMOLE_ZNET_MOUSEORBIT_HIINMKGPMFE_OFFSET UNITYSDK_OFFSET(0x1058F960)
#define MOLEMOLE_ZNET_MOUSEORBIT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1058FD90)
#define MOLEMOLE_ZNET_MOUSEORBIT_RESTOREORBITSTATE_OFFSET UNITYSDK_OFFSET(0x1058F8E0)
#define MOLEMOLE_ZNET_MOUSEORBIT_START_OFFSET UNITYSDK_OFFSET(0x1058F550)
#define MOLEMOLE_ZNET_MOUSEORBIT__CTOR_OFFSET UNITYSDK_OFFSET(0x10590410)

namespace MoleMole::ZNet
{
	inline static constexpr unsigned int MouseOrbit_TypeDefinitionIndex = 69737;

	class MouseOrbit : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		::System::Single distance; // 0x20
		::System::Single xSpeed; // 0x24
		::System::Single ySpeed; // 0x28
		::System::Single yMinLimit; // 0x2C
		::System::Single yMaxLimit; // 0x30
		::System::Single HAAEBCOBKFF; // 0x34
		::System::Single BFMMEICFNCD; // 0x38
		::UnityEngine::Vector3 CEOFPLEPPEG; // 0x3C
		::UnityEngine::Quaternion GDCMEKLODPA; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_START_OFFSET))(this);
		}

		::MoleMole::ZNet::MouseOrbit_AKPILIPLHHJ CaptureOrbitState()
		{
			return ((::MoleMole::ZNet::MouseOrbit_AKPILIPLHHJ(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_CAPTUREORBITSTATE_OFFSET))(this);
		}

		::System::Void RestoreOrbitState(::MoleMole::ZNet::MouseOrbit_AKPILIPLHHJ JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZNet::MouseOrbit_AKPILIPLHHJ))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_RESTOREORBITSTATE_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_LATEUPDATE_OFFSET))(this);
		}

		static ::System::Single DAFLHFGODJM(::System::Single ELHMOANKHFM, ::System::Single GDBANLBHNJK, ::System::Single DNFNKBNBJHM)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_DAFLHFGODJM_OFFSET))(ELHMOANKHFM, GDBANLBHNJK, DNFNKBNBJHM);
		}

		::System::Void HIINMKGPMFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_MOUSEORBIT_HIINMKGPMFE_OFFSET))(this);
		}
	};
}
