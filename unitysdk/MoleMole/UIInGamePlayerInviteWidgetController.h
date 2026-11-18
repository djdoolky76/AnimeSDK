#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BDCKHDEBKKK;
class GIGJEPFMKEF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1A2A0060)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A29FD60)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A29FE20)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_UPDATEINROOMPLAYERLIST_OFFSET UNITYSDK_OFFSET(0x1A2A00D0)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2A0180)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1A2A01E0)
#define MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A2A0280)

namespace MoleMole
{
	inline static constexpr unsigned int UIInGamePlayerInviteWidgetController_TypeDefinitionIndex = 89020;

	class UIInGamePlayerInviteWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void UpdateInRoomPlayerList(::System::Collections::Generic::List_1<::BDCKHDEBKKK*>* playerList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::BDCKHDEBKKK*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_UPDATEINROOMPLAYERLIST_OFFSET))(this, playerList);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::GIGJEPFMKEF* OGMPOGIHBIK()
		{
			return ((::GIGJEPFMKEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINGAMEPLAYERINVITEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
