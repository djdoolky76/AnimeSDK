#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_MODIFIABLECONTACTPAIR_GETACTORLINEARVELOCITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1F15AB80)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_GETACTORLINEARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F15AA30)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_GETCONTACTPATCH_OFFSET UNITYSDK_OFFSET(0x95ECF0)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_GETCONTACT_OFFSET UNITYSDK_OFFSET(0x95ECE0)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_GET_BODYVELOCITY_OFFSET UNITYSDK_OFFSET(0x95EBE0)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_GET_COLLIDERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x95EBC0)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_GET_CONTACTCOUNT_OFFSET UNITYSDK_OFFSET(0x90DCF0)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_GET_OTHERBODYVELOCITY_OFFSET UNITYSDK_OFFSET(0x95EC20)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_GET_OTHERCOLLIDERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x95EBD0)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_IGNORECONTACT_OFFSET UNITYSDK_OFFSET(0x95ECA0)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_RESOLVECOLLIDERINSTANCEID_OFFSET UNITYSDK_OFFSET(0x1F15A9D0)
#define UNITYENGINE_MODIFIABLECONTACTPAIR_SETMAXIMPULSE_OFFSET UNITYSDK_OFFSET(0x95EC60)

namespace UnityEngine
{
	inline static constexpr unsigned int ModifiableContactPair_TypeDefinitionIndex = 7797;

	struct alignas(4) ModifiableContactPair
	{
		::System::IntPtr actor; // 0x10
		::System::IntPtr otherActor; // 0x18
		::System::IntPtr shape; // 0x20
		::System::IntPtr otherShape; // 0x28
		::UnityEngine::Quaternion rotation; // 0x30
		::UnityEngine::Vector3 position; // 0x40
		::UnityEngine::Quaternion otherRotation; // 0x4C
		::UnityEngine::Vector3 otherPosition; // 0x5C
		::System::Int32 numContacts; // 0x68
		::System::Byte _padding0[0x4];
		::System::IntPtr contacts; // 0x70

		::System::Int32 get_colliderInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_GET_COLLIDERINSTANCEID_OFFSET))(this);
		}

		::System::Int32 get_otherColliderInstanceID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_GET_OTHERCOLLIDERINSTANCEID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_bodyVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_GET_BODYVELOCITY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_otherBodyVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_GET_OTHERBODYVELOCITY_OFFSET))(this);
		}

		::System::Int32 get_contactCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_GET_CONTACTCOUNT_OFFSET))(this);
		}

		::System::Void SetMaxImpulse(::System::Int32 i, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_SETMAXIMPULSE_OFFSET))(this, i, value);
		}

		::System::Void IgnoreContact(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_IGNORECONTACT_OFFSET))(this, i);
		}

		::PVOID GetContact(::System::Int32 index)
		{
			return ((::PVOID(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_GETCONTACT_OFFSET))(this, index);
		}

		::PVOID GetContactPatch()
		{
			return ((::PVOID(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_GETCONTACTPATCH_OFFSET))(this);
		}

		static ::System::Int32 ResolveColliderInstanceID(::System::IntPtr shapePtr)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_RESOLVECOLLIDERINSTANCEID_OFFSET))(shapePtr);
		}

		static ::UnityEngine::Vector3 GetActorLinearVelocity(::System::IntPtr actorPtr)
		{
			return ((::UnityEngine::Vector3(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_GETACTORLINEARVELOCITY_OFFSET))(actorPtr);
		}

		static ::System::Void GetActorLinearVelocity_Injected(::System::IntPtr actorPtr, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::System::IntPtr, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_MODIFIABLECONTACTPAIR_GETACTORLINEARVELOCITY_INJECTED_OFFSET))(actorPtr, ret);
		}
	};
}
