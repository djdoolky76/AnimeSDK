#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFGOBPJPGBE.h"
#include "unitysdk/EGKDOMMFAOH.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class HNIIBECPMEM;
class IBENDELLLAO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_BINDNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x167E6550)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ENABLEWIDGET_OFFSET UNITYSDK_OFFSET(0x167E65F0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_GETSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x167E6260)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET UNITYSDK_OFFSET(0x167E5FE0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_IOAEMOLLKCI_OFFSET UNITYSDK_OFFSET(0x167E6CE0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_KFHHIPLJPMH_OFFSET UNITYSDK_OFFSET(0x167E6A90)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167E5D90)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167E5E20)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167E5BC0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET UNITYSDK_OFFSET(0x167E62B0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x167E60B0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETTABNAMEBYTEXTKEY_OFFSET UNITYSDK_OFFSET(0x167E67A0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x167E6040)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SHOWLOCK_OFFSET UNITYSDK_OFFSET(0x167E6810)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167E6880)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167E68E0)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167E6970)
#define MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167E6A00)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn03RowWidgetController_TypeDefinitionIndex = 73064;

	class UITabBtn03RowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::HNIIBECPMEM* _view; // 0x2C8
		::EGKDOMMFAOH NOKDNMOKJCI; // 0x2D0
		::MoleMole::ESystemSettingType AGEKGBDOBKH; // 0x2D4
		::MoleMole::UIGeneralPopUpHintWidgetController* OCAMNDBGALP; // 0x2D8
		::System::Action* ACDMIDHJGLO; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetTabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_GETTABBUTTON_OFFSET))(this);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetSettingType(::MoleMole::ESystemSettingType tabType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETSETTINGTYPE_OFFSET))(this, tabType);
		}

		::MoleMole::ESystemSettingType GetSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_GETSETTINGTYPE_OFFSET))(this);
		}

		::System::Void RegisterRedPoint(::Share::ENotificationBadgeType badgeType, ::System::Int32 subID)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_REGISTERREDPOINT_OFFSET))(this, badgeType, subID);
		}

		::System::Void BindNotificationBadge(::IBENDELLLAO* node)
		{
			return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_BINDNOTIFICATIONBADGE_OFFSET))(this, node);
		}

		::System::Void EnableWidget(::BFGOBPJPGBE showType)
		{
			return ((::System::Void(*)(::PVOID, ::BFGOBPJPGBE))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_ENABLEWIDGET_OFFSET))(this, showType);
		}

		::System::Void SetTabNameByTextKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SETTABNAMEBYTEXTKEY_OFFSET))(this, key);
		}

		::System::Void ShowLock(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_SHOWLOCK_OFFSET))(this, isShow);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void KFHHIPLJPMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_KFHHIPLJPMH_OFFSET))(this);
		}

		::System::Void IOAEMOLLKCI(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWWIDGETCONTROLLER_IOAEMOLLKCI_OFFSET))(this, PIIPCLCCOIG);
		}
	};
}
