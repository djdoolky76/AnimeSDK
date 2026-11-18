#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralToggleWidgetController.h"

class FDELLONEODJ;
class ODNBJIEICJH;
namespace MoleMole { class UIGeneralToggleWidgetControllerWithModel_ViewModel; }
namespace MoleMole { class UIGeneralToggleWidgetController_OnClickCallback; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ACHIPEMGJJD_OFFSET UNITYSDK_OFFSET(0x1804F040)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_CHANGEONSTATEWITHCHECK_OFFSET UNITYSDK_OFFSET(0x1804E650)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_EGAEGENKNFP_OFFSET UNITYSDK_OFFSET(0x1804EEA0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_GETUISTATEISON_OFFSET UNITYSDK_OFFSET(0x1804EB20)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x1804EA00)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1804E8C0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_OJGAAFEKOPO_OFFSET UNITYSDK_OFFSET(0x1804F260)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONENPJNKDEO_OFFSET UNITYSDK_OFFSET(0x1804EF70)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1804EC40)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1804E710)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_REFRESHVIEWWITHMODEL_OFFSET UNITYSDK_OFFSET(0x1804E150)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1804E3D0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1804EC90)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x1804ECF0)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1804ED80)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1804ED90)
#define MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1804EE90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralToggleWidgetControllerWithModel_TypeDefinitionIndex = 83188;

	class UIGeneralToggleWidgetControllerWithModel : public ::MoleMole::UIGeneralToggleWidgetController
	{
	public:
		::MoleMole::UIGeneralToggleWidgetControllerWithModel_ViewModel* FFDBFAEKDCL; // 0x2E0
		::FDELLONEODJ* EFKMGPGJDND; // 0x2E8
		::ODNBJIEICJH* ACBKNPLDEIN; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL__CTOR_OFFSET))(this);
		}

		::System::Void RefreshViewWithModel(::LJHFMILANJA_1<::System::Boolean>* model, ::System::Func_1<::System::Boolean>* CheckCanToggle, ::System::Action_1<::System::Boolean>* OnUIStateChange)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_REFRESHVIEWWITHMODEL_OFFSET))(this, model, CheckCanToggle, OnUIStateChange);
		}

		::System::Void RefreshView(::System::Boolean isOn, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* callback, ::System::Func_1<::System::Boolean>* CheckCanToggle, ::System::Action_1<::System::Action*>* doubleCheckAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback*, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_REFRESHVIEW_OFFSET))(this, isOn, callback, CheckCanToggle, doubleCheckAction);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void ChangeOnStateWithCheck(::System::Boolean isOn, ::System::Boolean useAnim, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_CHANGEONSTATEWITHCHECK_OFFSET))(this, isOn, useAnim, force);
		}

		::System::Boolean GetUIStateIsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_GETUISTATEISON_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_RefreshView(::System::Boolean P0, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback* P1, ::System::Func_1<::System::Boolean>* P2, ::System::Action_1<::System::Action*>* P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIGeneralToggleWidgetController_OnClickCallback*, ::System::Func_1<::System::Boolean>*, ::System::Action_1<::System::Action*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL___BASE_REFRESHVIEW_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void KDGMEFEJMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_KDGMEFEJMGJ_OFFSET))(this);
		}

		::System::Void EGAEGENKNFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_EGAEGENKNFP_OFFSET))(this);
		}

		::System::Void ONENPJNKDEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ONENPJNKDEO_OFFSET))(this);
		}

		::System::Void ACHIPEMGJJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_ACHIPEMGJJD_OFFSET))(this);
		}

		::System::Void OJGAAFEKOPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOGGLEWIDGETCONTROLLERWITHMODEL_OJGAAFEKOPO_OFFSET))(this);
		}
	};
}
