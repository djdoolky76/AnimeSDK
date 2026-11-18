#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPNKPNDELEN.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class JBDBPKGHAKB;
class MPDDADKFPBP;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_AKCNABFINIG_OFFSET UNITYSDK_OFFSET(0x182768D0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_GHLJOJPMGIF_OFFSET UNITYSDK_OFFSET(0x182754A0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_NCBAHPEGBEC_OFFSET UNITYSDK_OFFSET(0x182755B0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18273C10)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18273D20)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18273CA0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18273A60)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_PJJEAFFMNLN_OFFSET UNITYSDK_OFFSET(0x18274F20)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x18275130)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET UNITYSDK_OFFSET(0x18274D70)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18273DE0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0x182747F0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETLOCK_OFFSET UNITYSDK_OFFSET(0x18275300)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET UNITYSDK_OFFSET(0x18275410)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETUPSTATE_OFFSET UNITYSDK_OFFSET(0x18275540)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18276670)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18276680)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18276710)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x182767B0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18276840)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianItemIconBtnWidgetController_TypeDefinitionIndex = 45834;

	class UISuibianItemIconBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::JBDBPKGHAKB* _view; // 0x2F8
		::MPDDADKFPBP* CFJFKJJDDCE; // 0x300
		::System::Int32 JJLPFNHCCFP; // 0x308
		::System::Int32 BMEONJDOIAL; // 0x30C
		::System::Boolean BOKGIPDKOBG; // 0x310
		::System::Byte _padding0[0x3];
		::System::Int32 DAEENJIGFBI; // 0x314

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmptyState(::System::Boolean showEmptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET))(this, showEmptyLabel);
		}

		::System::Void RefreshView(::MPDDADKFPBP* itemView)
		{
			return ((::System::Void(*)(::PVOID, ::MPDDADKFPBP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemView);
		}

		::System::Void RefreshView_1(::System::Int32 itemID, ::System::Int32 curCount, ::System::Int32 targetcount, ::DPNKPNDELEN Type, ::System::Boolean showTips, ::System::Action* customTipHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::DPNKPNDELEN, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, itemID, curCount, targetcount, Type, showTips, customTipHandle);
		}

		::System::Void RefreshView_2(::System::Int32 itemID, ::System::Int32 count, ::DPNKPNDELEN showCountTextType, ::System::Boolean isShowTip, ::System::Action* customTipHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::DPNKPNDELEN, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET))(this, itemID, count, showCountTextType, isShowTip, customTipHandle);
		}

		::System::Void SetLock(::System::Boolean isLock, ::System::Boolean isDress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETLOCK_OFFSET))(this, isLock, isDress);
		}

		::System::Void SetMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET))(this, active);
		}

		::System::Void SetUpState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETUPSTATE_OFFSET))(this, active);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void PJJEAFFMNLN(::MPDDADKFPBP* DCBMIKDDJBD, ::System::Int32 MPLLHBMAGDH)
		{
			return ((::System::Void(*)(::PVOID, ::MPDDADKFPBP*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_PJJEAFFMNLN_OFFSET))(this, DCBMIKDDJBD, MPLLHBMAGDH);
		}

		::System::Void NCBAHPEGBEC(::System::Int32 OIKFFGKDHME, ::System::Int32 MPLLHBMAGDH, ::System::Int32 NJEJLLAAIAJ, ::DPNKPNDELEN DIBELCGJBOP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::DPNKPNDELEN))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_NCBAHPEGBEC_OFFSET))(this, OIKFFGKDHME, MPLLHBMAGDH, NJEJLLAAIAJ, DIBELCGJBOP);
		}

		::System::Void GHLJOJPMGIF(::System::Boolean JHFPBGAMPKH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_GHLJOJPMGIF_OFFSET))(this, JHFPBGAMPKH);
		}

		::System::Void AKCNABFINIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_AKCNABFINIG_OFFSET))(this);
		}
	};
}
