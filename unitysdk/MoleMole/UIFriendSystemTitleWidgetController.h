#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/PBECNFMLHII.h"

class ODMNNEHCGFD;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_GET_HASTITLE_OFFSET UNITYSDK_OFFSET(0x18026460)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x180263F0)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18026190)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18026230)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_REFRESHPLAYERTITLE_OFFSET UNITYSDK_OFFSET(0x18026640)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_REFRESHSELFTITLE_OFFSET UNITYSDK_OFFSET(0x180265A0)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18026720)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18026780)
#define MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18026820)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemTitleWidgetController_TypeDefinitionIndex = 47987;

	class UIFriendSystemTitleWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean get_HasTitle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_GET_HASTITLE_OFFSET))(this);
		}

		::System::Void RefreshSelfTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_REFRESHSELFTITLE_OFFSET))(this);
		}

		::System::Void RefreshPlayerTitle(::System::Boolean isPlayerMale, ::PBECNFMLHII title)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PBECNFMLHII))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_REFRESHPLAYERTITLE_OFFSET))(this, isPlayerMale, title);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::ODMNNEHCGFD* OGMPOGIHBIK()
		{
			return ((::ODMNNEHCGFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMTITLEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
