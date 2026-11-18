#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext.h"
#include "unitysdk/OLPPOJJADDO.h"

class DNPEFAEGFPM;
namespace MoleMole { class UIUrbanMapPointGroupWidgetContext; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x188E1940)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x188E18A0)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x188E1600)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GETICONWIDGETNAME_OFFSET UNITYSDK_OFFSET(0x188E1540)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GETKEY_OFFSET UNITYSDK_OFFSET(0x188E15B0)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x188E1810)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GET_GETAREAMAPPANELCONFIGID_OFFSET UNITYSDK_OFFSET(0x188E17F0)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x188E1A50)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_ONSHOWPANEL_OFFSET UNITYSDK_OFFSET(0x188E1660)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x188E1C10)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x188E1C60)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x188E1C70)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_GETICONWIDGETNAME_OFFSET UNITYSDK_OFFSET(0x188E1D20)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_GETKEY_OFFSET UNITYSDK_OFFSET(0x188E1DB0)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x188E1E50)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x188E1F30)
#define MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_ONSHOWPANEL_OFFSET UNITYSDK_OFFSET(0x188E1F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIThreeDMapElement_GemContext_TypeDefinitionIndex = 44321;

	class UIThreeDMapElement_GemContext : public ::MoleMole::UIUrbanMapPointWidgetContext
	{
	public:
		::DNPEFAEGFPM* Data; // 0x58
		::System::Boolean _isTracking; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT__CTOR_OFFSET))(this);
		}

		::System::String* GetIconWidgetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GETICONWIDGETNAME_OFFSET))(this);
		}

		::System::UInt64 GetKey()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GETKEY_OFFSET))(this);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GETDEBUGINFO_OFFSET))(this);
		}

		::System::Void OnShowPanel(::MoleMole::UIUrbanMapPointGroupWidgetContext* fromGroupContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_ONSHOWPANEL_OFFSET))(this, fromGroupContext);
		}

		::System::Int32 get_GetAreaMapPanelConfigId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GET_GETAREAMAPPANELCONFIGID_OFFSET))(this);
		}

		::OLPPOJJADDO GetWorldPosition()
		{
			return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_GETWORLDPOSITION_OFFSET))(this);
		}

		::System::Boolean Equals(::MoleMole::UIThreeDMapElement_GemContext* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIThreeDMapElement_GemContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Boolean IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT_ISTRACKING_OFFSET))(this);
		}

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::String* __base_GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_GETDEBUGINFO_OFFSET))(this);
		}

		::System::String* __base_GetIconWidgetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_GETICONWIDGETNAME_OFFSET))(this);
		}

		::System::UInt64 __base_GetKey()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_GETKEY_OFFSET))(this);
		}

		::OLPPOJJADDO __base_GetWorldPosition()
		{
			return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_GETWORLDPOSITION_OFFSET))(this);
		}

		::System::Boolean __base_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_ISTRACKING_OFFSET))(this);
		}

		::System::Void __base_OnShowPanel(::MoleMole::UIUrbanMapPointGroupWidgetContext* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITHREEDMAPELEMENT_GEMCONTEXT___BASE_ONSHOWPANEL_OFFSET))(this, P0);
		}
	};
}
