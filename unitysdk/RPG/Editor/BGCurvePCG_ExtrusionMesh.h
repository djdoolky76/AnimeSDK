#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_ExtrusionMesh_GeometrySetting.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase_UVMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BGCurveExtention;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_AIBFNLFNFEE_OFFSET UNITYSDK_OFFSET(0xE4A2160)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_ALGEAIFNEDA_OFFSET UNITYSDK_OFFSET(0xE4A1050)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_BGFPOHBKNOJ_OFFSET UNITYSDK_OFFSET(0xE4A15B0)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A2C40)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0xE4A21B0)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_GJBDGBBCAEJ_OFFSET UNITYSDK_OFFSET(0xE4A21F0)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_HOEKDHBPGAI_OFFSET UNITYSDK_OFFSET(0xE4A0FE0)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_JBBFLNDCNFG_OFFSET UNITYSDK_OFFSET(0xE4A2080)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE4A0F00)
#define RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_MPNEPIGKJOG_OFFSET UNITYSDK_OFFSET(0xE4A1540)

namespace RPG::Editor
{
	class BGCurvePCG_ExtrusionMesh : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::UnityEngine::Material* Material; // 0x38
		::UnityEngine::Material* SecctionMaterial; // 0x40
		::System::String* MeshSaveFolder; // 0x48
		::System::String* MeshAssetName; // 0x50
		::RPG::Editor::BGCurvePCG_ExtrusionMesh_GeometrySetting Setting; // 0x58
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* _MeshList; // 0x98
		::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode _UVType; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HOEKDHBPGAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_HOEKDHBPGAI_OFFSET))(this);
		}

		::System::Void MPNEPIGKJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_MPNEPIGKJOG_OFFSET))(this);
		}

		::System::Void JBBFLNDCNFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_JBBFLNDCNFG_OFFSET))(this);
		}

		::System::Void AIBFNLFNFEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_AIBFNLFNFEE_OFFSET))(this);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_FHPAOJGFHHE_OFFSET))(this);
		}

		::System::Void ALGEAIFNEDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_ALGEAIFNEDA_OFFSET))(this);
		}

		::UnityEngine::Mesh* GJBDGBBCAEJ(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_GJBDGBBCAEJ_OFFSET))(this, a1);
		}

		::System::Void BGFPOHBKNOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_EXTRUSIONMESH_BGFPOHBKNOJ_OFFSET))(this);
		}

	};
}
