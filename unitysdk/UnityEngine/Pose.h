#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_POSE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3E0A10)
#define UNITYENGINE_POSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1A660)
#define UNITYENGINE_POSE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C71F60)
#define UNITYENGINE_POSE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C71E80)
#define UNITYENGINE_POSE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C71FF0)
#define UNITYENGINE_POSE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C71E70)

namespace UnityEngine
{
	inline static constexpr unsigned int Pose_TypeDefinitionIndex = 4400;

	struct alignas(4) Pose
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Quaternion rotation; // 0x1C
		static ::UnityEngine::Pose* StaticGet_k_Identity()
		{
			return (::UnityEngine::Pose*)UnitySDK::FromName("UnityEngine", "Pose")->GetStaticField(0x3D30);
		}

		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_POSE_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_POSE_CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POSE_TOSTRING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_POSE_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::Pose a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Pose))((::PBYTE)hIl2Cpp + UNITYENGINE_POSE_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_POSE_GETHASHCODE_OFFSET))(this);
		}

	};
}
