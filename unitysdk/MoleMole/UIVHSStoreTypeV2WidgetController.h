#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class HLCGMDBHKMC;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_GET_TAGID_OFFSET UNITYSDK_OFFSET(0x16700F60)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_MIIIKAGHKNB_OFFSET UNITYSDK_OFFSET(0x167010F0)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16700BE0)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16700C70)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_REFRESHLAYER_OFFSET UNITYSDK_OFFSET(0x16700E80)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_SETTAGID_OFFSET UNITYSDK_OFFSET(0x16700CF0)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16700F70)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16700FD0)
#define MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16701060)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTypeV2WidgetController_TypeDefinitionIndex = 51975;

	class UIVHSStoreTypeV2WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 _DBHIJNIMELP_k__BackingField; // 0x2C8
		::System::Byte _padding0[0x4];
		::HLCGMDBHKMC* _view; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetTagID(::System::Int32 tagid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_SETTAGID_OFFSET))(this, tagid);
		}

		::System::Void RefreshLayer(::System::Int32 trendingLayer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_REFRESHLAYER_OFFSET))(this, trendingLayer);
		}

		::System::Int32 get_tagID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_GET_TAGID_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void MIIIKAGHKNB(::System::Int32 EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETYPEV2WIDGETCONTROLLER_MIIIKAGHKNB_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
