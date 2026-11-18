#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class ILMKONAJBGC;
class IPKGIPJDDGH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UICoopTeachPageController_Context; }
namespace System { class EventArgs; }

#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_DGPBEKDBCID_OFFSET UNITYSDK_OFFSET(0x1705B820)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_EDAFMCAJPDE_OFFSET UNITYSDK_OFFSET(0x1705C1A0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1705B650)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_HAEPBCFIKIN_OFFSET UNITYSDK_OFFSET(0x1705C9B0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_OEGCAIPMGOP_OFFSET UNITYSDK_OFFSET(0x1705BC50)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1705C7E0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1705B660)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONLKPFFMHLK_OFFSET UNITYSDK_OFFSET(0x1705CA80)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1705B760)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1705C5F0)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1705C580)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1705C850)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1705C860)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1705C900)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1705C910)
#define MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1705C920)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopTeachPageController_TypeDefinitionIndex = 72884;

	class UICoopTeachPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void DGPBEKDBCID(::MoleMole::UICoopTeachPageController_Context* HBMGHPEPBNC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UICoopTeachPageController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_DGPBEKDBCID_OFFSET))(this, HBMGHPEPBNC);
		}

		::System::Void OEGCAIPMGOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_OEGCAIPMGOP_OFFSET))(this);
		}

		::IPKGIPJDDGH* OGMPOGIHBIK()
		{
			return ((::IPKGIPJDDGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void ONLKPFFMHLK(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_ONLKPFFMHLK_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void EDAFMCAJPDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_EDAFMCAJPDE_OFFSET))(this);
		}

		::ILMKONAJBGC* HAEPBCFIKIN()
		{
			return ((::ILMKONAJBGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPTEACHPAGECONTROLLER_HAEPBCFIKIN_OFFSET))(this);
		}
	};
}
