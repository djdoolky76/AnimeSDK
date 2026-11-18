#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }
namespace UnityEngine { class MeshRenderer; }
namespace XftWeapon { class VertexPool_VertexSegment; }
namespace XftWeapon { class XWeaponTrail; }

#define XFTWEAPON_VERTEXPOOL_ADJUSTPOS_OFFSET UNITYSDK_OFFSET(0x1EC757E0)
#define XFTWEAPON_VERTEXPOOL_AFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC72F30)
#define XFTWEAPON_VERTEXPOOL_BEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC72450)
#define XFTWEAPON_VERTEXPOOL_BSPLINERESIZEARRAY_OFFSET UNITYSDK_OFFSET(0x1EC74B20)
#define XFTWEAPON_VERTEXPOOL_BSPLINERESIZELIST_OFFSET UNITYSDK_OFFSET(0x1EC74D40)
#define XFTWEAPON_VERTEXPOOL_CREATEMESHOBJ_OFFSET UNITYSDK_OFFSET(0x1EC738E0)
#define XFTWEAPON_VERTEXPOOL_DESTROY_OFFSET UNITYSDK_OFFSET(0x1EC742E0)
#define XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_GCOPT_OFFSET UNITYSDK_OFFSET(0x1EC72430)
#define XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_OFFSET UNITYSDK_OFFSET(0x1EC748B0)
#define XFTWEAPON_VERTEXPOOL_GETMESHRENDER_OFFSET UNITYSDK_OFFSET(0x1EC738D0)
#define XFTWEAPON_VERTEXPOOL_GETVERTICES_GCOPT_OFFSET UNITYSDK_OFFSET(0x1EC72400)
#define XFTWEAPON_VERTEXPOOL_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1EC74700)
#define XFTWEAPON_VERTEXPOOL_GET_DYNAMICMESHPOINTLENGTH_OFFSET UNITYSDK_OFFSET(0x1EC72D90)
#define XFTWEAPON_VERTEXPOOL_GET_MYMESH_OFFSET UNITYSDK_OFFSET(0x1EC731D0)
#define XFTWEAPON_VERTEXPOOL_GET_USEUV2_OFFSET UNITYSDK_OFFSET(0x1EC72C30)
#define XFTWEAPON_VERTEXPOOL_GET_VERTCOUNTCHANGED_FOROUTTER_OFFSET UNITYSDK_OFFSET(0x1EC731B0)
#define XFTWEAPON_VERTEXPOOL_INITARRAYS_OFFSET UNITYSDK_OFFSET(0x1EC73610)
#define XFTWEAPON_VERTEXPOOL_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1EC74E30)
#define XFTWEAPON_VERTEXPOOL_RECALCULATEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1EC73370)
#define XFTWEAPON_VERTEXPOOL_RESETUSED_OFFSET UNITYSDK_OFFSET(0x1EC745D0)
#define XFTWEAPON_VERTEXPOOL_RESET_OFFSET UNITYSDK_OFFSET(0x1EC73350)
#define XFTWEAPON_VERTEXPOOL_SETMESHOBJECTACTIVE_OFFSET UNITYSDK_OFFSET(0x1EC73390)
#define XFTWEAPON_VERTEXPOOL_SET_VERTCOUNTCHANGED_FOROUTTER_OFFSET UNITYSDK_OFFSET(0x1EC731C0)
#define XFTWEAPON_VERTEXPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC745E0)

namespace XftWeapon
{
	inline static constexpr unsigned int VertexPool_TypeDefinitionIndex = 37968;

	class VertexPool : public ::System::Object
	{
	public:
		// static const ::System::Int32 BlockSize = 0x6C; // 0x0
		::Il2CppArray<::UnityEngine::Vector3>* defaultVertices; // 0x10
		::UnityEngine::Mesh* _mesh2d; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* Indices_List; // 0x20
		::Il2CppArray<::UnityEngine::Color>* Colors; // 0x28
		::Il2CppArray<::UnityEngine::Vector2>* defaultUvs; // 0x30
		::UnityEngine::Material* _material; // 0x38
		::Il2CppArray<::UnityEngine::Vector2>* UV2s; // 0x40
		::Il2CppArray<::UnityEngine::Vector2>* UVs; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Color>* Colors_List; // 0x50
		::UnityEngine::MeshRenderer* _meshrenderer; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UVs_List; // 0x60
		::Il2CppArray<::System::Int32>* Indices; // 0x68
		::XftWeapon::XWeaponTrail* _owner; // 0x70
		::UnityEngine::MeshFilter* _meshFilter; // 0x78
		::Il2CppArray<::System::Int32>* defaultIndices; // 0x80
		::Il2CppArray<::UnityEngine::Color>* defaultColors; // 0x88
		::Il2CppArray<::UnityEngine::Vector3>* Vertices; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* UV2s_List; // 0x98
		::XftWeapon::XWeaponTrail* xWeaponCtx; // 0xA0
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Vertices_List; // 0xA8
		::System::Boolean UVChanged; // 0xB0
		::System::Boolean UV2Changed; // 0xB1
		::System::Boolean FirstUpdate; // 0xB2
		::System::Byte _padding0[0x1];
		::System::Int32 VertexTotal; // 0xB4
		::System::Int32 IndexUsed; // 0xB8
		::System::Int32 VertexUsed; // 0xBC
		::System::Boolean VertCountChanged; // 0xC0
		::System::Boolean ColorChanged; // 0xC1
		::System::Boolean VertChanged; // 0xC2
		::System::Boolean IndiceChanged; // 0xC3
		::System::Int32 IndexTotal; // 0xC4
		::System::Single BoundsScheduleTime; // 0xC8
		::System::Single ElapsedTime; // 0xCC

