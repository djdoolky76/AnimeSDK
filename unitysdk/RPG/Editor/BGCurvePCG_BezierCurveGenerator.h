#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_BezierCurveGenerator_CurveGenerateSetting.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"
class BGCurveExtention;
namespace RPG::Client { class BezierCurve; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_AIBFNLFNFEE_OFFSET UNITYSDK_OFFSET(0xE4944C0)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_BEPPEACKGBD_OFFSET UNITYSDK_OFFSET(0xE4954D0)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE495590)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0xE493970)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_HOEKDHBPGAI_OFFSET UNITYSDK_OFFSET(0xE493B90)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_KGOAMMKPKDF_OFFSET UNITYSDK_OFFSET(0xE493BE0)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE493A50)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_MPNEPIGKJOG_OFFSET UNITYSDK_OFFSET(0xE493C70)
#define RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_PFDJFKDEGGC_OFFSET UNITYSDK_OFFSET(0xE493CD0)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_BezierCurveGenerator_TypeDefinitionIndex = 52018;

	class BGCurvePCG_BezierCurveGenerator : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::RPG::Editor::BGCurvePCG_BezierCurveGenerator_CurveGenerateSetting Setting; // 0x38
		::System::Byte _padding0[0x4];
		::RPG::Client::BezierCurve* _BezierCurve; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* _Anchors; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_CTOR_OFFSET))(this);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_FHPAOJGFHHE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void HOEKDHBPGAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_HOEKDHBPGAI_OFFSET))(this);
		}

		::System::Void MPNEPIGKJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_MPNEPIGKJOG_OFFSET))(this);
		}

		::System::Void AIBFNLFNFEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_AIBFNLFNFEE_OFFSET))(this);
		}

		::System::Void KGOAMMKPKDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_KGOAMMKPKDF_OFFSET))(this);
		}

		::System::Void PFDJFKDEGGC(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_PFDJFKDEGGC_OFFSET))(this, a1, a2);
		}

		::System::Void BEPPEACKGBD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_BEZIERCURVEGENERATOR_BEPPEACKGBD_OFFSET))(this);
		}

	};
}
