#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFGOBPJPGBE.h"
#include "unitysdk/MoleMole/UITabBtnController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class AHAOOPGIBHA;
class IBENDELLLAO;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONCOUNTNODE_1_OFFSET UNITYSDK_OFFSET(0x12BF08E0)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONCOUNTNODE_OFFSET UNITYSDK_OFFSET(0x12BF06A0)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONNODE_1_OFFSET UNITYSDK_OFFSET(0x12BF0060)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET UNITYSDK_OFFSET(0x12BEFE20)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_DISABLEBADGEWIDGET_OFFSET UNITYSDK_OFFSET(0x12BF04E0)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_EGPMPMPIMCC_OFFSET UNITYSDK_OFFSET(0x12BF0740)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_ENABLEBADGEWIDGET_OFFSET UNITYSDK_OFFSET(0x12BF0290)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_GET_TABBUTTON_OFFSET UNITYSDK_OFFSET(0x12BEF9C0)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_GLFNHLPFMPB_OFFSET UNITYSDK_OFFSET(0x12BEFEC0)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BF0950)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BF09E0)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_SETICON_1_OFFSET UNITYSDK_OFFSET(0x12BEFB40)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_SETICON_2_OFFSET UNITYSDK_OFFSET(0x12BEFC60)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0x12BEFA80)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_SETNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x12BF00D0)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF0A60)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BF0AC0)
#define MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BF0B50)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn01RowWidgetController_TypeDefinitionIndex = 89317;

	class UITabBtn01RowWidgetController : public ::MoleMole::UITabBtnController
	{
	public:
		::AHAOOPGIBHA* _view; // 0x2D0
		::MoleMole::NotificationBadge* DDABNCIDLPI; // 0x2D8
		::MoleMole::NotificationBadgeEx* ECKEDFFCPBB; // 0x2E0
		::MoleMole::NotificationBadgeEx* HAEICIEFNHA; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITabButton* get_TabButton()
		{
			return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_GET_TABBUTTON_OFFSET))(this);
		}

		::System::Void SetIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_SETICON_OFFSET))(this, iconPath);
		}

		::System::Void SetIcon_1(::Foundation::AssetPath iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_SETICON_1_OFFSET))(this, iconPath);
		}

		::System::Void SetIcon_2(::UnityEngine::Sprite* icon)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_SETICON_2_OFFSET))(this, icon);
		}

		::System::Void BindNotificationNode(::Share::ENotificationBadgeType notificationBadgeType, ::NodeGraph::VariantUnion subKey)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONNODE_OFFSET))(this, notificationBadgeType, subKey);
		}

		::System::Void BindNotificationNode_1(::IBENDELLLAO* notificationNode)
		{
			return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONNODE_1_OFFSET))(this, notificationNode);
		}

		::System::Void SetNotificationBadge(::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_SETNOTIFICATIONBADGE_OFFSET))(this, badgeType);
		}

		::System::Void EnableBadgeWidget(::BFGOBPJPGBE _showType)
		{
			return ((::System::Void(*)(::PVOID, ::BFGOBPJPGBE))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_ENABLEBADGEWIDGET_OFFSET))(this, _showType);
		}

		::System::Void DisableBadgeWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_DISABLEBADGEWIDGET_OFFSET))(this);
		}

		::System::Void BindNotificationCountNode(::Share::ENotificationBadgeType notificationBadgeType, ::NodeGraph::VariantUnion subKey)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONCOUNTNODE_OFFSET))(this, notificationBadgeType, subKey);
		}

		::System::Void BindNotificationCountNode_1(::IBENDELLLAO* notificationNode)
		{
			return ((::System::Void(*)(::PVOID, ::IBENDELLLAO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_BINDNOTIFICATIONCOUNTNODE_1_OFFSET))(this, notificationNode);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void EGPMPMPIMCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_EGPMPMPIMCC_OFFSET))(this);
		}

		::System::Void GLFNHLPFMPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN01ROWWIDGETCONTROLLER_GLFNHLPFMPB_OFFSET))(this);
		}
	};
}
