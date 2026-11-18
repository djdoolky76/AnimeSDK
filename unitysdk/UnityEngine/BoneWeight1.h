#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_BONEWEIGHT1_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x913860)
#define UNITYENGINE_BONEWEIGHT1_EQUALS_OFFSET UNITYSDK_OFFSET(0x9137D0)
#define UNITYENGINE_BONEWEIGHT1_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9138B0)
#define UNITYENGINE_BONEWEIGHT1_GET_BONEINDEX_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define UNITYENGINE_BONEWEIGHT1_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x358A70)

namespace UnityEngine
{
	inline static constexpr unsigned int BoneWeight1_TypeDefinitionIndex = 5268;

	struct alignas(4) BoneWeight1
	{
		::System::Single m_Weight; // 0x10
		::System::Int32 m_BoneIndex; // 0x14

		::System::Single get_weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_GET_WEIGHT_OFFSET))(this);
		}

		::System::Int32 get_boneIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_GET_BONEINDEX_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_EQUALS_OFFSET))(this, other);
		}

		/*
		::System::Boolean Equals_1(::UnityEngine::BoneWeight1 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::BoneWeight1))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_EQUALS_1_OFFSET))(this, other);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT1_GETHASHCODE_OFFSET))(this);
		}
	};
}
