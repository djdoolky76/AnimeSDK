#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADDEBPHFFIF_NABONMLJDBB.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIActivityBattleCommonRecordPopWindowController_RecordType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Foundation/AssetPath.h"

class NEKPOIIBKEI;
namespace MoleMole { class UIActivityBattleCommonRecordPopWindowController_Context; }
namespace MoleMole { class UIActivityBattleCommonRecordPopWindowController_RecordData; }
namespace MoleMole { class UIActivityBattleCommonRecordPopWindowController_RecordInfo; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_CHJFGOOIOMO_OFFSET UNITYSDK_OFFSET(0x13A19910)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_EFIAODEKPEC_OFFSET UNITYSDK_OFFSET(0x13A198C0)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13A192D0)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_HHOODLKFBDB_OFFSET UNITYSDK_OFFSET(0x13A19E90)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_JAOJOJBMHBK_OFFSET UNITYSDK_OFFSET(0x13A19A30)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_JGENOJBGCKN_OFFSET UNITYSDK_OFFSET(0x13A19620)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_JKAADIGAGAI_OFFSET UNITYSDK_OFFSET(0x13A1A100)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13A192E0)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13A19470)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13A194E0)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A19780)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13A19790)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13A19820)
#define MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13A19830)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBattleCommonRecordPopWindowController_TypeDefinitionIndex = 90328;

	class UIActivityBattleCommonRecordPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::NEKPOIIBKEI* _view; // 0x320
		::MoleMole::UIActivityBattleCommonRecordPopWindowController_Context* DAAAEJDBNFI; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void EFIAODEKPEC(::System::Int32 JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_EFIAODEKPEC_OFFSET))(this, JKBLDFBGBPK);
		}

		::Foundation::AssetPath CHJFGOOIOMO(::ADDEBPHFFIF_NABONMLJDBB PAMMBELCLFO)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::ADDEBPHFFIF_NABONMLJDBB))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_CHJFGOOIOMO_OFFSET))(this, PAMMBELCLFO);
		}

		::System::Void JAOJOJBMHBK(::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordData* IECODBGIDFE)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_JAOJOJBMHBK_OFFSET))(this, IECODBGIDFE);
		}

		::System::Void HHOODLKFBDB(::System::Int32 ABHBKFJKINO, ::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordInfo* GOHENIDPDPD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_HHOODLKFBDB_OFFSET))(this, ABHBKFJKINO, GOHENIDPDPD);
		}

		::System::Void JGENOJBGCKN(::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordType JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityBattleCommonRecordPopWindowController_RecordType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_JGENOJBGCKN_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void JKAADIGAGAI(::System::Collections::Generic::List_1<::System::Object*>* EJKJALFEFNE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBATTLECOMMONRECORDPOPWINDOWCONTROLLER_JKAADIGAGAI_OFFSET))(this, EJKJALFEFNE);
		}
	};
}
