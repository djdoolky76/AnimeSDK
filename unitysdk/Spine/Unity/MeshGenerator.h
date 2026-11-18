#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/Spine/Unity/MeshGeneratorBuffers.h"
#include "unitysdk/Spine/Unity/SubmeshInstruction.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Spine { class Skeleton; }
namespace Spine { class SkeletonClipping; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace Spine::Unity { class MeshGenerator_Settings; }
namespace Spine::Unity { class SkeletonRendererInstruction; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define SPINE_UNITY_MESHGENERATOR_ADDATTACHMENTTINTBLACK_OFFSET UNITYSDK_OFFSET(0x1F807D60)
#define SPINE_UNITY_MESHGENERATOR_ADDSUBMESH_OFFSET UNITYSDK_OFFSET(0x1F806770)
#define SPINE_UNITY_MESHGENERATOR_BEGIN_OFFSET UNITYSDK_OFFSET(0x1F806690)
#define SPINE_UNITY_MESHGENERATOR_BUILDMESHWITHARRAYS_OFFSET UNITYSDK_OFFSET(0x1F807F70)
#define SPINE_UNITY_MESHGENERATOR_BUILDMESH_OFFSET UNITYSDK_OFFSET(0x1F807EA0)
#define SPINE_UNITY_MESHGENERATOR_ENSUREVERTEXCAPACITY_OFFSET UNITYSDK_OFFSET(0x1F80B180)
#define SPINE_UNITY_MESHGENERATOR_FILLLATEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1F80A980)
#define SPINE_UNITY_MESHGENERATOR_FILLTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1F80B0D0)
#define SPINE_UNITY_MESHGENERATOR_FILLVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1F80A4C0)
#define SPINE_UNITY_MESHGENERATOR_FLIPBACKFACEWINDINGORDER_OFFSET UNITYSDK_OFFSET(0x1F80A290)
#define SPINE_UNITY_MESHGENERATOR_GENERATESINGLESUBMESHINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1F804B40)
#define SPINE_UNITY_MESHGENERATOR_GENERATESKELETONRENDERERINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1F8058D0)
#define SPINE_UNITY_MESHGENERATOR_GETMESHBOUNDS_OFFSET UNITYSDK_OFFSET(0x1F80A1D0)
#define SPINE_UNITY_MESHGENERATOR_GET_BUFFERS_OFFSET UNITYSDK_OFFSET(0x1F8046E0)
#define SPINE_UNITY_MESHGENERATOR_GET_SKELETONCLIPPING_OFFSET UNITYSDK_OFFSET(0x1F804750)
#define SPINE_UNITY_MESHGENERATOR_GET_UV2_OFFSET UNITYSDK_OFFSET(0x1F8044D0)
#define SPINE_UNITY_MESHGENERATOR_GET_UV3_OFFSET UNITYSDK_OFFSET(0x1F804620)
#define SPINE_UNITY_MESHGENERATOR_GET_VERTEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1F804670)
#define SPINE_UNITY_MESHGENERATOR_INITIALIZEGLOBALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1F804AD0)
#define SPINE_UNITY_MESHGENERATOR_PREPAREOPTIONALUVBUFFER_OFFSET UNITYSDK_OFFSET(0x1F804520)
#define SPINE_UNITY_MESHGENERATOR_REQUIRESMULTIPLESUBMESHESBYDRAWORDER_OFFSET UNITYSDK_OFFSET(0x1F805500)
#define SPINE_UNITY_MESHGENERATOR_RESIZEOPTIONALUVBUFFER_OFFSET UNITYSDK_OFFSET(0x1F80A240)
#define SPINE_UNITY_MESHGENERATOR_SCALEANDOFFSETVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1F809F90)
#define SPINE_UNITY_MESHGENERATOR_SCALEVERTEXDATA_OFFSET UNITYSDK_OFFSET(0x1F809EE0)
#define SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DBUFFER_OFFSET UNITYSDK_OFFSET(0x1F80AF90)
#define SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DENSURESIZE_OFFSET UNITYSDK_OFFSET(0x1F80AB50)
#define SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1F80ABD0)
#define SPINE_UNITY_MESHGENERATOR_SUBMESHINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1F804690)
#define SPINE_UNITY_MESHGENERATOR_TRIMEXCESS_OFFSET UNITYSDK_OFFSET(0x1F80B450)
#define SPINE_UNITY_MESHGENERATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F80B700)
#define SPINE_UNITY_MESHGENERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F804760)

namespace Spine::Unity
{
	inline static constexpr unsigned int MeshGenerator_TypeDefinitionIndex = 38191;

