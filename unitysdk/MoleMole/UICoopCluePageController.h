#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/PAMPOBIPLCE.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CPINLODJHPN;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }

#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x180774C0)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18077670)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x180774D0)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18077570)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_REGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x180776E0)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER_UNREGISTEREVENT_OFFSET UNITYSDK_OFFSET(0x180777B0)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18077800)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18077810)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x180778B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopCluePageController_TypeDefinitionIndex = 56205;

	class UICoopCluePageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void RegisterEvent(::PAMPOBIPLCE eventType, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_REGISTEREVENT_OFFSET))(this, eventType, callback);
		}

		::System::Void UnregisterEvent(::PAMPOBIPLCE eventType)
		{
			return ((::System::Void(*)(::PVOID, ::PAMPOBIPLCE))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_UNREGISTEREVENT_OFFSET))(this, eventType);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::CPINLODJHPN* OGMPOGIHBIK()
		{
			return ((::CPINLODJHPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
