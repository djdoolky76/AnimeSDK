#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class DHODJAKFEAH;
class OMLIJCFFELG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_CEPKIPFGGOA_OFFSET UNITYSDK_OFFSET(0x186C2CD0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_DKDFBBEALNK_OFFSET UNITYSDK_OFFSET(0x186C2CA0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_DLKHPIJHOOP_OFFSET UNITYSDK_OFFSET(0x186C2C20)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_GET_PARTNERID_OFFSET UNITYSDK_OFFSET(0x186C2970)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186C1E70)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186C1F00)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186C1CA0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186C1E00)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHPARTNERDATEVIEW_OFFSET UNITYSDK_OFFSET(0x186C2330)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHPORTRAITVIEW_OFFSET UNITYSDK_OFFSET(0x186C25E0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x186C1F80)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_SETTEXT_OFFSET UNITYSDK_OFFSET(0x186C21F0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_SETTIP_OFFSET UNITYSDK_OFFSET(0x186C2890)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186C2980)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186C29E0)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186C2A70)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186C2B00)
#define MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186C2B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPersonalOutWidgetController_TypeDefinitionIndex = 83354;

	class UIMainCityPersonalOutWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::DHODJAKFEAH* _view; // 0x2C8
		::OMLIJCFFELG* ABDINJDIANH; // 0x2D0
		::System::Int32 DGKMJIBMDMN; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* textMapKey, ::System::String* textMapKeyEn, ::System::Action* callback, ::System::Int32 unlockID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, textMapKey, textMapKeyEn, callback, unlockID);
		}

		::System::Void RefreshPartnerDateView(::System::Int32 partnerID, ::System::String* textMapKey, ::System::String* textMapKeyEn, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHPARTNERDATEVIEW_OFFSET))(this, partnerID, textMapKey, textMapKeyEn, callback);
		}

		::System::Void RefreshPortraitView(::System::Int32 portraitID, ::System::String* textMapKey, ::System::String* textMapKeyEn, ::System::Action* callback, ::System::Action* infoCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_REFRESHPORTRAITVIEW_OFFSET))(this, portraitID, textMapKey, textMapKeyEn, callback, infoCallback);
		}

		::System::Void SetText(::System::String* textMapKey, ::System::String* textMapKeyEn)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_SETTEXT_OFFSET))(this, textMapKey, textMapKeyEn);
		}

		::System::Void SetTip(::System::Boolean show, ::System::String* tipTextKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_SETTIP_OFFSET))(this, show, tipTextKey);
		}

		::System::Int32 get_PartnerID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_GET_PARTNERID_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void DLKHPIJHOOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_DLKHPIJHOOP_OFFSET))(this);
		}

		::System::Void DKDFBBEALNK(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_DKDFBBEALNK_OFFSET))(this, MNDIBLLFAJI);
		}

		::System::Void CEPKIPFGGOA(::System::EventArgs* MNDIBLLFAJI)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPERSONALOUTWIDGETCONTROLLER_CEPKIPFGGOA_OFFSET))(this, MNDIBLLFAJI);
		}
	};
}
