#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class CHMNPDNAJPH;
class DJPEEJFNCHL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_GET_HASMEDAL_OFFSET UNITYSDK_OFFSET(0x166B05D0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x166B0560)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x166B0300)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x166B03A0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHPLAYERMEDAL_OFFSET UNITYSDK_OFFSET(0x166B0710)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHSELFMEDAL_OFFSET UNITYSDK_OFFSET(0x166B07C0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166B0870)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x166B08D0)
#define MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x166B0970)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemMedalWidgetController_TypeDefinitionIndex = 90599;

	class UIFriendSystemMedalWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean get_HasMedal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_GET_HASMEDAL_OFFSET))(this);
		}

		::System::Void RefreshPlayerMedal(::System::Collections::Generic::List_1<::DJPEEJFNCHL*>* medalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DJPEEJFNCHL*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHPLAYERMEDAL_OFFSET))(this, medalData);
		}

		::System::Void RefreshSelfMedal(::System::Collections::Generic::List_1<::DJPEEJFNCHL*>* medalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::DJPEEJFNCHL*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_REFRESHSELFMEDAL_OFFSET))(this, medalData);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::CHMNPDNAJPH* OGMPOGIHBIK()
		{
			return ((::CHMNPDNAJPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMMEDALWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
