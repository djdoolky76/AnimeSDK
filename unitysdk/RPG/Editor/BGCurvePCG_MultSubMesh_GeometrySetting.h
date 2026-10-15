#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_GEOMETRYSETTING_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4A8AB0)

namespace RPG::Editor
{
	struct alignas(8) BGCurvePCG_MultSubMesh_GeometrySetting
	{
		::System::Boolean IfAdaptiveDivide; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single VertexDistance; // 0x14
		::UnityEngine::Vector2 VertexDistanceRange; // 0x18
		::System::Single Tolerance; // 0x20
		::System::Single NormalOffset; // 0x24
		::System::Single SubMeshWidth; // 0x28
		::System::Int32 TrailCount; // 0x2C
		::System::Single BaseMeshWidth; // 0x30
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* SingleMeshConfigs; // 0x38
		static ::RPG::Editor::BGCurvePCG_MultSubMesh_GeometrySetting* StaticGet_init()
		{
			return (::RPG::Editor::BGCurvePCG_MultSubMesh_GeometrySetting*)UnitySDK::FromName("RPG.Editor", "GeometrySetting")->GetStaticField(0x53FE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_GEOMETRYSETTING_CCTOR_OFFSET))();
		}

	};
}
