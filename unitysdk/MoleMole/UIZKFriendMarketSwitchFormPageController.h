#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CJIMICFLFHJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x171BB110)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x171BB380)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x171BB120)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171BB1C0)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x171BB3F0)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x171BB400)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171BB4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketSwitchFormPageController_TypeDefinitionIndex = 88951;

	class UIZKFriendMarketSwitchFormPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::CJIMICFLFHJ* OGMPOGIHBIK()
		{
			return ((::CJIMICFLFHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
