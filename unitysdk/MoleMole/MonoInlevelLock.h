#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class GEIHCPAOKKK;
namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOINLEVELLOCK_AHIACIEOACA_OFFSET UNITYSDK_OFFSET(0x1193B9A0)
#define MOLEMOLE_MONOINLEVELLOCK_GET_BOUNDS_OFFSET UNITYSDK_OFFSET(0x1193B520)
#define MOLEMOLE_MONOINLEVELLOCK_JIOLBHIDFKJ_OFFSET UNITYSDK_OFFSET(0x1193B750)
#define MOLEMOLE_MONOINLEVELLOCK_LNPPJECENMM_OFFSET UNITYSDK_OFFSET(0x1193BCB0)
#define MOLEMOLE_MONOINLEVELLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1193B310)
#define MOLEMOLE_MONOINLEVELLOCK_RESET_OFFSET UNITYSDK_OFFSET(0x1193B680)
#define MOLEMOLE_MONOINLEVELLOCK_SETLOCKFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x1193B630)
#define MOLEMOLE_MONOINLEVELLOCK_START_OFFSET UNITYSDK_OFFSET(0x1193B0D0)
#define MOLEMOLE_MONOINLEVELLOCK_UPDATEPOSITION_OFFSET UNITYSDK_OFFSET(0x1193B5A0)
#define MOLEMOLE_MONOINLEVELLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1193B6F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInlevelLock_TypeDefinitionIndex = 68818;

	class MonoInlevelLock : public ::UnityEngine::MonoBehaviour
	{
	public:
		::GEIHCPAOKKK* EKHKNFILMGJ; // 0x18
		::UnityEngine::Transform* IHPBAGNHMNM; // 0x20
		::UnityEngine::GameObject* IAFAOELGMOM; // 0x28
		::System::Boolean EELHICINOAE; // 0x30
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 BENOIMLCENN; // 0x34
		::UnityEngine::RectTransform* _rectTransformRef; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::Bounds get_Bounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_GET_BOUNDS_OFFSET))(this);
		}

		::System::Void UpdatePosition(::UnityEngine::Vector2 ILOHHLNGEHM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_UPDATEPOSITION_OFFSET))(this, ILOHHLNGEHM);
		}

		::System::Void SetLockFollowTarget(::MoleMole::Battle::Entity* CMNMGDODFGE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_SETLOCKFOLLOWTARGET_OFFSET))(this, CMNMGDODFGE);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_RESET_OFFSET))(this);
		}

		::System::Boolean JIOLBHIDFKJ(::UnityEngine::Bounds GOFCNJELMHH, ::UnityEngine::Vector3 BAECLPHLLHO, ::System::Single DIJADIGAGCA, ::UnityEngine::Vector2& LLKGCLCNNAJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_JIOLBHIDFKJ_OFFSET))(this, GOFCNJELMHH, BAECLPHLLHO, DIJADIGAGCA, LLKGCLCNNAJ);
		}

		::System::Void AHIACIEOACA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_AHIACIEOACA_OFFSET))(this);
		}

		::System::Void LNPPJECENMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELLOCK_LNPPJECENMM_OFFSET))(this);
		}
	};
}
