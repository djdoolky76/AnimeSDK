#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class PLDKAEHLMDE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZKFriendMarketSwitchRoleCardWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x18BEDA90)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18BED660)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18BED700)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x18BED7C0)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18BED940)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18BED950)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18BED9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketSwitchRoleCardWidgetController_TypeDefinitionIndex = 68735;

	class UIZKFriendMarketSwitchRoleCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::PLDKAEHLMDE* OGMPOGIHBIK()
		{
			return ((::PLDKAEHLMDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIZKFriendMarketSwitchRoleCardWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZKFriendMarketSwitchRoleCardWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHROLECARDWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
