#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class OEDHCACKLDJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x11389930)
#define MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x113896D0)
#define MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11389770)
#define MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x113899A0)
#define MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11389A00)
#define MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x11389AA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketStoreInfoTagWidgetController_TypeDefinitionIndex = 90572;

	class UIZKFriendMarketStoreInfoTagWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::OEDHCACKLDJ* OGMPOGIHBIK()
		{
			return ((::OEDHCACKLDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSTOREINFOTAGWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
