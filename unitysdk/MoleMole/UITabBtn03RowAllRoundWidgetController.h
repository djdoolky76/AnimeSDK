#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class IBENDELLLAO;
class PNGDMNBIKPP;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_BEFMFGLACGE_OFFSET UNITYSDK_OFFSET(0x14E08110)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_BINDNEWNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x14E08760)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CHANGENEWBADGETYPE_OFFSET UNITYSDK_OFFSET(0x14E08450)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CHANGEREDDOTBADGETYPE_OFFSET UNITYSDK_OFFSET(0x14E083E0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x14E087D0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x14E08330)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETUITABBUTTON_OFFSET UNITYSDK_OFFSET(0x14E08380)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E07C60)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E07CF0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E07D70)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_REGISTERNEWSUBNOTIFY_OFFSET UNITYSDK_OFFSET(0x14E08550)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_REGISTERREDDOTSUBNOTIFY_OFFSET UNITYSDK_OFFSET(0x14E084C0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETSELECTED_OFFSET UNITYSDK_OFFSET(0x14E08830)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETSETTINGTYPE_OFFSET UNITYSDK_OFFSET(0x14E07F50)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETTEXTMAPKEY_OFFSET UNITYSDK_OFFSET(0x14E07EC0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x14E07E50)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETUPNEWNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x14E086A0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETUPNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x14E085E0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14E08880)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14E088E0)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14E08970)
#define MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14E08A00)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn03RowAllRoundWidgetController_TypeDefinitionIndex = 42035;

	class UITabBtn03RowAllRoundWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::PNGDMNBIKPP* _view; // 0x2C8
		::MoleMole::ESystemSettingType AGEKGBDOBKH; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetText(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETTEXT_OFFSET))(this, text);
		}

		::System::Void SetTextmapKey(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETTEXTMAPKEY_OFFSET))(this, key);
		}

		::System::Void SetSettingType(::MoleMole::ESystemSettingType tabType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ESystemSettingType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETSETTINGTYPE_OFFSET))(this, tabType);
		}

		::MoleMole::ESystemSettingType GetSettingType()
		{
			return ((::MoleMole::ESystemSettingType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETSETTINGTYPE_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* GetUITabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETUITABBUTTON_OFFSET))(this);
		}

		::System::Void ChangeRedDotBadgeType(::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CHANGEREDDOTBADGETYPE_OFFSET))(this, badgeType);
		}

		::System::Void ChangeNewBadgeType(::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_CHANGENEWBADGETYPE_OFFSET))(this, badgeType);
		}

		::System::Void RegisterRedDotSubNotify(::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_REGISTERREDDOTSUBNOTIFY_OFFSET))(this, subId);
		}

		::System::Void RegisterNewSubNotify(::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_REGISTERNEWSUBNOTIFY_OFFSET))(this, subId);
		}

		::System::Void SetupNotificationBadge(::Share::ENotificationBadgeType badgeType, ::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETUPNOTIFICATIONBADGE_OFFSET))(this, badgeType, subId);
		}

		::System::Void SetupNewNotificationBadge(::Share::ENotificationBadgeType badgeType, ::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETUPNEWNOTIFICATIONBADGE_OFFSET))(this, badgeType, subId);
		}

		::System::Void BindNewNotification(::IBENDELLLAO* node)
		{
			return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_BINDNEWNOTIFICATION_OFFSET))(this, node);
		}

		::MoleMole::NotificationBadge* GetNotificationBadge()
		{
			return ((::MoleMole::NotificationBadge*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_GETNOTIFICATIONBADGE_OFFSET))(this);
		}

		::System::Void SetSelected(::System::Boolean isSelected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_SETSELECTED_OFFSET))(this, isSelected);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::String* BEFMFGLACGE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROWALLROUNDWIDGETCONTROLLER_BEFMFGLACGE_OFFSET))(this);
		}
	};
}
