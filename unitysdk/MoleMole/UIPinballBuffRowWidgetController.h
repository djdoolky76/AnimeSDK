#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/IGAONHGMLLA_GHADLBFMNFK.h"
#include "unitysdk/MAOGHDHAEIM.h"

class CCMHECHGDGP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1676A800)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x1676AE20)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1676A890)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1676A790)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1676A5E0)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_PGAJOJCGMMN_OFFSET UNITYSDK_OFFSET(0x1676A980)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_REFRESHBUFF_1_OFFSET UNITYSDK_OFFSET(0x1676ADA0)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0x1676A910)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_SETANIMATIONENABLED_OFFSET UNITYSDK_OFFSET(0x1676AF40)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x1676A660)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1676AF90)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1676AFF0)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x1676B080)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1676B120)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1676B1B0)
#define MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1676B240)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballBuffRowWidgetController_TypeDefinitionIndex = 85281;

	class UIPinballBuffRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 BLPPIDPIJHO = 0x1; // 0x0
		::CCMHECHGDGP* _view; // 0x2C8
		::System::Int32 HKDJOFLJBBA; // 0x2D0
		::System::Boolean DOCMNILEPKI; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshBuff(::IGAONHGMLLA_GHADLBFMNFK snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::IGAONHGMLLA_GHADLBFMNFK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_REFRESHBUFF_OFFSET))(this, snapshot);
		}

		::System::Void RefreshBuff_1(::MAOGHDHAEIM snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::MAOGHDHAEIM))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_REFRESHBUFF_1_OFFSET))(this, snapshot);
		}

		::System::Void OnSetData(::System::Object* data, ::System::Object* additionalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data, additionalData);
		}

		::System::Void SetAnimationEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_SETANIMATIONENABLED_OFFSET))(this, enabled);
		}

		::System::Void SetEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_SETEMPTY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnSetData(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void PGAJOJCGMMN(::System::Int32 KJPNMJJONNO, ::System::Int32 DFDOKPBNGKH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLBUFFROWWIDGETCONTROLLER_PGAJOJCGMMN_OFFSET))(this, KJPNMJJONNO, DFDOKPBNGKH);
		}
	};
}
