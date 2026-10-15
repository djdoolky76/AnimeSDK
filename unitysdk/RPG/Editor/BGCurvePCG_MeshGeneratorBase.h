#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/BGCurvePCG_MeshGeneratorBase_UVMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
class BGCurveExtention;
class HAGAFPDHLCK_Section;
namespace RPG::Editor { class BGCurvePCG_MeshGeneratorBase_ANFGPMPBODF; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_ADKJHCGPBAL_OFFSET UNITYSDK_OFFSET(0xE49F590)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_BJOBMAEGJJJ_OFFSET UNITYSDK_OFFSET(0xE4A04C0)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_CMPCNJCKLAM_OFFSET UNITYSDK_OFFSET(0xE4A2940)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A0100)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_EAMEAGBMHBE_OFFSET UNITYSDK_OFFSET(0xE4A2AE0)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_EHKIOIJPAAD_OFFSET UNITYSDK_OFFSET(0xE4A2550)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_GET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0xE4A7530)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_GIAAHBDPHLD_OFFSET UNITYSDK_OFFSET(0xE4A74E0)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_HDPNBJEJCBA_OFFSET UNITYSDK_OFFSET(0xE4A2100)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_HGFHFKIANJE_OFFSET UNITYSDK_OFFSET(0xE49F010)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_OCFFHOMJIGA_OFFSET UNITYSDK_OFFSET(0xE4A2BA0)
#define RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_SET_TARGETOBJECT_OFFSET UNITYSDK_OFFSET(0xE4A7540)

namespace RPG::Editor
{
	class BGCurvePCG_MeshGeneratorBase : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _TargetObject; // 0x10
		::System::Boolean _IfDrawGizmo; // 0x18
		::System::Boolean _IfAutoUpdate; // 0x19
		::System::Byte _padding0[0x6];
		::BGCurveExtention* _CurveExtention; // 0x20
		::UnityEngine::GameObject* _TargetObject_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_CTOR_OFFSET))(this);
		}

		::System::Void GIAAHBDPHLD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_GIAAHBDPHLD_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_TargetObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_GET_TARGETOBJECT_OFFSET))(this);
		}

		::System::Void set_TargetObject(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_SET_TARGETOBJECT_OFFSET))(this, a1);
		}

		::System::Void CMPCNJCKLAM(::System::Collections::Generic::List_1<::System::Object*>* a1, ::System::Single a2, ::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Single, ::RPG::Editor::BGCurvePCG_MeshGeneratorBase_UVMode))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_CMPCNJCKLAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Object*>* BJOBMAEGJJJ(::BGCurveExtention* a1, ::UnityEngine::Vector2 a2, ::System::Single a3)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_BJOBMAEGJJJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::System::Object*>* HGFHFKIANJE(::BGCurveExtention* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::BGCurveExtention*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_HGFHFKIANJE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::System::Object*>* ADKJHCGPBAL(::BGCurveExtention* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2, ::UnityEngine::Vector2 a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::BGCurveExtention*, ::System::Collections::Generic::List_1<::System::Object*>*, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_ADKJHCGPBAL_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Editor::BGCurvePCG_MeshGeneratorBase_ANFGPMPBODF* EHKIOIJPAAD(::BGCurveExtention* a1, ::System::Single a2)
		{
			return ((::RPG::Editor::BGCurvePCG_MeshGeneratorBase_ANFGPMPBODF*(*)(::PVOID, ::BGCurveExtention*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_EHKIOIJPAAD_OFFSET))(this, a1, a2);
		}

		::System::Void HDPNBJEJCBA(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_HDPNBJEJCBA_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Mesh* OCFFHOMJIGA(::System::Collections::Generic::List_1<::System::Object*>* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_OCFFHOMJIGA_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Mesh* EAMEAGBMHBE(::HAGAFPDHLCK_Section* a1, ::System::Collections::Generic::List_1<::System::Object*>* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::HAGAFPDHLCK_Section*, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_MESHGENERATORBASE_EAMEAGBMHBE_OFFSET))(this, a1, a2, a3);
		}

	};
}
