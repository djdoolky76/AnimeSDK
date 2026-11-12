#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace UnityEngine { class Mesh; }

#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1FFBF530)
#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFBFA60)
#define SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FFBF9E0)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshRendererBuffers_SmartMesh_TypeDefinitionIndex = 46159;

	class MeshRendererBuffers_SmartMesh : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* mesh; // 0x10
		::Spine::Unity::SkeletonRendererInstruction* instructionUsed; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_SMARTMESH_DISPOSE_OFFSET))(this);
		}

	};
}
