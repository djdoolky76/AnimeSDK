#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/AutoUnwrapSettings.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_FACE_CACHEDISTINCTINDEXES_OFFSET UNITYSDK_OFFSET(0x20489B10)
#define UNITYENGINE_PROBUILDER_FACE_CACHEEDGES_OFFSET UNITYSDK_OFFSET(0x20489DB0)
#define UNITYENGINE_PROBUILDER_FACE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x2048A500)
#define UNITYENGINE_PROBUILDER_FACE_COPYFROM_OFFSET UNITYSDK_OFFSET(0x2048A400)
#define UNITYENGINE_PROBUILDER_FACE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2048A1D0)
#define UNITYENGINE_PROBUILDER_FACE_CTOR_2_OFFSET UNITYSDK_OFFSET(0x2048A2D0)
#define UNITYENGINE_PROBUILDER_FACE_CTOR_3_OFFSET UNITYSDK_OFFSET(0x2048A360)
#define UNITYENGINE_PROBUILDER_FACE_CTOR_4_OFFSET UNITYSDK_OFFSET(0x2048A3F0)
#define UNITYENGINE_PROBUILDER_FACE_CTOR_OFFSET UNITYSDK_OFFSET(0x2048A1C0)
#define UNITYENGINE_PROBUILDER_FACE_GETDISTINCTINDICES_OFFSET UNITYSDK_OFFSET(0x2048B610)
#define UNITYENGINE_PROBUILDER_FACE_GETINDICES_OFFSET UNITYSDK_OFFSET(0x2048B0F0)
#define UNITYENGINE_PROBUILDER_FACE_GET_DISTINCTINDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x20488E80)
#define UNITYENGINE_PROBUILDER_FACE_GET_DISTINCTINDEXES_OFFSET UNITYSDK_OFFSET(0x20489CB0)
#define UNITYENGINE_PROBUILDER_FACE_GET_EDGESINTERNAL_OFFSET UNITYSDK_OFFSET(0x204897F0)
#define UNITYENGINE_PROBUILDER_FACE_GET_EDGES_OFFSET UNITYSDK_OFFSET(0x2048A070)
#define UNITYENGINE_PROBUILDER_FACE_GET_INDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x20489920)
#define UNITYENGINE_PROBUILDER_FACE_GET_INDEXES_OFFSET UNITYSDK_OFFSET(0x20489A00)
#define UNITYENGINE_PROBUILDER_FACE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2048A190)
#define UNITYENGINE_PROBUILDER_FACE_GET_MANUALUV_OFFSET UNITYSDK_OFFSET(0x204898E0)
#define UNITYENGINE_PROBUILDER_FACE_GET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x2048A120)
#define UNITYENGINE_PROBUILDER_FACE_GET_SMOOTHINGGROUP_OFFSET UNITYSDK_OFFSET(0x2048A100)
#define UNITYENGINE_PROBUILDER_FACE_GET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x2048A140)
#define UNITYENGINE_PROBUILDER_FACE_GET_TEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x20489900)
#define UNITYENGINE_PROBUILDER_FACE_GET_UV_OFFSET UNITYSDK_OFFSET(0x2048A160)
#define UNITYENGINE_PROBUILDER_FACE_INVALIDATECACHE_OFFSET UNITYSDK_OFFSET(0x204899F0)
#define UNITYENGINE_PROBUILDER_FACE_ISQUAD_OFFSET UNITYSDK_OFFSET(0x2048A570)
#define UNITYENGINE_PROBUILDER_FACE_REVERSE_OFFSET UNITYSDK_OFFSET(0x2048B0D0)
#define UNITYENGINE_PROBUILDER_FACE_SETINDEXES_OFFSET UNITYSDK_OFFSET(0x20489A40)
#define UNITYENGINE_PROBUILDER_FACE_SET_INDEXESINTERNAL_OFFSET UNITYSDK_OFFSET(0x20489930)
#define UNITYENGINE_PROBUILDER_FACE_SET_MANUALUV_OFFSET UNITYSDK_OFFSET(0x204898F0)
#define UNITYENGINE_PROBUILDER_FACE_SET_MATERIAL_OFFSET UNITYSDK_OFFSET(0x2048A130)
#define UNITYENGINE_PROBUILDER_FACE_SET_SMOOTHINGGROUP_OFFSET UNITYSDK_OFFSET(0x2048A110)
#define UNITYENGINE_PROBUILDER_FACE_SET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x2048A150)
#define UNITYENGINE_PROBUILDER_FACE_SET_TEXTUREGROUP_OFFSET UNITYSDK_OFFSET(0x20489910)
#define UNITYENGINE_PROBUILDER_FACE_SET_UV_OFFSET UNITYSDK_OFFSET(0x2048A180)
#define UNITYENGINE_PROBUILDER_FACE_SHIFTINDEXESTOZERO_OFFSET UNITYSDK_OFFSET(0x2048AE60)
#define UNITYENGINE_PROBUILDER_FACE_SHIFTINDEXES_OFFSET UNITYSDK_OFFSET(0x2048ABE0)
#define UNITYENGINE_PROBUILDER_FACE_SMALLESTINDEXVALUE_OFFSET UNITYSDK_OFFSET(0x2048AC90)
#define UNITYENGINE_PROBUILDER_FACE_TOQUAD_OFFSET UNITYSDK_OFFSET(0x2048A5C0)
#define UNITYENGINE_PROBUILDER_FACE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2048AA00)
#define UNITYENGINE_PROBUILDER_FACE_TRYGETNEXTEDGE_OFFSET UNITYSDK_OFFSET(0x2048BF10)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Face_TypeDefinitionIndex = 45433;

	class Face : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_Indexes; // 0x10
		::System::Int32 m_SmoothingGroup; // 0x18
		::UnityEngine::ProBuilder::AutoUnwrapSettings m_Uv; // 0x1C
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* m_Material; // 0x40
		::System::Int32 m_SubmeshIndex; // 0x48
		::System::Boolean m_ManualUV; // 0x4C
		::System::Byte _padding1[0x3];
		::System::Int32 elementGroup; // 0x50
		::System::Int32 m_TextureGroup; // 0x54
		::Il2CppArray<::System::Int32>* m_DistinctIndexes; // 0x58
		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* m_Edges; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Int32>* a1, ::UnityEngine::Material* a2, ::UnityEngine::ProBuilder::AutoUnwrapSettings a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*, ::UnityEngine::Material*, ::UnityEngine::ProBuilder::AutoUnwrapSettings, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CTOR_2_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_3(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Int32 a2, ::UnityEngine::ProBuilder::AutoUnwrapSettings a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Boolean a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Int32, ::UnityEngine::ProBuilder::AutoUnwrapSettings, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_4(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CTOR_4_OFFSET))(this, a1);
		}

		::System::Boolean get_manualUV()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_MANUALUV_OFFSET))(this);
		}

		::System::Void set_manualUV(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_MANUALUV_OFFSET))(this, a1);
		}

		::System::Int32 get_textureGroup()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_TEXTUREGROUP_OFFSET))(this);
		}

		::System::Void set_textureGroup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_TEXTUREGROUP_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_indexesInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_INDEXESINTERNAL_OFFSET))(this);
		}

		::System::Void set_indexesInternal(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_INDEXESINTERNAL_OFFSET))(this, a1);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* get_indexes()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_INDEXES_OFFSET))(this);
		}

		::System::Void SetIndexes(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SETINDEXES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int32>* get_distinctIndexesInternal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_DISTINCTINDEXESINTERNAL_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>* get_distinctIndexes()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_DISTINCTINDEXES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* get_edgesInternal()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_EDGESINTERNAL_OFFSET))(this);
		}

		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>* get_edges()
		{
			return ((::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_EDGES_OFFSET))(this);
		}

		::System::Int32 get_smoothingGroup()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_SMOOTHINGGROUP_OFFSET))(this);
		}

		::System::Void set_smoothingGroup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_SMOOTHINGGROUP_OFFSET))(this, a1);
		}

		::UnityEngine::Material* get_material()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_MATERIAL_OFFSET))(this);
		}

		::System::Void set_material(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_MATERIAL_OFFSET))(this, a1);
		}

		::System::Int32 get_submeshIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_SUBMESHINDEX_OFFSET))(this);
		}

		::System::Void set_submeshIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_SUBMESHINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::AutoUnwrapSettings get_uv()
		{
			return ((::UnityEngine::ProBuilder::AutoUnwrapSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_UV_OFFSET))(this);
		}

		::System::Void set_uv(::UnityEngine::ProBuilder::AutoUnwrapSettings a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::AutoUnwrapSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SET_UV_OFFSET))(this, a1);
		}

		::System::Int32 get_Item(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GET_ITEM_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void InvalidateCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_INVALIDATECACHE_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::ProBuilder::Edge>* CacheEdges()
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CACHEEDGES_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* CacheDistinctIndexes()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CACHEDISTINCTINDEXES_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_CONTAINS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsQuad()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_ISQUAD_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* ToQuad()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_TOQUAD_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_TOSTRING_OFFSET))(this);
		}

		::System::Void ShiftIndexes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SHIFTINDEXES_OFFSET))(this, a1);
		}

		::System::Int32 SmallestIndexValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SMALLESTINDEXVALUE_OFFSET))(this);
		}

		::System::Void ShiftIndexesToZero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_SHIFTINDEXESTOZERO_OFFSET))(this);
		}

		::System::Void Reverse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_REVERSE_OFFSET))(this);
		}

		static ::System::Void GetIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GETINDICES_OFFSET))(a1, a2);
		}

		static ::System::Void GetDistinctIndices(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_GETDISTINCTINDICES_OFFSET))(a1, a2);
		}

		::System::Boolean TryGetNextEdge(::UnityEngine::ProBuilder::Edge a1, ::System::Int32 a2, ::UnityEngine::ProBuilder::Edge a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge, ::System::Int32, ::UnityEngine::ProBuilder::Edge, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_FACE_TRYGETNEXTEDGE_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
