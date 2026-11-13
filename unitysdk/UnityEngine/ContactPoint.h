#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Collider; }

#define UNITYENGINE_CONTACTPOINT_GETCOLLIDERBYINSTANCEID_OFFSET UNITYSDK_OFFSET(0x2017C860)
#define UNITYENGINE_CONTACTPOINT_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x3D73D50)
#define UNITYENGINE_CONTACTPOINT_GET_OTHERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x3F63CC0)
#define UNITYENGINE_CONTACTPOINT_GET_POINT_OFFSET UNITYSDK_OFFSET(0xAD88A0)
#define UNITYENGINE_CONTACTPOINT_GET_SEPARATION_OFFSET UNITYSDK_OFFSET(0x3F071C0)

namespace UnityEngine
{
	inline static constexpr unsigned int ContactPoint_TypeDefinitionIndex = 5328;

	struct alignas(4) ContactPoint
	{
		::UnityEngine::Vector3 m_Point; // 0x10
		::UnityEngine::Vector3 m_Normal; // 0x1C
		::System::Int32 m_ThisColliderInstanceID; // 0x28
		::System::Int32 m_OtherColliderInstanceID; // 0x2C
		::System::Single m_Separation; // 0x30
		::UnityEngine::Vector3 get_point()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GET_POINT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GET_NORMAL_OFFSET))(this);
		}

		::UnityEngine::Collider* get_otherCollider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GET_OTHERCOLLIDER_OFFSET))(this);
		}

		::System::Single get_separation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GET_SEPARATION_OFFSET))(this);
		}

		static ::UnityEngine::Collider* GetColliderByInstanceID(::System::Int32 a1)
		{
			return ((::UnityEngine::Collider*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTACTPOINT_GETCOLLIDERBYINSTANCEID_OFFSET))(a1);
		}

	};
}
