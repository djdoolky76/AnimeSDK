#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Spine::Unity { class MeshGenerator; }

#define SPINE_UNITY_MESHGENERATORBUFFERS_GET_UV2BUFFER_OFFSET UNITYSDK_OFFSET(0x996940)
#define SPINE_UNITY_MESHGENERATORBUFFERS_GET_UV3BUFFER_OFFSET UNITYSDK_OFFSET(0x996990)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGeneratorBuffers_TypeDefinitionIndex = 38190;

	struct alignas(8) MeshGeneratorBuffers
	{
		::System::Int32 vertexCount; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* vertexBuffer; // 0x18
		::Il2CppArray<::UnityEngine::Vector2>* uvBuffer; // 0x20
		::Il2CppArray<::UnityEngine::Color32>* colorBuffer; // 0x28
		::Spine::Unity::MeshGenerator* meshGenerator; // 0x30

		::Il2CppArray<::UnityEngine::Vector2>* get_uv2Buffer()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORBUFFERS_GET_UV2BUFFER_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_uv3Buffer()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATORBUFFERS_GET_UV3BUFFER_OFFSET))(this);
		}
	};
}
