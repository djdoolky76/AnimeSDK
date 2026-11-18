#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBabeltowerPage02Controller.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class JMJDDPOPIBD;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIBabeltowerFightingInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_AFHDKGIOADE_OFFSET UNITYSDK_OFFSET(0x196558A0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CEKHMKOALKF_OFFSET UNITYSDK_OFFSET(0x19655B40)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0x19653E00)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CIOIKNNNMHA_OFFSET UNITYSDK_OFFSET(0x19654FF0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CMIDFLLBLCG_OFFSET UNITYSDK_OFFSET(0x196562B0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CREATESELECTITEM_OFFSET UNITYSDK_OFFSET(0x19654330)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_GETFIGHTINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x196541A0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_GGONMJCOLEC_OFFSET UNITYSDK_OFFSET(0x19654890)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_HJPPOMOJJPG_OFFSET UNITYSDK_OFFSET(0x19655850)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_IIFHNGEGOMJ_OFFSET UNITYSDK_OFFSET(0x19655300)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_LPIIAOPIMKO_OFFSET UNITYSDK_OFFSET(0x19655D10)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_MEIALCGKDID_OFFSET UNITYSDK_OFFSET(0x19655A70)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19654110)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19653F70)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19654460)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19653970)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19653C00)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x196549B0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_TEST_OFFSET UNITYSDK_OFFSET(0x19653900)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19655280)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19655660)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0x19655700)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_CREATESELECTITEM_OFFSET UNITYSDK_OFFSET(0x19655710)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_GETFIGHTINFOWIDGET_OFFSET UNITYSDK_OFFSET(0x19655720)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19655730)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19655740)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19655770)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19655780)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19655790)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_REFRESHDETAIL_OFFSET UNITYSDK_OFFSET(0x196557A0)
#define MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x196557B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerPage03Controller_TypeDefinitionIndex = 40221;

	class UIBabeltowerPage03Controller : public ::MoleMole::UIBabeltowerPage02Controller
	{
	public:
		::JMJDDPOPIBD* _view; // 0x3E8
		::System::Single MKKGEKMHFAH; // 0x3F0
		::System::Byte _padding0[0x4];
		::System::String* MLCLEDHJCBM; // 0x3F8
		::System::Single JOAALEKIKNO; // 0x400
		::System::Int32 MPEBHLOLPJC; // 0x404
		::System::Int32 LBMGLBANFEN; // 0x408

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Test()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_TEST_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CHECKNEWBIE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController* GetFightInfoWidget()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_GETFIGHTINFOWIDGET_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateSelectItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CREATESELECTITEM_OFFSET))(this, arg);
		}

		::System::Void OnPostRefreshView(::System::Int32 initScrollIndex, ::System::UInt32 initFloor, ::System::Boolean isDoAnimation, ::System::Boolean isWaitAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_ONPOSTREFRESHVIEW_OFFSET))(this, initScrollIndex, initFloor, isDoAnimation, isWaitAnimation);
		}

		::System::Void RefreshDetail(::System::UInt32 floorIndex, ::System::UInt32 realFloorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_REFRESHDETAIL_OFFSET))(this, floorIndex, realFloorIndex);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_CHECKNEWBIE_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* __base_CreateSelectItem(::System::Func_1<::MoleMole::UIControlReference*>* P0)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_CREATESELECTITEM_OFFSET))(this, P0);
		}

		::MoleMole::UIBabeltowerFightingInfoWidgetController* __base_GetFightInfoWidget()
		{
			return ((::MoleMole::UIBabeltowerFightingInfoWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_GETFIGHTINFOWIDGET_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostRefreshView(::System::Int32 P0, ::System::UInt32 P1, ::System::Boolean P2, ::System::Boolean P3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshDetail(::System::UInt32 P0, ::System::UInt32 P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_REFRESHDETAIL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER___BASE_UPDATE_OFFSET))(this);
		}

		::System::Void HJPPOMOJJPG(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_HJPPOMOJJPG_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void AFHDKGIOADE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_AFHDKGIOADE_OFFSET))(this);
		}

		::System::Void CIOIKNNNMHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CIOIKNNNMHA_OFFSET))(this);
		}

		::System::Void GGONMJCOLEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_GGONMJCOLEC_OFFSET))(this);
		}

		::System::Void MEIALCGKDID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_MEIALCGKDID_OFFSET))(this);
		}

		::System::Void CEKHMKOALKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CEKHMKOALKF_OFFSET))(this);
		}

		::System::Void IIFHNGEGOMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_IIFHNGEGOMJ_OFFSET))(this);
		}

		::System::Void LPIIAOPIMKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_LPIIAOPIMKO_OFFSET))(this);
		}

		::System::Void CMIDFLLBLCG(::System::UInt32 CCKGEOKCJMA, ::System::UInt32 ACIAFCLIOCM, ::System::Int32 FOLKIBNJNHM)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERPAGE03CONTROLLER_CMIDFLLBLCG_OFFSET))(this, CCKGEOKCJMA, ACIAFCLIOCM, FOLKIBNJNHM);
		}
	};
}
