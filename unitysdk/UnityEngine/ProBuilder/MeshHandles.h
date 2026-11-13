#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHHANDLES_CCTOR_OFFSET UNITYSDK_OFFSET(0xD6DFC90)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_1_OFFSET UNITYSDK_OFFSET(0xD6DEE50)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_OFFSET UNITYSDK_OFFSET(0xD6DE3A0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_1_OFFSET UNITYSDK_OFFSET(0xD6DBC50)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_OFFSET UNITYSDK_OFFSET(0xD6DB660)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESHFROMFACES_OFFSET UNITYSDK_OFFSET(0xD6DB3D0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESH_OFFSET UNITYSDK_OFFSET(0xD6DB140)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_1_OFFSET UNITYSDK_OFFSET(0xD6DC700)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_OFFSET UNITYSDK_OFFSET(0xD6DD5E0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTMESH_OFFSET UNITYSDK_OFFSET(0xD6DC430)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_1_OFFSET UNITYSDK_OFFSET(0xD6DC2D0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_OFFSET UNITYSDK_OFFSET(0xD6DC0C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshHandles_TypeDefinitionIndex = 45450;

	class MeshHandles : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_IndexList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("UnityEngine.ProBuilder", "MeshHandles")->GetStaticField(0x63110);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_s_Vector3List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("UnityEngine.ProBuilder", "MeshHandles")->GetStaticField(0x63118);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_s_Vector4List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)UnitySDK::FromName("UnityEngine.ProBuilder", "MeshHandles")->GetStaticField(0x63120);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_s_Vector2List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)UnitySDK::FromName("UnityEngine.ProBuilder", "MeshHandles")->GetStaticField(0x63128);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_SharedVertexIndexList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)UnitySDK::FromName("UnityEngine.ProBuilder", "MeshHandles")->GetStaticField(0x63130);
		}

		static ::UnityEngine::Vector2* StaticGet_k_Billboard0()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine.ProBuilder", "MeshHandles")->GetStaticField(0x14440);
		}

		static ::UnityEngine::Vector2* StaticGet_k_Billboard2()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine.ProBuilder", "MeshHandles")->GetStaticField(0x14448);
		}

		static ::UnityEngine::Vector2* StaticGet_k_Billboard1()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine.ProBuilder", "MeshHandles")->GetStaticField(0x14450);
		}

		static ::UnityEngine::Vector2* StaticGet_k_Billboard3()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("UnityEngine.ProBuilder", "MeshHandles")->GetStaticField(0x14458);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CCTOR_OFFSET))();
		}

		static ::System::Void CreateFaceMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreateFaceMeshFromFaces(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESHFROMFACES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreateEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreateEdgeMesh_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreateVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreateVertexMesh_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2, ::System::Collections::Generic::IList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreatePointMesh(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTMESH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreatePointBillboardMesh(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreatePointBillboardMesh_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreateEdgeBillboardMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreateEdgeBillboardMesh_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2, ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_1_OFFSET))(a1, a2, a3);
		}

	};
}
