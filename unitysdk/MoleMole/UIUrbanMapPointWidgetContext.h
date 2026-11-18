#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetContext_EPointLockType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/OLPPOJJADDO.h"
#include "unitysdk/UnityEngine/Color.h"

class GLAAJLGNEGP;
namespace MoleMole { class UIUrbanMapPointGroupWidgetContext; }
namespace System { class String; }
namespace System { class Type; }

#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_CALCULATESECTIONUNLOCK_OFFSET UNITYSDK_OFFSET(0x1563A0B0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_DISABLEINRADAR_OFFSET UNITYSDK_OFFSET(0x1563A7E0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_FORCECLICKPOPINWORLDSTATE_OFFSET UNITYSDK_OFFSET(0x1563AEE0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETBANNER_OFFSET UNITYSDK_OFFSET(0x15639920)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x156335A0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETICONWIDGETNAME_OFFSET UNITYSDK_OFFSET(0x15633640)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETKEY_OFFSET UNITYSDK_OFFSET(0x156336D0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETMAPICON_OFFSET UNITYSDK_OFFSET(0x15639AD0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETPOINTLOCKTYPE_OFFSET UNITYSDK_OFFSET(0x1563AF20)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET UNITYSDK_OFFSET(0x15639130)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET UNITYSDK_OFFSET(0x15634110)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLETEXT_OFFSET UNITYSDK_OFFSET(0x156364B0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTRACKCIRCLECOLOR_OFFSET UNITYSDK_OFFSET(0x1563A820)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x156337B0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_FORCEMATCHFILTER_OFFSET UNITYSDK_OFFSET(0x15639910)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_GETAREAMAPPANELCONFIGID_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1563A0A0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_GETAREAMAPPANELCONFIGID_OFFSET UNITYSDK_OFFSET(0x1563A040)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_IGNOREHUDHIDE_OFFSET UNITYSDK_OFFSET(0x1563A7A0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISENABLE_OFFSET UNITYSDK_OFFSET(0x156348B0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISFINISH_OFFSET UNITYSDK_OFFSET(0x15635550)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISINWORLDSTATELOCK_OFFSET UNITYSDK_OFFSET(0x1563A760)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISMATCHRADIUS_OFFSET UNITYSDK_OFFSET(0x1563B620)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x156332B0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x156366F0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ONSHOWPANEL_OFFSET UNITYSDK_OFFSET(0x15632E50)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_OVERRIDEMAPICON_OFFSET UNITYSDK_OFFSET(0x1563B5C0)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_SHOWPANEL_OFFSET UNITYSDK_OFFSET(0x15639C50)
#define MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x156334E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointWidgetContext_TypeDefinitionIndex = 67848;

	class UIUrbanMapPointWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIUrbanMapPointGroupWidgetContext* FromGroupContext; // 0x28
		::GLAAJLGNEGP* MapElement; // 0x30
		::System::Type* ViewModelType; // 0x38
		::System::Int32 _GetAreaMapPanelConfigId_Internal_k__BackingField; // 0x40
		::UnityEngine::Vector2 TempLocalPos; // 0x44
		::System::Int32 _infoPanelId; // 0x4C
		::System::Boolean SectionUnlock; // 0x50
		::System::Byte _padding0[0x3];
		::System::Int32 In3dAreaId; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ForceMatchFilter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_FORCEMATCHFILTER_OFFSET))(this);
		}

		::OLPPOJJADDO GetWorldPosition()
		{
			return ((::OLPPOJJADDO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETWORLDPOSITION_OFFSET))(this);
		}

		::System::String* GetBanner()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETBANNER_OFFSET))(this);
		}

		::Foundation::AssetPath GetMapIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETMAPICON_OFFSET))(this);
		}

		::Foundation::AssetPath GetTitleIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLEICON_OFFSET))(this);
		}

		::System::String* GetTitleText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLETEXT_OFFSET))(this);
		}

		::System::String* GetTitleKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTITLEKEY_OFFSET))(this);
		}

		::System::Void ShowPanel(::System::Boolean showGroup, ::MoleMole::UIUrbanMapPointGroupWidgetContext* fromGroupContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_SHOWPANEL_OFFSET))(this, showGroup, fromGroupContext);
		}

		::System::Int32 get_GetAreaMapPanelConfigId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_GETAREAMAPPANELCONFIGID_OFFSET))(this);
		}

		::System::Int32 get_GetAreaMapPanelConfigId_Internal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GET_GETAREAMAPPANELCONFIGID_INTERNAL_OFFSET))(this);
		}

		::System::Void OnShowPanel(::MoleMole::UIUrbanMapPointGroupWidgetContext* fromGroupContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIUrbanMapPointGroupWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ONSHOWPANEL_OFFSET))(this, fromGroupContext);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETDEBUGINFO_OFFSET))(this);
		}

		::System::UInt64 GetKey()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETKEY_OFFSET))(this);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISFINISH_OFFSET))(this);
		}

		::System::Boolean CalculateSectionUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_CALCULATESECTIONUNLOCK_OFFSET))(this);
		}

		::System::Boolean IsInWorldStateLock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISINWORLDSTATELOCK_OFFSET))(this);
		}

		::System::Boolean IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean IgnoreHudHide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_IGNOREHUDHIDE_OFFSET))(this);
		}

		::System::Boolean DisableInRadar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_DISABLEINRADAR_OFFSET))(this);
		}

		::System::Boolean IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISTRACKING_OFFSET))(this);
		}

		::UnityEngine::Color GetTrackCircleColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETTRACKCIRCLECOLOR_OFFSET))(this);
		}

		::System::Boolean ForceClickPopInWorldState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_FORCECLICKPOPINWORLDSTATE_OFFSET))(this);
		}

		::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType GetPointLockType()
		{
			return ((::MoleMole::UIUrbanMapPointWidgetContext_EPointLockType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETPOINTLOCKTYPE_OFFSET))(this);
		}

		::System::Boolean IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISENABLE_OFFSET))(this);
		}

		::System::String* GetIconWidgetName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_GETICONWIDGETNAME_OFFSET))(this);
		}

		::Foundation::AssetPath OverrideMapIcon()
		{
			return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_OVERRIDEMAPICON_OFFSET))(this);
		}

		::System::Boolean IsMatchRadius(::System::Single currentRadius, ::System::Single min, ::System::Single max)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTWIDGETCONTEXT_ISMATCHRADIUS_OFFSET))(this, currentRadius, min, max);
		}
	};
}
