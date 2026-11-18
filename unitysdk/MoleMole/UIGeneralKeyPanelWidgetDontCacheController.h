#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/UIGeneralKeyPanelWidgetController.h"

class OHKJLJLEGON;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x18F0DDD0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_OLMLCADJNOL_OFFSET UNITYSDK_OFFSET(0x18F0E6D0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F0DDE0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_SETINPUTLOGICEVENTFORCESHOW_OFFSET UNITYSDK_OFFSET(0x18F0DEE0)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F0EE70)
#define MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F0EEF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralKeyPanelWidgetDontCacheController_TypeDefinitionIndex = 55074;

	class UIGeneralKeyPanelWidgetDontCacheController : public ::MoleMole::UIGeneralKeyPanelWidgetController
	{
	public:
		::OHKJLJLEGON* GDOFOCKJCIF; // 0x3B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetInputLogicEventForceShow(::MoleMole::InputLogicEventType logicEvent)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::InputLogicEventType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_SETINPUTLOGICEVENTFORCESHOW_OFFSET))(this, logicEvent);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void OLMLCADJNOL(::System::String* HCHFLDCEFMO, ::System::String* FNJPKKAHJAJ)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALKEYPANELWIDGETDONTCACHECONTROLLER_OLMLCADJNOL_OFFSET))(this, HCHFLDCEFMO, FNJPKKAHJAJ);
		}
	};
}
