#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_LOCKGAMEOBJROTATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x1192CCE0)
#define MOLEMOLE_LOCKGAMEOBJROTATION_DISABLELOCK_OFFSET UNITYSDK_OFFSET(0x1192D090)
#define MOLEMOLE_LOCKGAMEOBJROTATION_ENBALELOCK_OFFSET UNITYSDK_OFFSET(0x1192CEF0)
#define MOLEMOLE_LOCKGAMEOBJROTATION_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1192CD60)
#define MOLEMOLE_LOCKGAMEOBJROTATION_RESET_OFFSET UNITYSDK_OFFSET(0x1192D0E0)
#define MOLEMOLE_LOCKGAMEOBJROTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1192D260)

namespace MoleMole
{
	inline static constexpr unsigned int LockGameObjRotation_TypeDefinitionIndex = 55682;

	class LockGameObjRotation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Quaternion IPDGBCDKFBA; // 0x18
		::UnityEngine::Transform* BPLGIIGPIGK; // 0x28
		::UnityEngine::Quaternion MNBPNLFMJHL; // 0x30
		::System::Boolean JPGMGOLKIJJ; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_LATEUPDATE_OFFSET))(this);
		}

		::System::Void EnbaleLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_ENBALELOCK_OFFSET))(this);
		}

		::System::Void DisableLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_DISABLELOCK_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOCKGAMEOBJROTATION_RESET_OFFSET))(this);
		}
	};
}
