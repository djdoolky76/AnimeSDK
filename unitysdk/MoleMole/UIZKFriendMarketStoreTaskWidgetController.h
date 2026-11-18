#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class ICBILMCJNOO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x170C2D90)
#define MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170C2B30)
#define MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170C2BD0)
#define MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170C2E00)
#define MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170C2E60)
#define MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170C2F00)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketStoreTaskWidgetController_TypeDefinitionIndex = 45226;

	class UIZKFriendMarketStoreTaskWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::ICBILMCJNOO* OGMPOGIHBIK()
		{
			return ((::ICBILMCJNOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTORETASKWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
