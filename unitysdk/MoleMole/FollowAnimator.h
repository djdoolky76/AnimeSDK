#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_1_OFFSET UNITYSDK_OFFSET(0x16244F50)
#define MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x16244EC0)
#define MOLEMOLE_FOLLOWANIMATOR_STARTFOLLOW_OFFSET UNITYSDK_OFFSET(0x16244FB0)
#define MOLEMOLE_FOLLOWANIMATOR_STOPFOLLOW_OFFSET UNITYSDK_OFFSET(0x16244FF0)
#define MOLEMOLE_FOLLOWANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16245030)

namespace MoleMole
{
	inline static constexpr unsigned int FollowAnimator_TypeDefinitionIndex = 45977;

	class FollowAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::SkinnedMeshRenderer* selfRenderer; // 0x18
		::UnityEngine::Transform* selfRoot; // 0x20
		::UnityEngine::Animator* OOHFMBODBMM; // 0x28
		::UnityEngine::SkinnedMeshRenderer* PHNLGLAANGB; // 0x30
		::UnityEngine::Transform* LKLBCJHLNOG; // 0x38
		::System::Boolean follow; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void SetFollowTarget(::UnityEngine::Animator* BKOLCDPOJAL, ::UnityEngine::SkinnedMeshRenderer* OCFHGOGFGPE)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_OFFSET))(this, BKOLCDPOJAL, OCFHGOGFGPE);
		}

		::System::Void SetFollowTarget_1(::UnityEngine::Animator* BKOLCDPOJAL, ::UnityEngine::Transform* FECLBPANOFP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR_SETFOLLOWTARGET_1_OFFSET))(this, BKOLCDPOJAL, FECLBPANOFP);
		}

		::System::Void StartFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR_STARTFOLLOW_OFFSET))(this);
		}

		::System::Void StopFollow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWANIMATOR_STOPFOLLOW_OFFSET))(this);
		}
	};
}
