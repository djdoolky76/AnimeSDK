#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIVHSStoreDialogV2PopWindowController; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_GETISCDFUNC_OFFSET UNITYSDK_OFFSET(0x1563D0A0)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_GETISMULTISELECTFULLFUNC_OFFSET UNITYSDK_OFFSET(0x1563D060)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_GETISSELECTEDVHSCOLLECTIONFUNC_OFFSET UNITYSDK_OFFSET(0x1563D020)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_OKBTNISINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1563CEF0)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_OKBTNTEXTMAPKEY_OFFSET UNITYSDK_OFFSET(0x1563CF30)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_ONOKBTNCLICK_OFFSET UNITYSDK_OFFSET(0x1563CFE0)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1563CEB0)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_REFRESHTAGSPREVIEW_OFFSET UNITYSDK_OFFSET(0x1563CFA0)
#define MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1563CEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreDialogV2PopWindowController_Logic_TypeDefinitionIndex = 55720;

	class UIVHSStoreDialogV2PopWindowController_Logic : public ::System::Object
	{
	public:
		::MoleMole::UIVHSStoreDialogV2PopWindowController* _controller; // 0x10

		::System::Void _ctor(::MoleMole::UIVHSStoreDialogV2PopWindowController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIVHSStoreDialogV2PopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC__CTOR_OFFSET))(this, controller);
		}

		::System::Void OnUIOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_ONUIOPEN_OFFSET))(this);
		}

		::System::Boolean OkBtnIsInteractable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_OKBTNISINTERACTABLE_OFFSET))(this);
		}

		::System::String* OkBtnTextmapKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_OKBTNTEXTMAPKEY_OFFSET))(this);
		}

		::System::Void RefreshTagsPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_REFRESHTAGSPREVIEW_OFFSET))(this);
		}

		::System::Void OnOKBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_ONOKBTNCLICK_OFFSET))(this);
		}

		::System::Func_2<::System::Int32, ::System::Boolean>* GetIsSelectedVHSCollectionFunc()
		{
			return ((::System::Func_2<::System::Int32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_GETISSELECTEDVHSCOLLECTIONFUNC_OFFSET))(this);
		}

		::System::Func_1<::System::Boolean>* GetIsMultiSelectFullFunc()
		{
			return ((::System::Func_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_GETISMULTISELECTFULLFUNC_OFFSET))(this);
		}

		::System::Func_2<::System::Int32, ::System::Boolean>* GetIsCDFunc()
		{
			return ((::System::Func_2<::System::Int32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREDIALOGV2POPWINDOWCONTROLLER_LOGIC_GETISCDFUNC_OFFSET))(this);
		}
	};
}
