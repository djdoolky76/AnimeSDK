#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class EAKHJNIMJIL;
class GEIHCPAOKKK;
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS_LKHPNCHKMHB_OFFSET UNITYSDK_OFFSET(0x10D41410)
#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS_STARTATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x10D41300)
#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS_STOPATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x10D418E0)
#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS_UPDATEATTACHPOINTS_OFFSET UNITYSDK_OFFSET(0x10D41950)
#define MOLEMOLE_MONOMORPHBALLATTACHPOINTS__CTOR_OFFSET UNITYSDK_OFFSET(0x10D42410)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMorphBallAttachPoints_TypeDefinitionIndex = 79685;

	class MonoMorphBallAttachPoints : public ::UnityEngine::MonoBehaviour
	{
	public:
		::GEIHCPAOKKK* OPOLMJLMHCD; // 0x18
		::EAKHJNIMJIL* OGGEJMOIOEE; // 0x20
		::UnityEngine::Transform* LHGBIJDBIGC; // 0x28
		::UnityEngine::Transform* LDMBBICNNIF; // 0x30
		::UnityEngine::Transform* EBDBHJEALNC; // 0x38
		::UnityEngine::Quaternion ENLOEFNKJGN; // 0x40
		::System::Single _directionRotationDamping; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS__CTOR_OFFSET))(this);
		}

		::System::Void StartAttachPoints(::GEIHCPAOKKK* LHPFMGBDFPN, ::EAKHJNIMJIL* HJBKPIBHMIO)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::EAKHJNIMJIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS_STARTATTACHPOINTS_OFFSET))(this, LHPFMGBDFPN, HJBKPIBHMIO);
		}

		::System::Void StopAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS_STOPATTACHPOINTS_OFFSET))(this);
		}

		::System::Void UpdateAttachPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS_UPDATEATTACHPOINTS_OFFSET))(this);
		}

		::System::Void LKHPNCHKMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMORPHBALLATTACHPOINTS_LKHPNCHKMHB_OFFSET))(this);
		}
	};
}
