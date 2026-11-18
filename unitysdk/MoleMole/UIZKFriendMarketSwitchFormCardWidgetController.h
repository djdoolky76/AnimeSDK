#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class LFECJLLAEFC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIZKFriendMarketSwitchFormCardWidgetController_Data; }
namespace System { class Object; }

#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x170C33D0)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170C2FA0)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x170C3040)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x170C3100)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170C3280)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170C3290)
#define MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x170C3330)

namespace MoleMole
{
	inline static constexpr unsigned int UIZKFriendMarketSwitchFormCardWidgetController_TypeDefinitionIndex = 41042;

	class UIZKFriendMarketSwitchFormCardWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void PDKCHDBODJB(::MoleMole::UIZKFriendMarketSwitchFormCardWidgetController_Data* LJBPECKCCEA)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIZKFriendMarketSwitchFormCardWidgetController_Data*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, LJBPECKCCEA);
		}

		::LFECJLLAEFC* OGMPOGIHBIK()
		{
			return ((::LFECJLLAEFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZKFRIENDMARKETSWITCHFORMCARDWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
