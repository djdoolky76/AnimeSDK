#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AdditionalCanvasShaderChannels.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/UIVertex.h"
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }

#define UNITYENGINE_UI_VERTEXHELPER_ADDSIMPLEVERT_OFFSET UNITYSDK_OFFSET(0x20811AB0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDTRIANGLE_OFFSET UNITYSDK_OFFSET(0x20811C30)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXQUAD_OFFSET UNITYSDK_OFFSET(0x2080C080)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x20811CA0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET UNITYSDK_OFFSET(0x20811D20)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_1_OFFSET UNITYSDK_OFFSET(0x20811950)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_2_OFFSET UNITYSDK_OFFSET(0x208119E0)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_3_OFFSET UNITYSDK_OFFSET(0x20811B30)
#define UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET UNITYSDK_OFFSET(0x20811800)
#define UNITYENGINE_UI_VERTEXHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x20812210)
#define UNITYENGINE_UI_VERTEXHELPER_CLEAR_OFFSET UNITYSDK_OFFSET(0x2080B4D0)
#define UNITYENGINE_UI_VERTEXHELPER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20810020)
#define UNITYENGINE_UI_VERTEXHELPER_CTOR_OFFSET UNITYSDK_OFFSET(0x20810010)
#define UNITYENGINE_UI_VERTEXHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x20810960)
#define UNITYENGINE_UI_VERTEXHELPER_FILLMESHWITHCHANNEL_OFFSET UNITYSDK_OFFSET(0x20811420)
#define UNITYENGINE_UI_VERTEXHELPER_FILLMESH_OFFSET UNITYSDK_OFFSET(0x20811070)
#define UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAMNOTOPOLOGY_OFFSET UNITYSDK_OFFSET(0x20811F20)
#define UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET UNITYSDK_OFFSET(0x20811D70)
#define UNITYENGINE_UI_VERTEXHELPER_GET_COLORS_OFFSET UNITYSDK_OFFSET(0x2080FFE0)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x20810D40)
#define UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTVERTCOUNT_OFFSET UNITYSDK_OFFSET(0x20810D20)
#define UNITYENGINE_UI_VERTEXHELPER_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x20810000)
#define UNITYENGINE_UI_VERTEXHELPER_GET_POSITIONS_OFFSET UNITYSDK_OFFSET(0x2080FFD0)
#define UNITYENGINE_UI_VERTEXHELPER_GET_UV0S_OFFSET UNITYSDK_OFFSET(0x2080FFF0)
#define UNITYENGINE_UI_VERTEXHELPER_INITIALIZELISTIFREQUIRED_OFFSET UNITYSDK_OFFSET(0x208105D0)
#define UNITYENGINE_UI_VERTEXHELPER_POPULATEUIVERTEX_OFFSET UNITYSDK_OFFSET(0x20810D60)
#define UNITYENGINE_UI_VERTEXHELPER_SETUIVERTEX_OFFSET UNITYSDK_OFFSET(0x20810EA0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int VertexHelper_TypeDefinitionIndex = 6897;

	class VertexHelper : public ::System::Object
	{
	public:
		::System::Boolean poppingMesh; // 0x10
		::System::Byte _padding0[0x7];
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* m_Positions; // 0x18
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* m_Colors; // 0x20
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* m_Uv0S; // 0x28
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* m_Uv1S; // 0x30
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* m_Uv2S; // 0x38
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* m_Uv3S; // 0x40
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* m_Normals; // 0x48
		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector4>* m_Tangents; // 0x50
		::UnityEngine::Pooled::PooledList_1<::System::Int32>* m_Indices; // 0x58
		::System::Boolean m_ListsInitalized; // 0x60
		static ::UnityEngine::Vector4* StaticGet_s_DefaultTangent()
		{
			return (::UnityEngine::Vector4*)UnitySDK::FromName("UnityEngine.UI", "VertexHelper")->GetStaticField(0xDAC0);
		}

		static ::UnityEngine::Vector3* StaticGet_s_DefaultNormal()
		{
			return (::UnityEngine::Vector3*)UnitySDK::FromName("UnityEngine.UI", "VertexHelper")->GetStaticField(0xDAD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_CCTOR_OFFSET))();
		}

		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>* get_positions()
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_POSITIONS_OFFSET))(this);
		}

		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>* get_colors()
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Color32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_COLORS_OFFSET))(this);
		}

		::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>* get_uv0s()
		{
			return ((::UnityEngine::Pooled::PooledList_1<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_UV0S_OFFSET))(this);
		}

		::UnityEngine::Pooled::PooledList_1<::System::Int32>* get_indices()
		{
			return ((::UnityEngine::Pooled::PooledList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_INDICES_OFFSET))(this);
		}

		::System::Void InitializeListIfRequired()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_INITIALIZELISTIFREQUIRED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_CLEAR_OFFSET))(this);
		}

		::System::Int32 get_currentVertCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTVERTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_currentIndexCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GET_CURRENTINDEXCOUNT_OFFSET))(this);
		}

		::System::Void PopulateUIVertex(::UnityEngine::UIVertex a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_POPULATEUIVERTEX_OFFSET))(this, a1, a2);
		}

		::System::Void SetUIVertex(::UnityEngine::UIVertex a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_SETUIVERTEX_OFFSET))(this, a1, a2);
		}

		::System::Void FillMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_FILLMESH_OFFSET))(this, a1);
		}

		::System::Void FillMeshWithChannel(::UnityEngine::Mesh* a1, ::UnityEngine::AdditionalCanvasShaderChannels a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::AdditionalCanvasShaderChannels))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_FILLMESHWITHCHANNEL_OFFSET))(this, a1, a2);
		}

		::System::Void AddVert(::UnityEngine::Vector3 a1, ::UnityEngine::Color32 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector2 a5, ::UnityEngine::Vector2 a6, ::UnityEngine::Vector3 a7, ::UnityEngine::Vector4 a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void AddVert_1(::UnityEngine::Vector3 a1, ::UnityEngine::Color32 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4, ::UnityEngine::Vector3 a5, ::UnityEngine::Vector4 a6)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_1_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void AddVert_2(::UnityEngine::Vector3 a1, ::UnityEngine::Color32 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddSimpleVert(::UnityEngine::Vector3 a1, ::UnityEngine::Color32 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDSIMPLEVERT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddVert_3(::UnityEngine::UIVertex a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIVertex))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDVERT_3_OFFSET))(this, a1);
		}

		::System::Void AddTriangle(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDTRIANGLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AddUIVertexQuad(::Il2CppArray<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXQUAD_OFFSET))(this, a1);
		}

		::System::Void AddUIVertexStream(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1, ::UnityEngine::Pooled::PooledList_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Pooled::PooledList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXSTREAM_OFFSET))(this, a1, a2);
		}

		::System::Void AddUIVertexTriangleStream(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_ADDUIVERTEXTRIANGLESTREAM_OFFSET))(this, a1);
		}

		::System::Void GetUIVertexStream(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAM_OFFSET))(this, a1);
		}

		::System::Void GetUIVertexStreamNoTopology(::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_VERTEXHELPER_GETUIVERTEXSTREAMNOTOPOLOGY_OFFSET))(this, a1);
		}

	};
}
