#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class AFDCBFJJIBM;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_IAJHCMNOOCL_OFFSET UNITYSDK_OFFSET(0x171990C0)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17198AA0)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17198B30)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x17198BB0)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17199240)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x171992A0)
#define MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17199330)

namespace MoleMole
{
	inline static constexpr unsigned int UIVirusShowRowWidgetController_TypeDefinitionIndex = 91896;

	class UIVirusShowRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::AFDCBFJJIBM* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshWidget(::System::Int32 questID, ::System::Int32 virusID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, questID, virusID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void IAJHCMNOOCL(::System::Int32 MPLLHBMAGDH, ::System::Int32 BNBNMODACDF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIRUSSHOWROWWIDGETCONTROLLER_IAJHCMNOOCL_OFFSET))(this, MPLLHBMAGDH, BNBNMODACDF);
		}
	};
}
