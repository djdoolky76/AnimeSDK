#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace RootMotion::FinalIK { class InteractionTrigger_CameraPosition; }
namespace RootMotion::FinalIK { class InteractionTrigger_CharacterPosition; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_RANGE_ISINRANGE_OFFSET UNITYSDK_OFFSET(0x1FD2C000)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_RANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD2C0D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionTrigger_Range_TypeDefinitionIndex = 36892;

	class InteractionTrigger_Range : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Boolean show; // 0x18
		::System::Byte _padding0[0x7];
		::RootMotion::FinalIK::InteractionTrigger_CharacterPosition* characterPosition; // 0x20
		::RootMotion::FinalIK::InteractionTrigger_CameraPosition* cameraPosition; // 0x28
		::Il2CppArray<::System::Object*>* interactions; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_RANGE__CTOR_OFFSET))(this);
		}

		::System::Boolean IsInRange(::UnityEngine::Transform* character, ::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit raycastHit, ::UnityEngine::Transform* trigger, ::System::Single& maxError)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::RaycastHit, ::UnityEngine::Transform*, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_RANGE_ISINRANGE_OFFSET))(this, character, raycastFrom, raycastHit, trigger, maxError);
		}
	};
}
