#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }
namespace UnityEngine::Events { class UnityEvent; }

#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_INTERACTIONEVENT_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1FE323C0)
#define ROOTMOTION_FINALIK_INTERACTIONOBJECT_INTERACTIONEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE324B0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionObject_InteractionEvent_TypeDefinitionIndex = 36800;

	class InteractionObject_InteractionEvent : public ::System::Object
	{
	public:
		::System::Single time; // 0x10
		::System::Boolean pause; // 0x14
		::System::Boolean pickUp; // 0x15
		::System::Byte _padding0[0x2];
		::Il2CppArray<::System::Object*>* animations; // 0x18
		::Il2CppArray<::System::Object*>* messages; // 0x20
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_INTERACTIONEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Activate(::UnityEngine::Transform* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONOBJECT_INTERACTIONEVENT_ACTIVATE_OFFSET))(this, t);
		}
	};
}
