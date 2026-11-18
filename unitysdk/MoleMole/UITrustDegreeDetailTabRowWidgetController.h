#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

class GCKIHKGNLHO;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_GET_ISON_OFFSET UNITYSDK_OFFSET(0x17099A50)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17099AF0)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17099B80)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_REGISTERCALLBACK_OFFSET UNITYSDK_OFFSET(0x17099C00)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_REGISTERSUBNOTIFY_OFFSET UNITYSDK_OFFSET(0x17099DF0)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0x17099CA0)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_SETNOTIFICATIONBADGE_OFFSET UNITYSDK_OFFSET(0x17099D80)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_SETSELECTICON_OFFSET UNITYSDK_OFFSET(0x17099D10)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_SET_ISON_OFFSET UNITYSDK_OFFSET(0x17099A80)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17099E80)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17099EE0)
#define MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17099F70)

namespace MoleMole
{
	inline static constexpr unsigned int UITrustDegreeDetailTabRowWidgetController_TypeDefinitionIndex = 38549;

	class UITrustDegreeDetailTabRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GCKIHKGNLHO* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsOn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_GET_ISON_OFFSET))(this);
		}

		::System::Void set_IsOn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_SET_ISON_OFFSET))(this, value);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RegisterCallback(::UnityEngine::Events::UnityAction* callback)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_REGISTERCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_SETICON_OFFSET))(this, iconPath);
		}

		::System::Void SetSelectIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_SETSELECTICON_OFFSET))(this, iconPath);
		}

		::System::Void SetNotificationBadge(::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_SETNOTIFICATIONBADGE_OFFSET))(this, badgeType);
		}

		::System::Void RegisterSubNotify(::NodeGraph::VariantUnion subId)
		{
			return ((::System::Void(*)(::PVOID, ::NodeGraph::VariantUnion))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER_REGISTERSUBNOTIFY_OFFSET))(this, subId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRUSTDEGREEDETAILTABROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
