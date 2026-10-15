#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
class BGCurveExtention;
namespace RPG::Client { class LinearModuleRendererMonoPlugin; }
namespace RPG::Editor { class BGCurvePCG_LinearModuleGenerator_ItemData; }
namespace RPG::Editor { class BGCurvePCG_LinearModuleGenerator_ModuleData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_BGFPOHBKNOJ_OFFSET UNITYSDK_OFFSET(0xE49AC40)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xE49C920)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_DDOIACBMHCL_OFFSET UNITYSDK_OFFSET(0xE49C0D0)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0xE49C060)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_FMJAACKGFKJ_OFFSET UNITYSDK_OFFSET(0xE49C8A0)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_HNJEHJDMJKG_OFFSET UNITYSDK_OFFSET(0xE498450)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_IIDAMBPJIFG_OFFSET UNITYSDK_OFFSET(0xE49C800)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_JEDFPCFKOJH_OFFSET UNITYSDK_OFFSET(0xE4985A0)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_KFOKBOEIJIK_OFFSET UNITYSDK_OFFSET(0xE498A80)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_KPJGDHLENIP_1_OFFSET UNITYSDK_OFFSET(0xE498370)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xE498290)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_MBJOPKPFDIP_OFFSET UNITYSDK_OFFSET(0xE49C2A0)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_MPNEPIGKJOG_OFFSET UNITYSDK_OFFSET(0xE49A4B0)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_NAIJGAMNJIE_OFFSET UNITYSDK_OFFSET(0xE49AC80)
#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_NJJIELIDCCB_OFFSET UNITYSDK_OFFSET(0xE49B610)

namespace RPG::Editor
{
	inline static constexpr unsigned int BGCurvePCG_LinearModuleGenerator_TypeDefinitionIndex = 52025;

	class BGCurvePCG_LinearModuleGenerator : public ::RPG::Editor::BGCurvePCG_MeshGeneratorBase
	{
	public:
		::System::String* GrpupName; // 0x30
		::UnityEngine::Vector2 ControlPointDistRange; // 0x38
		::System::Single Tolerance; // 0x40
		::System::Boolean IfGenerateDebugObject; // 0x44
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::System::Object*>* ModuleDatas; // 0x48
		::RPG::Client::LinearModuleRendererMonoPlugin* _RendererPlugin; // 0x50
		::System::Int32 _GroupID; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::BGCurveExtention* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP_1(::BGCurveExtention* a1, ::UnityEngine::Transform* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Transform*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_KPJGDHLENIP_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HNJEHJDMJKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_HNJEHJDMJKG_OFFSET))(this);
		}

		::System::Void MPNEPIGKJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_MPNEPIGKJOG_OFFSET))(this);
		}

		::System::Void BGFPOHBKNOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_BGFPOHBKNOJ_OFFSET))(this);
		}

		::System::Void JEDFPCFKOJH(::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ModuleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ModuleData*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_JEDFPCFKOJH_OFFSET))(this, a1);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_FHPAOJGFHHE_OFFSET))(this);
		}

		::System::Void KFOKBOEIJIK(::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ModuleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ModuleData*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_KFOKBOEIJIK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Object*>* NAIJGAMNJIE(::System::Collections::Generic::List_1<::System::Object*>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_NAIJGAMNJIE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::Object*>* NJJIELIDCCB(::System::Collections::Generic::List_1<::System::Object*>* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_NJJIELIDCCB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 MBJOPKPFDIP(::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ItemData* a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::RPG::Editor::BGCurvePCG_LinearModuleGenerator_ItemData*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_MBJOPKPFDIP_OFFSET))(this, a1);
		}

		::System::Single FMJAACKGFKJ(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_FMJAACKGFKJ_OFFSET))(this, a1);
		}

		::System::UInt32 IIDAMBPJIFG(::System::Single a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_IIDAMBPJIFG_OFFSET))(this, a1);
		}

		::System::Boolean DDOIACBMHCL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_DDOIACBMHCL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

	};
}
