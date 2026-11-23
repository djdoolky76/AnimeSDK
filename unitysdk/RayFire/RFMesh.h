#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/B3A7F113FE1DE383.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RayFire { class RayfireRigid; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RAYFIRE_RFMESH_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x2957EB0)
#define RAYFIRE_RFMESH_CONVERTRFMESHES_OFFSET UNITYSDK_OFFSET(0x2957F60)
#define RAYFIRE_RFMESH_GETMESH_OFFSET UNITYSDK_OFFSET(0x2958080)
#define RAYFIRE_RFMESH_LOADTRIANGLES_OFFSET UNITYSDK_OFFSET(0x2958610)
#define RAYFIRE_RFMESH_SETCOMPRESSEDTANGENTS_OFFSET UNITYSDK_OFFSET(0x29586D0)
#define RAYFIRE_RFMESH_SETCOMPRESSEDUV_OFFSET UNITYSDK_OFFSET(0x2958870)
#define RAYFIRE_RFMESH_SETCOMPRESSEDVERTICES_OFFSET UNITYSDK_OFFSET(0x29589A0)

namespace RayFire
{
	inline static constexpr unsigned int RFMesh_TypeDefinitionIndex = 15418;

	class RFMesh : public ::System::Object
	{
	public:
		::System::Boolean compress; // 0x10
		::System::Byte _padding0[0x3];
		::System::Int32 subMeshCount; // 0x14
		::UnityEngine::B3A7F113FE1DE383 bounds; // 0x18
		::Il2CppArray<::System::Int32>* triangles; // 0x30
		::System::Collections::Generic::List_1<::System::Object*>* subTriangles; // 0x38
		::Il2CppArray<::UnityEngine::Vector2>* uv; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* vertices; // 0x48
		::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* tangents; // 0x50
		::System::Collections::Generic::List_1<::System::Int32>* uvComp; // 0x58
		::System::Collections::Generic::List_1<::System::Int32>* verticesComp; // 0x60
		::System::Collections::Generic::List_1<::System::Int32>* tangentsComp; // 0x68

		static ::Il2CppArray<::UnityEngine::Vector2>* SetCompressedUv(::System::Collections::Generic::List_1<::System::Int32>* F8E5A281F3EFA368)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFMESH_SETCOMPRESSEDUV_OFFSET))(F8E5A281F3EFA368);
		}

		static ::System::Void ConvertRfMeshes(::RayFire::RayfireRigid* E9D1ABA13C0D414F)
		{
			return ((::System::Void(*)(::RayFire::RayfireRigid*))((::PBYTE)hIl2Cpp + RAYFIRE_RFMESH_CONVERTRFMESHES_OFFSET))(E9D1ABA13C0D414F);
		}

		::System::Void LoadTriangles(::UnityEngine::Mesh* FF762A0FE86505A5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RAYFIRE_RFMESH_LOADTRIANGLES_OFFSET))(this, FF762A0FE86505A5);
		}

		::UnityEngine::Mesh* GetMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + RAYFIRE_RFMESH_GETMESH_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* SetCompressedTangents(::System::Collections::Generic::List_1<::System::Int32>* EDA6B656D78516D4)
		{
			return ((::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFMESH_SETCOMPRESSEDTANGENTS_OFFSET))(EDA6B656D78516D4);
		}

		static ::UnityEngine::Mesh* BakeMesh(::UnityEngine::SkinnedMeshRenderer* EA45D6A86FA0FFD7)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RAYFIRE_RFMESH_BAKEMESH_OFFSET))(EA45D6A86FA0FFD7);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* SetCompressedVertices(::System::Collections::Generic::List_1<::System::Int32>* EC54DEF21B887A26)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RAYFIRE_RFMESH_SETCOMPRESSEDVERTICES_OFFSET))(EC54DEF21B887A26);
		}
	};
}
