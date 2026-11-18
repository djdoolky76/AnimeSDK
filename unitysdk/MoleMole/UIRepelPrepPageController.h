#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAKODLEPJOA.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BHNBGDHMMBF;
class ODNBJIEICJH;
namespace MoleMole { class RepelPrepPageContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_AHLEBAAAHGC_OFFSET UNITYSDK_OFFSET(0x15D46110)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_CLOSE_OFFSET UNITYSDK_OFFSET(0x15D46540)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x15D452E0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15D452F0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15D454F0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_LIBPDFMEMGJ_OFFSET UNITYSDK_OFFSET(0x15D45F40)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_MMDFMBHMLGJ_OFFSET UNITYSDK_OFFSET(0x15D45BD0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x15D45B60)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15D45430)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15D464D0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D45300)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D45650)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x15D455B0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x15D465E0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D465D0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_CLOSE_OFFSET UNITYSDK_OFFSET(0x15D465F0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x15D46600)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15D46690)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15D46730)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D467D0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D467E0)
#define MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x15D467F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRepelPrepPageController_TypeDefinitionIndex = 63569;

	class UIRepelPrepPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		static ::System::Int32* StaticGet_StoreID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIRepelPrepPageController_TypeDefinitionIndex)->GetStaticField(0xF2A0);
		}
		::ODNBJIEICJH* KDEBCMGNCNH; // 0x330
		::MoleMole::RepelPrepPageContext* DAAAEJDBNFI; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::FAKODLEPJOA get_MessageMatchPage()
		{
			return ((::FAKODLEPJOA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_CLOSE_OFFSET))(this);
		}

		::System::Void __base_Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_CLOSE_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void LIBPDFMEMGJ(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_LIBPDFMEMGJ_OFFSET))(this, KOIBHLHLMFC);
		}

		::BHNBGDHMMBF* OGMPOGIHBIK()
		{
			return ((::BHNBGDHMMBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void AHLEBAAAHGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_AHLEBAAAHGC_OFFSET))(this);
		}

		::System::Void MMDFMBHMLGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREPELPREPPAGECONTROLLER_MMDFMBHMLGJ_OFFSET))(this);
		}
	};
}
