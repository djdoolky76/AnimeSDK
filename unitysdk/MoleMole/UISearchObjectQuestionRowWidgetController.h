#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class JBJKMOMNPCF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISearchObjectQuestionRowWidgetControllerContext; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x15C69EB0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C6A070)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15C6A180)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C6A100)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C69D00)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET UNITYSDK_OFFSET(0x15C6A1E0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_REFRESHSELECT_OFFSET UNITYSDK_OFFSET(0x15C69F10)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15C6A490)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C6A500)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x15C6A570)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C6A580)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15C6A610)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C6A6B0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C6A740)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionRowWidgetController_TypeDefinitionIndex = 65108;

	class UISearchObjectQuestionRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::JBJKMOMNPCF* _view; // 0x2F8
		::System::String* ONCJFAOJAIA; // 0x300
		::System::String* ONFNNNOKFPE; // 0x308
		::System::String* HGEBHPOBADI; // 0x310
		::System::String* GCNNDJCFEIO; // 0x318
		::System::Boolean MGFJHPNGOMA; // 0x320
		::System::Boolean GOMIECMGHEI; // 0x321
		::System::Byte _padding0[0x6];
		::System::Action_2<::System::Int32, ::System::Boolean>* ABJKHOHMLMO; // 0x328
		::System::Int32 LHIACCFJJKP; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void RefreshSelect(::System::Boolean selected, ::System::Boolean isInitOrChange, ::System::Boolean triggerCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_REFRESHSELECT_OFFSET))(this, selected, isInitOrChange, triggerCallback);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshByContext(::MoleMole::UISearchObjectQuestionRowWidgetControllerContext* ctx)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISearchObjectQuestionRowWidgetControllerContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_REFRESHBYCONTEXT_OFFSET))(this, ctx);
		}

		::System::Void SetInteractable(::System::Boolean isInteractable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER_SETINTERACTABLE_OFFSET))(this, isInteractable);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
