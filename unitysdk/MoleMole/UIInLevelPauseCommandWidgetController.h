#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class DGOCHEFNIOD;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UITabBtnRoleRowWidgetController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x176BD480)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_DMJOLMIHAPL_OFFSET UNITYSDK_OFFSET(0x176BE640)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ELJHMFBMLAO_OFFSET UNITYSDK_OFFSET(0x176BE6C0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_EPNKBDPOPKO_OFFSET UNITYSDK_OFFSET(0x176BF600)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_HNKPIGNPLKC_OFFSET UNITYSDK_OFFSET(0x176BE5C0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_HODFFJEOPJB_OFFSET UNITYSDK_OFFSET(0x176BE8C0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_IEEIKHNIJDL_OFFSET UNITYSDK_OFFSET(0x176BEB10)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_IJBPNFELOLE_OFFSET UNITYSDK_OFFSET(0x176BE8D0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_OLJKPBLKLGM_OFFSET UNITYSDK_OFFSET(0x176BEAB0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x176BD380)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x176BD910)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x176BD980)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x176BD9D0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x176BD410)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x176BD8A0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_SETAVATARINFOS_OFFSET UNITYSDK_OFFSET(0x176BDA50)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x176BE2C0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176BE100)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x176BE2D0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x176BE360)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x176BE400)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x176BE410)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x176BE4A0)
#define MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x176BE530)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseCommandWidgetController_TypeDefinitionIndex = 44271;

	class UIInLevelPauseCommandWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_MJLOPCIMLKH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseCommandWidgetController_TypeDefinitionIndex)->GetStaticField(0x10EF0);
		}
		::DGOCHEFNIOD* _view; // 0x2C8
		::System::Int32 BDIIOFIJNMN; // 0x2D0
		::System::Int32 JCJOFMJCFEB; // 0x2D4
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>* KMMGIFDEAIL; // 0x2D8
		::System::Collections::Generic::List_1<::System::Object*>* OAOAPGFJOPE; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UITabBtnRoleRowWidgetController*>* AMJGEIOGGBC; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetAvatarInfos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_SETAVATARINFOS_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::ScrollViewItemWidgetController* HNKPIGNPLKC(::System::Func_1<::MoleMole::UIControlReference*>* DLJPLHKELCO)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_HNKPIGNPLKC_OFFSET))(this, DLJPLHKELCO);
		}

		::MoleMole::ScrollViewItemWidgetController* DMJOLMIHAPL(::System::Func_1<::MoleMole::UIControlReference*>* DLJPLHKELCO)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_DMJOLMIHAPL_OFFSET))(this, DLJPLHKELCO);
		}

		::System::Void ELJHMFBMLAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_ELJHMFBMLAO_OFFSET))(this);
		}

		::System::Void HODFFJEOPJB(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_HODFFJEOPJB_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void OLJKPBLKLGM(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_OLJKPBLKLGM_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Int32 EPNKBDPOPKO(::System::Int32 BLIIBGEDDEI)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_EPNKBDPOPKO_OFFSET))(this, BLIIBGEDDEI);
		}

		::System::Void IEEIKHNIJDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_IEEIKHNIJDL_OFFSET))(this);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void IJBPNFELOLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSECOMMANDWIDGETCONTROLLER_IJBPNFELOLE_OFFSET))(this);
		}
	};
}
