#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder::MeshOperations { class MeshImportSettings; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F234770)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F232270)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F232330)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2320D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1F232510)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_OFFSET UNITYSDK_OFFSET(0x1F232340)

namespace UnityEngine::ProBuilder::MeshOperations
{
	class MeshImporter : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* m_SourceMaterials; // 0x10
		::UnityEngine::Mesh* m_SourceMesh; // 0x18
		::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* m_Vertices; // 0x20
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Destination; // 0x28
		static ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings** StaticGet_k_DefaultImportSettings()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "MeshImporter")->GetStaticField(0x54960);
		}

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Mesh* a1, ::Il2CppArray<::UnityEngine::Material*>* a2, ::UnityEngine::ProBuilder::ProBuilderMesh* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_CCTOR_OFFSET))();
		}

		::System::Boolean Import(::UnityEngine::GameObject* a1, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_OFFSET))(this, a1, a2);
		}

		::System::Void Import_1(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_1_OFFSET))(this, a1);
		}

	};
}
