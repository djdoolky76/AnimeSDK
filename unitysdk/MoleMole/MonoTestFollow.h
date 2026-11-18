#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace DG::Tweening { class Tween; }
namespace System { class EventArgs; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOTESTFOLLOW_AWAKE_OFFSET UNITYSDK_OFFSET(0x12498D20)
#define MOLEMOLE_MONOTESTFOLLOW_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12499170)
#define MOLEMOLE_MONOTESTFOLLOW_NBFPHBOHJMG_OFFSET UNITYSDK_OFFSET(0x12499630)
#define MOLEMOLE_MONOTESTFOLLOW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12499450)
#define MOLEMOLE_MONOTESTFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x124995D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTestFollow_TypeDefinitionIndex = 41079;

	class MonoTestFollow : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		::UnityEngine::Vector3 BOGPAHGJOJK; // 0x20
		::UnityEngine::Vector3 GOABFNGPNAO; // 0x2C
		::DG::Tweening::Tween* FKLGCKPKCJJ; // 0x38
		::System::Boolean hasDamping; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single dampingTime; // 0x44
		::System::Boolean MHDFJLMGADA; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW_AWAKE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW_ONDESTROY_OFFSET))(this);
		}

		::System::Void NBFPHBOHJMG(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTESTFOLLOW_NBFPHBOHJMG_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
