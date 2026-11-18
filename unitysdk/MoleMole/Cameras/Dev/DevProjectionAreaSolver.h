#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_BMCILJCDPGA_OFFSET UNITYSDK_OFFSET(0x11A42A60)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_CJHJCACPIDE_OFFSET UNITYSDK_OFFSET(0x11A43930)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_LNPGNHMLLGL_OFFSET UNITYSDK_OFFSET(0x11A475A0)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x11A47320)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_UPDATE_OFFSET UNITYSDK_OFFSET(0x11A42790)
#define MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x11A474F0)

namespace MoleMole::Cameras::Dev
{
	inline static constexpr unsigned int DevProjectionAreaSolver_TypeDefinitionIndex = 46141;

	class DevProjectionAreaSolver : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::Renderer*>* objectRenderer; // 0x18
		::UnityEngine::Collider* objectCollider; // 0x20
		::System::Single renderRatio; // 0x28
		::System::Single colliderRatio; // 0x2C
		::System::Single colliderRatio2; // 0x30
		::System::Boolean FBEOLJDLFFL; // 0x34
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GIJMEICICOH; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Single BMCILJCDPGA(::System::Single JFLDAALEMGB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_BMCILJCDPGA_OFFSET))(this, JFLDAALEMGB);
		}

		::System::Int32 LNPGNHMLLGL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_LNPGNHMLLGL_OFFSET))(this);
		}

		::System::Single CJHJCACPIDE(::System::Single JFLDAALEMGB)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_DEV_DEVPROJECTIONAREASOLVER_CJHJCACPIDE_OFFSET))(this, JFLDAALEMGB);
		}
	};
}
