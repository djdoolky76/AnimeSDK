#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOMEDAKGPPJ.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class BKGKJNHLCKC;
class GIBMJLOJLKD;
namespace MoleMole { class UIBangbooDevelopPopWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_BANGBOOBASEWIDGET_GETLEFTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x177E0390)
#define MOLEMOLE_BANGBOOBASEWIDGET_GETRIGHTBTNTEXT_OFFSET UNITYSDK_OFFSET(0x177E03E0)
#define MOLEMOLE_BANGBOOBASEWIDGET_GETTIPSTEXT_OFFSET UNITYSDK_OFFSET(0x177E0430)
#define MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENTDEVELOPUI_OFFSET UNITYSDK_OFFSET(0x177E0240)
#define MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x177E0220)
#define MOLEMOLE_BANGBOOBASEWIDGET_LEFTBTNCALL_OFFSET UNITYSDK_OFFSET(0x177E0510)
#define MOLEMOLE_BANGBOOBASEWIDGET_ONHIDE_OFFSET UNITYSDK_OFFSET(0x177E05A0)
#define MOLEMOLE_BANGBOOBASEWIDGET_RIGHTBTNCALL_OFFSET UNITYSDK_OFFSET(0x177E04D0)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETATTRIBUTEFUNC_OFFSET UNITYSDK_OFFSET(0x177E02C0)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETBANGBOODATA_OFFSET UNITYSDK_OFFSET(0x177E0480)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETPARENTVIEW_OFFSET UNITYSDK_OFFSET(0x177E0550)
#define MOLEMOLE_BANGBOOBASEWIDGET_SETPROGRESSMAT_OFFSET UNITYSDK_OFFSET(0x177E0310)
#define MOLEMOLE_BANGBOOBASEWIDGET_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x177E0230)
#define MOLEMOLE_BANGBOOBASEWIDGET_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x177E0350)
#define MOLEMOLE_BANGBOOBASEWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x177E0610)
#define MOLEMOLE_BANGBOOBASEWIDGET___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x177E0670)

namespace MoleMole
{
	inline static constexpr unsigned int BangbooBaseWidget_TypeDefinitionIndex = 74871;

	class BangbooBaseWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::BKGKJNHLCKC* _data; // 0x2C8
		::UnityEngine::Material* _percentMaterial; // 0x2D0
		::GIBMJLOJLKD* _IJNLLIGGGPM_k__BackingField; // 0x2D8
		::System::Action_3<::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::EOMEDAKGPPJ>* AttSet; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET__CTOR_OFFSET))(this);
		}

		::GIBMJLOJLKD* get_Parent()
		{
			return ((::GIBMJLOJLKD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_Parent(::GIBMJLOJLKD* value)
		{
			return ((::System::Void(*)(::PVOID, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SET_PARENT_OFFSET))(this, value);
		}

		::MoleMole::UIBangbooDevelopPopWindowController* get_parentDevelopUI()
		{
			return ((::MoleMole::UIBangbooDevelopPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GET_PARENTDEVELOPUI_OFFSET))(this);
		}

		::System::Void SetAttributeFunc(::System::Action_3<::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::EOMEDAKGPPJ>* attributeSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::System::Collections::Generic::List_1<::System::Tuple_2<::System::Int32, ::System::Int64>*>*, ::EOMEDAKGPPJ>*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SETATTRIBUTEFUNC_OFFSET))(this, attributeSet);
		}

		::System::Void SetProgressMat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SETPROGRESSMAT_OFFSET))(this);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_UPDATEUI_OFFSET))(this);
		}

		::System::String* GetLeftBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GETLEFTBTNTEXT_OFFSET))(this);
		}

		::System::String* GetRightBtnText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GETRIGHTBTNTEXT_OFFSET))(this);
		}

		::System::String* GetTipsText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_GETTIPSTEXT_OFFSET))(this);
		}

		::System::Void SetBangbooData(::BKGKJNHLCKC* data)
		{
			return ((::System::Void(*)(::PVOID, ::BKGKJNHLCKC*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SETBANGBOODATA_OFFSET))(this, data);
		}

		::System::Void RightBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_RIGHTBTNCALL_OFFSET))(this);
		}

		::System::Void LeftBtnCall()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_LEFTBTNCALL_OFFSET))(this);
		}

		::System::Void SetParentView(::GIBMJLOJLKD* view)
		{
			return ((::System::Void(*)(::PVOID, ::GIBMJLOJLKD*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_SETPARENTVIEW_OFFSET))(this, view);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGBOOBASEWIDGET___BASE_ONHIDE_OFFSET))(this);
		}
	};
}
