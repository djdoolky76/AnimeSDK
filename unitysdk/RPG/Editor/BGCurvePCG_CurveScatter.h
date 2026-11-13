#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_CurveScatter_ScatterSetting.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"
class BGCurveExtention;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_AIBFNLFNFEE_OFFSET UNITYSDK_OFFSET(0x1825B010)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1825B090)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0x1825AFD0)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_HNJEHJDMJKG_OFFSET UNITYSDK_OFFSET(0x1825A470)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1825A330)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_MPNEPIGKJOG_OFFSET UNITYSDK_OFFSET(0x1825A5A0)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_NAIJGAMNJIE_OFFSET UNITYSDK_OFFSET(0x1825A950)
#define RPG_EDITOR_BGCURVEPCG_CURVESCATTER_NEAHCOOPECD_OFFSET UNITYSDK_OFFSET(0x1825A4C0)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_CurveScatter_TypeDefinitionIndex = 53125;

	class BGCurvePCG_CurveScatter : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::UnityEngine::GameObject* ModuleObject; // 0x38
		::RPG::Editor::BGCurvePCG_CurveScatter_ScatterSetting Setting; // 0x40
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* _ScatterPoints; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HNJEHJDMJKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_HNJEHJDMJKG_OFFSET))(this);
		}

		::System::Void MPNEPIGKJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_MPNEPIGKJOG_OFFSET))(this);
		}

		::System::Void NEAHCOOPECD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_NEAHCOOPECD_OFFSET))(this);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_FHPAOJGFHHE_OFFSET))(this);
		}

		::System::Void AIBFNLFNFEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_AIBFNLFNFEE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* NAIJGAMNJIE(::System::Collections::Generic::List_1<::System::Object*>* a1, ::RPG::Editor::BGCurvePCG_CurveScatter_ScatterSetting a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::RPG::Editor::BGCurvePCG_CurveScatter_ScatterSetting))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_CURVESCATTER_NAIJGAMNJIE_OFFSET))(this, a1, a2);
		}

	};
}
