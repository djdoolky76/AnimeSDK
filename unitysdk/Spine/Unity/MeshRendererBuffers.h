#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Spine/Unity/SubmeshInstruction.h"

namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class MeshRendererBuffers_SmartMesh; }
namespace Spine::Unity { template <typename T> class DoubleBuffered_1; }
namespace UnityEngine { class Material; }

#define SPINE_UNITY_MESHRENDERERBUFFERS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F477280)
#define SPINE_UNITY_MESHRENDERERBUFFERS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F4772F0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_EVALUATEMATERIALSCHANGED_OFFSET UNITYSDK_OFFSET(0x1F476F70)
#define SPINE_UNITY_MESHRENDERERBUFFERS_GATHERMATERIALSFROMINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1F476DD0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_GETCURRENTMESH_OFFSET UNITYSDK_OFFSET(0x1F477220)
#define SPINE_UNITY_MESHRENDERERBUFFERS_GETNEXTMESH_OFFSET UNITYSDK_OFFSET(0x1F477250)
#define SPINE_UNITY_MESHRENDERERBUFFERS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F476BF0)
#define SPINE_UNITY_MESHRENDERERBUFFERS_UPDATESHAREDMATERIALSARRAY_OFFSET UNITYSDK_OFFSET(0x1F477130)
#define SPINE_UNITY_MESHRENDERERBUFFERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1F477370)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshRendererBuffers_TypeDefinitionIndex = 38193;

	class MeshRendererBuffers : public ::System::Object
	{
	public:
		::Spine::Unity::DoubleBuffered_1<::System::Object*>* doubleBufferedMesh; // 0x10
		::Spine::ExposedList_1<::UnityEngine::Material*>* submeshMaterials; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* sharedMaterials; // 0x20
		::System::Int32 previousMaterialHash; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_INITIALIZE_OFFSET))(this);
		}

		::System::Void GatherMaterialsFromInstructions(::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>* instructions, ::System::Boolean& materialsChanged)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Unity::SubmeshInstruction>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_GATHERMATERIALSFROMINSTRUCTIONS_OFFSET))(this, instructions, materialsChanged);
		}

		::Il2CppArray<::UnityEngine::Material*>* UpdateSharedMaterialsArray()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_UPDATESHAREDMATERIALSARRAY_OFFSET))(this);
		}

		::Spine::Unity::MeshRendererBuffers_SmartMesh* GetCurrentMesh()
		{
			return ((::Spine::Unity::MeshRendererBuffers_SmartMesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_GETCURRENTMESH_OFFSET))(this);
		}

		::Spine::Unity::MeshRendererBuffers_SmartMesh* GetNextMesh()
		{
			return ((::Spine::Unity::MeshRendererBuffers_SmartMesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_GETNEXTMESH_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_DISPOSE_OFFSET))(this);
		}

		::System::Boolean EvaluateMaterialsChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHRENDERERBUFFERS_EVALUATEMATERIALSCHANGED_OFFSET))(this);
		}
	};
}
