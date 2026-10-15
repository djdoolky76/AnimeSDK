#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
class HAGAFPDHLCK_Section;

#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_GEOMETRYSETTING_CCTOR_OFFSET UNITYSDK_OFFSET(0xE4A2CF0)

namespace RPG::Editor
{
	struct alignas(8) BGCurvePCG_ExtrusionMesh_GeometrySetting
	{
		::UnityEngine::Vector2 Range; // 0x10
		::System::Single MeshSplit; // 0x18
		::System::Single UVSplitDist; // 0x1C
		::System::Boolean IfAdaptiveDivide; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single VertexDistance; // 0x24
		::UnityEngine::Vector2 VertexDistanceRange; // 0x28
		::System::Single Tolerance; // 0x30
		::System::Boolean IfUseSectionPoint; // 0x34
		::System::Byte _padding1[0x3];
		::System::Single LeftOffset; // 0x38
		::System::Single RightOffset; // 0x3C
		::HAGAFPDHLCK_Section* Section; // 0x40
		::System::Boolean IfGenerateSection; // 0x48
		static ::RPG::Editor::BGCurvePCG_ExtrusionMesh_GeometrySetting* StaticGet_init()
		{
			return (::RPG::Editor::BGCurvePCG_ExtrusionMesh_GeometrySetting*)UnitySDK::FromName("RPG.Editor", "GeometrySetting")->GetStaticField(0x53CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_GEOMETRYSETTING_CCTOR_OFFSET))();
		}

	};
}
