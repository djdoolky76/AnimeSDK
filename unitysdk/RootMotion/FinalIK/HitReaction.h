#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/OffsetModifier.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace UnityEngine { class Collider; }

#define ROOTMOTION_FINALIK_HITREACTION_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0x1FED6290)
#define ROOTMOTION_FINALIK_HITREACTION_HIT_OFFSET UNITYSDK_OFFSET(0x1FED65F0)
#define ROOTMOTION_FINALIK_HITREACTION_ONMODIFYOFFSET_OFFSET UNITYSDK_OFFSET(0x1FED6340)
#define ROOTMOTION_FINALIK_HITREACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FED69E0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int HitReaction_TypeDefinitionIndex = 36810;

	class HitReaction : public ::RootMotion::FinalIK::OffsetModifier
	{
	public:
		::Il2CppArray<::System::Object*>* effectorHitPoints; // 0x30
		::Il2CppArray<::System::Object*>* boneHitPoints; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION__CTOR_OFFSET))(this);
		}

		::System::Boolean get_inProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_GET_INPROGRESS_OFFSET))(this);
		}

		::System::Void OnModifyOffset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_ONMODIFYOFFSET_OFFSET))(this);
		}

		::System::Void Hit(::UnityEngine::Collider* collider, ::UnityEngine::Vector3 force, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_HITREACTION_HIT_OFFSET))(this, collider, force, point);
		}
	};
}
