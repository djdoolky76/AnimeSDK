#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_BONEWEIGHT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x417AEB0)
#define UNITYENGINE_BONEWEIGHT_EQUALS_OFFSET UNITYSDK_OFFSET(0x417ADE0)
#define UNITYENGINE_BONEWEIGHT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x417AF50)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX0_OFFSET UNITYSDK_OFFSET(0x410ACF0)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX1_OFFSET UNITYSDK_OFFSET(0x3558B30)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX2_OFFSET UNITYSDK_OFFSET(0x2EEE5A0)
#define UNITYENGINE_BONEWEIGHT_GET_BONEINDEX3_OFFSET UNITYSDK_OFFSET(0x374BB80)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT0_OFFSET UNITYSDK_OFFSET(0x39CC090)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT1_OFFSET UNITYSDK_OFFSET(0x39CC0F0)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT2_OFFSET UNITYSDK_OFFSET(0x40E9E60)
#define UNITYENGINE_BONEWEIGHT_GET_WEIGHT3_OFFSET UNITYSDK_OFFSET(0x4103AB0)

namespace UnityEngine
{
	inline static constexpr unsigned int BoneWeight_TypeDefinitionIndex = 17643;

	struct alignas(4) BoneWeight
	{
		::System::Single m_Weight0; // 0x10
		::System::Single m_Weight1; // 0x14
		::System::Single m_Weight2; // 0x18
		::System::Single m_Weight3; // 0x1C
		::System::Int32 m_BoneIndex0; // 0x20
		::System::Int32 m_BoneIndex1; // 0x24
		::System::Int32 m_BoneIndex2; // 0x28
		::System::Int32 m_BoneIndex3; // 0x2C

		::System::Int32 get_boneIndex2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX2_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GETHASHCODE_OFFSET))(this);
		}

		::System::Single get_weight3()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT3_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::UnityEngine::BoneWeight BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::BoneWeight))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}
		*/

		::System::Boolean Equals_1(::System::Object* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_EQUALS_1_OFFSET))(this, BEEE7A5A60941632);
		}

		::System::Int32 get_boneIndex3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX3_OFFSET))(this);
		}

		::System::Single get_weight2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT2_OFFSET))(this);
		}

		::System::Single get_weight0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT0_OFFSET))(this);
		}

		::System::Int32 get_boneIndex0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX0_OFFSET))(this);
		}

		::System::Single get_weight1()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_WEIGHT1_OFFSET))(this);
		}

		::System::Int32 get_boneIndex1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BONEWEIGHT_GET_BONEINDEX1_OFFSET))(this);
		}
	};
}
