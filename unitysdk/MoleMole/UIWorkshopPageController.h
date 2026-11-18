#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class DBNPAKMJOPA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIWorkshop3DModelController; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_FHFJOBHNOGF_OFFSET UNITYSDK_OFFSET(0x13E80EF0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13E80820)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x13E80990)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_LCJEGOPMGHP_OFFSET UNITYSDK_OFFSET(0x13E80DD0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_OCNBBNGAPOM_OFFSET UNITYSDK_OFFSET(0x13E811A0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13E80830)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13E80CA0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13E808C0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13E80D10)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13E80D20)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13E80DB0)
#define MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13E80DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorkshopPageController_TypeDefinitionIndex = 75606;

	class UIWorkshopPageController : public ::MoleMole::UIWindowController
	{
	public:
		::DBNPAKMJOPA* _view; // 0x320
		::MoleMole::UIWorkshop3DModelController* FGMBCMJILBG; // 0x328
		::UnityEngine::UI::Extension::UITabButtonGroup* HCMNAAAACOJ; // 0x330
		::MoleMole::UIWindowController* BOFKLHFKBLP; // 0x338
		::System::Boolean PHMMOPAPDCO; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void KDGMEFEJMGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_KDGMEFEJMGJ_OFFSET))(this);
		}

		::System::Void LCJEGOPMGHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_LCJEGOPMGHP_OFFSET))(this);
		}

		::System::Void FHFJOBHNOGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_FHFJOBHNOGF_OFFSET))(this);
		}

		::System::Void OCNBBNGAPOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORKSHOPPAGECONTROLLER_OCNBBNGAPOM_OFFSET))(this);
		}
	};
}