		::System::Void _ctor(::UnityEngine::Material* material, ::XftWeapon::XWeaponTrail* owner)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::XftWeapon::XWeaponTrail*))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL__CTOR_OFFSET))(this, material, owner);
		}

		::System::Void GetVertices_GCOpt(::System::Int32 vcount, ::System::Int32 icount, ::System::Boolean dynamicLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GETVERTICES_GCOPT_OFFSET))(this, vcount, icount, dynamicLength);
		}

		::System::Void EnlargeArrays_GCOpt(::System::Int32 count, ::System::Int32 icount, ::System::Boolean dynamicLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_GCOPT_OFFSET))(this, count, icount, dynamicLength);
		}

		::System::Void BeforeUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_BEFOREUPDATE_OFFSET))(this);
		}

		::System::Void AfterUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_AFTERUPDATE_OFFSET))(this);
		}

		::System::Boolean get_UseUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GET_USEUV2_OFFSET))(this);
		}

		::System::Boolean get_DynamicMeshPointLength()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GET_DYNAMICMESHPOINTLENGTH_OFFSET))(this);
		}

		::System::Boolean get_VertCountChanged_ForOutter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GET_VERTCOUNTCHANGED_FOROUTTER_OFFSET))(this);
		}

		::System::Void set_VertCountChanged_ForOutter(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_SET_VERTCOUNTCHANGED_FOROUTTER_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_MyMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GET_MYMESH_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_RESET_OFFSET))(this);
		}

		::System::Void RecalculateBounds()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_RECALCULATEBOUNDS_OFFSET))(this);
		}

		::System::Void SetMeshObjectActive(::System::Boolean flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_SETMESHOBJECTACTIVE_OFFSET))(this, flag);
		}

		::UnityEngine::MeshRenderer* GetMeshRender()
		{
			return ((::UnityEngine::MeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GETMESHRENDER_OFFSET))(this);
		}

		::System::Void CreateMeshObj(::XftWeapon::XWeaponTrail* owner, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::XftWeapon::XWeaponTrail*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_CREATEMESHOBJ_OFFSET))(this, owner, material);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_DESTROY_OFFSET))(this);
		}

		::System::Void ResetUsed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_RESETUSED_OFFSET))(this);
		}

		::XftWeapon::VertexPool_VertexSegment* GetVertices(::System::Int32 vcount, ::System::Int32 icount, ::System::Boolean dynamicLength)
		{
			return ((::XftWeapon::VertexPool_VertexSegment*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_GETVERTICES_OFFSET))(this, vcount, icount, dynamicLength);
		}

		::System::Void BSplineResizeArray(::System::Int32 pointCnt, ::System::Int32 bSplineSplitCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_BSPLINERESIZEARRAY_OFFSET))(this, pointCnt, bSplineSplitCnt);
		}

		::System::Void BSplineResizeList(::System::Int32 pointCnt, ::System::Int32 bSplineSplitCnt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_BSPLINERESIZELIST_OFFSET))(this, pointCnt, bSplineSplitCnt);
		}

		::System::Void InitArrays()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_INITARRAYS_OFFSET))(this);
		}

		::System::Void EnlargeArrays(::System::Int32 count, ::System::Int32 icount, ::System::Boolean dynamicLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_ENLARGEARRAYS_OFFSET))(this, count, icount, dynamicLength);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_LATEUPDATE_OFFSET))(this);
		}

		::System::Void AdjustPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XFTWEAPON_VERTEXPOOL_ADJUSTPOS_OFFSET))(this);
		}
	};
}
