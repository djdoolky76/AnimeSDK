#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/BoneWeight.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_IVertexAndTriangleProcessor; }
namespace DigitalOpus::MB::Core { class MB3_MeshCombinerSingle_MB_DynamicGameObject; }
namespace DigitalOpus::MB::Core { class MB_IMeshBakerSettings; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_ADDBONESTONEWBONESARRAYANDADJUSTBWINDEXES1_OFFSET UNITYSDK_OFFSET(0x1F92E690)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_ALLOCATEANDSETUPSMRDATASTRUCTURES_OFFSET UNITYSDK_OFFSET(0x1F92C4E0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_APPLYSMRDATATOMESHTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1F92FED0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_APPLYSMRDATATOMESH_OFFSET UNITYSDK_OFFSET(0x1F92FEE0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_BUILDBONEIDX2DGOMAPIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1F92BD20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COLLECTBONESTOADDFORDGO_OFFSET UNITYSDK_OFFSET(0x1F92CE30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COPYBONESWEAREKEEPINGTONEWBONESARRAYANDADJUSTBWINDEXES_OFFSET UNITYSDK_OFFSET(0x1F92DD40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COPYBONEWEIGHTSFROMMESHFORDGOSINCOMBINED_OFFSET UNITYSDK_OFFSET(0x1F92FE90)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COPYVERTSNORMSTANSTOBUFFERS_1_OFFSET UNITYSDK_OFFSET(0x1F92F060)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COPYVERTSNORMSTANSTOBUFFERS_OFFSET UNITYSDK_OFFSET(0x1F92EFF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_DB_CHECKINTEGRITY_OFFSET UNITYSDK_OFFSET(0x1F92FF40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_DISPOSEOFTEMPORARYSMRDATA_OFFSET UNITYSDK_OFFSET(0x1F92FDC0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1F92BB70)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F92BB40)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETBONESTOADD_OFFSET UNITYSDK_OFFSET(0x1F92BCF0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETCACHEDSMRMESHDATA_OFFSET UNITYSDK_OFFSET(0x1F92FF30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETNEWBONESLENGTH_OFFSET UNITYSDK_OFFSET(0x1F92C810)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETNEWBONESSIZE_OFFSET UNITYSDK_OFFSET(0x1F92BBA0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETNUMBONESTODELETE_OFFSET UNITYSDK_OFFSET(0x1F92BD00)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_INSERTNEWBONESINTOBONESARRAY_OFFSET UNITYSDK_OFFSET(0x1F92E350)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_REMOVEBONESFORDGOSWEAREDELETING_OFFSET UNITYSDK_OFFSET(0x1F92C3C0)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_UPDATEGAMEOBJECTS_READBONEWEIGHTINFOFROMCOMBINEDMESH_OFFSET UNITYSDK_OFFSET(0x1F92C940)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_UPDATEGAMEOBJECTS_UPDATEBWINDEXES_OFFSET UNITYSDK_OFFSET(0x1F92ED20)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR__BUILDBONEIDX2DGOMAP_OFFSET UNITYSDK_OFFSET(0x1F92BF30)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR__COLLECTSKINNINGDATAFORDGOSINCOMBINEDMESH_OFFSET UNITYSDK_OFFSET(0x1F92C680)
#define DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F92BBB0)

namespace DigitalOpus::MB::Core
{
	inline static constexpr unsigned int MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor_TypeDefinitionIndex = 96251;

	class MB3_MeshCombinerSingle_MB_MeshCombinerSingle_BoneProcessor : public ::System::Object
	{
	public:
		::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner; // 0x10
		::Il2CppArray<::UnityEngine::Matrix4x4>* oldBindPosesPreviousBake; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* oldBonesPreviousBake; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Object*>* bonesToAdd; // 0x28
		::Il2CppArray<::UnityEngine::BoneWeight>* boneWeights; // 0x30
		::Il2CppArray<::UnityEngine::Matrix4x4>* nbindPoses; // 0x38
		::Il2CppArray<::System::Collections::Generic::List_1<::System::Object*>*>* boneIdx2dgoMap; // 0x40
		::Il2CppArray<::UnityEngine::Transform*>* nbones; // 0x48
		::Il2CppArray<::UnityEngine::BoneWeight>* nboneWeights; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* boneAndBindPose2idx; // 0x58
		::System::Collections::Generic::HashSet_1<::System::Int32>* boneIdxsToDelete; // 0x60
		::System::Boolean _didSetup; // 0x68
		::System::Boolean _disposed; // 0x69
		::System::Byte _padding0[0x2];
		::System::Int32 _newBonesStartAtIdx; // 0x6C

		::System::Void _ctor(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* cm)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR__CTOR_OFFSET))(this, cm);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Dispose_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_DISPOSE_1_OFFSET))(this);
		}

		::System::Int32 GetNewBonesSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETNEWBONESSIZE_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Object*>* GetBonesToAdd()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETBONESTOADD_OFFSET))(this);
		}

		::System::Int32 GetNumBonesToDelete()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETNUMBONESTODELETE_OFFSET))(this);
		}

		::System::Void BuildBoneIdx2DGOMapIfNecessary(::Il2CppArray<::System::Int32>* _goToDelete)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_BUILDBONEIDX2DGOMAPIFNECESSARY_OFFSET))(this, _goToDelete);
		}

		::System::Void RemoveBonesForDgosWeAreDeleting(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_REMOVEBONESFORDGOSWEAREDELETING_OFFSET))(this, dgo);
		}

		::System::Void AllocateAndSetupSMRDataStructures(::System::Collections::Generic::List_1<::System::Object*>* toAddDGOs, ::System::Collections::Generic::List_1<::System::Object*>* mbDynamicObjectsInCombinedMesh, ::System::Int32 newVertSize, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor* vertexAndTriangleProcessor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_IVertexAndTriangleProcessor*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_ALLOCATEANDSETUPSMRDATASTRUCTURES_OFFSET))(this, toAddDGOs, mbDynamicObjectsInCombinedMesh, newVertSize, vertexAndTriangleProcessor);
		}

		::System::Void UpdateGameObjects_ReadBoneWeightInfoFromCombinedMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_UPDATEGAMEOBJECTS_READBONEWEIGHTINFOFROMCOMBINEDMESH_OFFSET))(this);
		}

		::System::Int32 GetNewBonesLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETNEWBONESLENGTH_OFFSET))(this);
		}

		::System::Void _CollectSkinningDataForDGOsInCombinedMesh(::System::Collections::Generic::List_1<::System::Object*>* objsToAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR__COLLECTSKINNINGDATAFORDGOSINCOMBINEDMESH_OFFSET))(this, objsToAdd);
		}

		::System::Boolean CollectBonesToAddForDGO(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::UnityEngine::Renderer* r, ::System::Boolean noExtraBonesForMeshRenderers)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::UnityEngine::Renderer*, ::System::Boolean))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COLLECTBONESTOADDFORDGO_OFFSET))(this, dgo, r, noExtraBonesForMeshRenderers);
		}

		::Il2CppArray<::System::Collections::Generic::List_1<::System::Object*>*>* _buildBoneIdx2dgoMap()
		{
			return ((::Il2CppArray<::System::Collections::Generic::List_1<::System::Object*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR__BUILDBONEIDX2DGOMAP_OFFSET))(this);
		}

		::System::Void CopyBonesWeAreKeepingToNewBonesArrayAndAdjustBWIndexes(::System::Int32 totalDeleteVerts)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COPYBONESWEAREKEEPINGTONEWBONESARRAYANDADJUSTBWINDEXES_OFFSET))(this, totalDeleteVerts);
		}

		::System::Void InsertNewBonesIntoBonesArray()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_INSERTNEWBONESINTOBONESARRAY_OFFSET))(this);
		}

		::System::Void AddBonesToNewBonesArrayAndAdjustBWIndexes1(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::System::Int32 vertsIdx)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_ADDBONESTONEWBONESARRAYANDADJUSTBWINDEXES1_OFFSET))(this, dgo, vertsIdx);
		}

		::System::Void UpdateGameObjects_UpdateBWIndexes(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_UPDATEGAMEOBJECTS_UPDATEBWINDEXES_OFFSET))(this, dgo);
		}

		::System::Void CopyVertsNormsTansToBuffers(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::System::Int32 vertsIdx, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> nnorms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> ntangs, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> nverts, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> normals, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> tangents, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3> verts)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::System::Int32, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COPYVERTSNORMSTANSTOBUFFERS_OFFSET))(this, dgo, settings, vertsIdx, nnorms, ntangs, nverts, normals, tangents, verts);
		}

		::System::Void CopyVertsNormsTansToBuffers_1(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings* settings, ::System::Int32 vertsIdx, ::Il2CppArray<::UnityEngine::Vector3>* nnorms, ::Il2CppArray<::UnityEngine::Vector4>* ntangs, ::Il2CppArray<::UnityEngine::Vector3>* nverts, ::Il2CppArray<::UnityEngine::Vector3>* normals, ::Il2CppArray<::UnityEngine::Vector4>* tangents, ::Il2CppArray<::UnityEngine::Vector3>* verts)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::DigitalOpus::MB::Core::MB_IMeshBakerSettings*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COPYVERTSNORMSTANSTOBUFFERS_1_OFFSET))(this, dgo, settings, vertsIdx, nnorms, ntangs, nverts, normals, tangents, verts);
		}

		::System::Void DisposeOfTemporarySMRData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_DISPOSEOFTEMPORARYSMRDATA_OFFSET))(this);
		}

		::System::Void CopyBoneWeightsFromMeshForDGOsInCombined(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo, ::System::Int32 targVidx)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_COPYBONEWEIGHTSFROMMESHFORDGOSINCOMBINED_OFFSET))(this, dgo, targVidx);
		}

		::System::Void ApplySMRdataToMeshToBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_APPLYSMRDATATOMESHTOBUFFER_OFFSET))(this);
		}

		::System::Void ApplySMRdataToMesh(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle* combiner, ::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_APPLYSMRDATATOMESH_OFFSET))(this, combiner, mesh);
		}

		::System::Boolean GetCachedSMRMeshData(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject* dgo)
		{
			return ((::System::Boolean(*)(::PVOID, ::DigitalOpus::MB::Core::MB3_MeshCombinerSingle_MB_DynamicGameObject*))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_GETCACHEDSMRMESHDATA_OFFSET))(this, dgo);
		}

		::System::Boolean DB_CheckIntegrity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DIGITALOPUS_MB_CORE_MB3_MESHCOMBINERSINGLE_MB_MESHCOMBINERSINGLE_BONEPROCESSOR_DB_CHECKINTEGRITY_OFFSET))(this);
		}
	};
}
