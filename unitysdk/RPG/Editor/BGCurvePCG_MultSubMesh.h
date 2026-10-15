#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase_UVMode.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MultSubMesh_GeometrySetting.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BGCurveExtention;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_AIBFNLFNFEE_OFFSET UNITYSDK_OFFSET(0xE4A88B0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_ALGEAIFNEDA_OFFSET UNITYSDK_OFFSET(0xE4A7880)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_BGFPOHBKNOJ_OFFSET UNITYSDK_OFFSET(0xE4A7D60)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A8A10)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0xE4A8870)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_GJBDGBBCAEJ_OFFSET UNITYSDK_OFFSET(0xE4A8900)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_HOEKDHBPGAI_OFFSET UNITYSDK_OFFSET(0xE4A7810)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_JBBFLNDCNFG_OFFSET UNITYSDK_OFFSET(0xE4A87F0)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE4A7670)
#define RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_MPNEPIGKJOG_OFFSET UNITYSDK_OFFSET(0xE4A7CF0)

namespace RPG::Editor
{
	class BGCurvePCG_MultSubMesh : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::UnityEngine::Material* Material; // 0x38
		::System::String* MeshSaveFolder; // 0x40
		::System::String* MeshAssetName; // 0x48
		::RPG::Editor::BGCurvePCG_MultSubMesh_GeometrySetting Setting; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* _MeshList; // 0x80
		::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode _UVType; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HOEKDHBPGAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_HOEKDHBPGAI_OFFSET))(this);
		}

		::System::Void MPNEPIGKJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_MPNEPIGKJOG_OFFSET))(this);
		}

		::System::Void JBBFLNDCNFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_JBBFLNDCNFG_OFFSET))(this);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_FHPAOJGFHHE_OFFSET))(this);
		}

		::System::Void AIBFNLFNFEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_AIBFNLFNFEE_OFFSET))(this);
		}

		::System::Void ALGEAIFNEDA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_ALGEAIFNEDA_OFFSET))(this);
		}

		::UnityEngine::Mesh* GJBDGBBCAEJ(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_GJBDGBBCAEJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGFPOHBKNOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MULTSUBMESH_BGFPOHBKNOJ_OFFSET))(this);
		}

	};
}