	class MeshGenerator : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Boolean>* StaticGet_linearColorSpaceGlobal()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(MeshGenerator_TypeDefinitionIndex)->GetStaticField(0x9EF0);
		}
		// static const ::System::Single BoundsMinDefault; // 0x0
		// static const ::System::Single BoundsMaxDefault; // 0x0
		::Spine::Unity::MeshGenerator_Settings* settings; // 0x10
		::Spine::ExposedList_1<::UnityEngine::Vector3>* vertexBuffer; // 0x18
		::Spine::ExposedList_1<::UnityEngine::Vector2>* uvBuffer; // 0x20
		::Spine::ExposedList_1<::UnityEngine::Color32>* colorBuffer; // 0x28
		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Int32>*>* submeshes; // 0x30
		::UnityEngine::Vector2 meshBoundsMin; // 0x38
		::UnityEngine::Vector2 meshBoundsMax; // 0x40
		::System::Single meshBoundsThickness; // 0x48
		::System::Int32 submeshIndex; // 0x4C
		::Spine::SkeletonClipping* clipper; // 0x50
		::Il2CppArray<::System::Single>* tempVerts; // 0x58
		::Il2CppArray<::System::Int32>* regionTriangles; // 0x60
		::Il2CppArray<::UnityEngine::Vector3>* normals; // 0x68
		::Il2CppArray<::UnityEngine::Vector4>* tangents; // 0x70
		::Il2CppArray<::UnityEngine::Vector2>* tempTanBuffer; // 0x78
		::Spine::ExposedList_1<::UnityEngine::Vector2>* uv2; // 0x80
		::Spine::ExposedList_1<::UnityEngine::Vector2>* uv3; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR__CCTOR_OFFSET))();
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_UV2()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_UV2_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_UV3()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_UV3_OFFSET))(this);
		}

		::System::Int32 get_VertexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_VERTEXCOUNT_OFFSET))(this);
		}

		::System::Int32 SubmeshIndexCount(::System::Int32 submeshIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SUBMESHINDEXCOUNT_OFFSET))(this, submeshIndex);
		}

		::Spine::Unity::MeshGeneratorBuffers get_Buffers()
		{
			return ((::Spine::Unity::MeshGeneratorBuffers(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_BUFFERS_OFFSET))(this);
		}

		::Spine::SkeletonClipping* get_SkeletonClipping()
		{
			return ((::Spine::SkeletonClipping*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GET_SKELETONCLIPPING_OFFSET))(this);
		}

		static ::System::Void InitializeGlobalSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_INITIALIZEGLOBALSETTINGS_OFFSET))();
		}

		static ::System::Void GenerateSingleSubmeshInstruction(::Spine::Unity::SkeletonRendererInstruction* instructionOutput, ::Spine::Skeleton* skeleton, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::Spine::Skeleton*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GENERATESINGLESUBMESHINSTRUCTION_OFFSET))(instructionOutput, skeleton, material);
		}

		static ::System::Boolean RequiresMultipleSubmeshesByDrawOrder(::Spine::Skeleton* skeleton)
		{
			return ((::System::Boolean(*)(::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_REQUIRESMULTIPLESUBMESHESBYDRAWORDER_OFFSET))(skeleton);
		}

		static ::System::Void GenerateSkeletonRendererInstruction(::Spine::Unity::SkeletonRendererInstruction* instructionOutput, ::Spine::Skeleton* skeleton, ::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>* customSlotMaterials, ::System::Collections::Generic::List_1<::Spine::Slot*>* separatorSlots, ::System::Boolean enableSeparation, ::System::Boolean immutableTriangles)
		{
			return ((::System::Void(*)(::Spine::Unity::SkeletonRendererInstruction*, ::Spine::Skeleton*, ::System::Collections::Generic::Dictionary_2<::Spine::Slot*, ::UnityEngine::Material*>*, ::System::Collections::Generic::List_1<::Spine::Slot*>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GENERATESKELETONRENDERERINSTRUCTION_OFFSET))(instructionOutput, skeleton, customSlotMaterials, separatorSlots, enableSeparation, immutableTriangles);
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_BEGIN_OFFSET))(this);
		}

		::System::Void AddSubmesh(::Spine::Unity::SubmeshInstruction instruction, ::System::Boolean updateTriangles)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SubmeshInstruction, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_ADDSUBMESH_OFFSET))(this, instruction, updateTriangles);
		}

		::System::Void BuildMesh(::Spine::Unity::SkeletonRendererInstruction* instruction, ::System::Boolean updateTriangles)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_BUILDMESH_OFFSET))(this, instruction, updateTriangles);
		}

		::System::Void BuildMeshWithArrays(::Spine::Unity::SkeletonRendererInstruction* instruction, ::System::Boolean updateTriangles)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Unity::SkeletonRendererInstruction*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_BUILDMESHWITHARRAYS_OFFSET))(this, instruction, updateTriangles);
		}

		::System::Void ScaleVertexData(::System::Single scale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SCALEVERTEXDATA_OFFSET))(this, scale);
		}

		::System::Void ScaleAndOffsetVertexData(::System::Single scale, ::UnityEngine::Vector2 offset2D)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SCALEANDOFFSETVERTEXDATA_OFFSET))(this, scale, offset2D);
		}

		::UnityEngine::Bounds GetMeshBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_GETMESHBOUNDS_OFFSET))(this);
		}

		::System::Void AddAttachmentTintBlack(::UnityEngine::Color darkColor, ::System::Single a, ::System::Int32 vertexCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_ADDATTACHMENTTINTBLACK_OFFSET))(this, darkColor, a, vertexCount);
		}

		::System::Void PrepareOptionalUVBuffer(::Spine::ExposedList_1<::UnityEngine::Vector2>*& uvBuffer, ::System::Int32 vertexCount)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::UnityEngine::Vector2>*&, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_PREPAREOPTIONALUVBUFFER_OFFSET))(this, uvBuffer, vertexCount);
		}

		::System::Void ResizeOptionalUVBuffer(::Spine::ExposedList_1<::UnityEngine::Vector2>*& uvBuffer, ::System::Int32 vertexCount)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::UnityEngine::Vector2>*&, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_RESIZEOPTIONALUVBUFFER_OFFSET))(this, uvBuffer, vertexCount);
		}

		::System::Void FlipBackfaceWindingOrder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FLIPBACKFACEWINDINGORDER_OFFSET))(this);
		}

		::System::Void FillVertexData(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLVERTEXDATA_OFFSET))(this, mesh);
		}

		::System::Void FillLateVertexData(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLLATEVERTEXDATA_OFFSET))(this, mesh);
		}

		::System::Void FillTriangles(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_FILLTRIANGLES_OFFSET))(this, mesh);
		}

		::System::Void EnsureVertexCapacity(::System::Int32 minimumVertexCount, ::System::Boolean includeTintBlack, ::System::Boolean includeTangents, ::System::Boolean includeNormals)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_ENSUREVERTEXCAPACITY_OFFSET))(this, minimumVertexCount, includeTintBlack, includeTangents, includeNormals);
		}

		::System::Void TrimExcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_TRIMEXCESS_OFFSET))(this);
		}

		static ::System::Void SolveTangents2DEnsureSize(::Il2CppArray<::UnityEngine::Vector4>*& tangentBuffer, ::Il2CppArray<::UnityEngine::Vector2>*& tempTanBuffer, ::System::Int32 vertexCount, ::System::Int32 vertexBufferLength)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DENSURESIZE_OFFSET))(tangentBuffer, tempTanBuffer, vertexCount, vertexBufferLength);
		}

		static ::System::Void SolveTangents2DTriangles(::Il2CppArray<::UnityEngine::Vector2>* tempTanBuffer, ::Il2CppArray<::System::Int32>* triangles, ::System::Int32 triangleCount, ::Il2CppArray<::UnityEngine::Vector3>* vertices, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::System::Int32 vertexCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DTRIANGLES_OFFSET))(tempTanBuffer, triangles, triangleCount, vertices, uvs, vertexCount);
		}

		static ::System::Void SolveTangents2DBuffer(::Il2CppArray<::UnityEngine::Vector4>* tangents, ::Il2CppArray<::UnityEngine::Vector2>* tempTanBuffer, ::System::Int32 vertexCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_MESHGENERATOR_SOLVETANGENTS2DBUFFER_OFFSET))(tangents, tempTanBuffer, vertexCount);
		}
	};
}
