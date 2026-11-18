#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIActivityIdolLiveWidgetController_IdolLiveStatus.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CJIEIHEDMME;
class HFDOEBCCKCK;
namespace MoleMole { class UIActivityIconLiveBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_AILKDMOPCAP_OFFSET UNITYSDK_OFFSET(0x1899FC30)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ANMMDKABBJF_OFFSET UNITYSDK_OFFSET(0x1899FAE0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GETCURLIVESTATUS_OFFSET UNITYSDK_OFFSET(0x1899FDB0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GET_CURSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1899F7D0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GOGUIDEANDTRYTAKEREWARD_OFFSET UNITYSDK_OFFSET(0x1899FE00)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GOROOTACTIVITYGUIDE_OFFSET UNITYSDK_OFFSET(0x189A0230)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_JEPBOLLPKDP_OFFSET UNITYSDK_OFFSET(0x189A01D0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1899FCA0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1899FD30)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1899F7E0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1899F9C0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x189A0320)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x189A0C80)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x189A0C20)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x189A0D40)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x189A0DD0)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x189A0E60)
#define MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x189A0EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityIdolLiveWidgetController_TypeDefinitionIndex = 48343;

	class UIActivityIdolLiveWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet__timeConfigKeys()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UIActivityIdolLiveWidgetController_TypeDefinitionIndex)->GetStaticField(0x517F0);
		}
		::HFDOEBCCKCK* _view; // 0x2C8
		::CJIEIHEDMME* FEIHIIEOIPN; // 0x2D0
		::MoleMole::UIItemIconBtnSmallWidgetController* AIFHJCPGALC; // 0x2D8
		::MoleMole::UIActivityIconLiveBtnWidgetController* KLNEAJJNMKJ; // 0x2E0
		::MoleMole::UIActivityIconLiveBtnWidgetController* BKAAGKJOMCB; // 0x2E8
		::System::Int32 KFKEJCCOLEN; // 0x2F0
		::System::Byte _padding0[0x4];
		::System::Action* OnSelectActivity; // 0x2F8
		::System::Collections::Generic::List_1<::CJIEIHEDMME*>* childBaseDataList; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Int32 get_CurSelectIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GET_CURSELECTINDEX_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::MoleMole::UIActivityIdolLiveWidgetController_IdolLiveStatus GetCurLiveStatus()
		{
			return ((::MoleMole::UIActivityIdolLiveWidgetController_IdolLiveStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GETCURLIVESTATUS_OFFSET))(this);
		}

		::System::Void GoGuideAndTryTakeReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GOGUIDEANDTRYTAKEREWARD_OFFSET))(this);
		}

		::System::Void GoRootActivityGuide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_GOROOTACTIVITYGUIDE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::CJIEIHEDMME* JEPBOLLPKDP()
		{
			return ((::CJIEIHEDMME*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_JEPBOLLPKDP_OFFSET))(this);
		}

		::MoleMole::UIActivityIdolLiveWidgetController_IdolLiveStatus ANMMDKABBJF(::System::Int32 ABHBKFJKINO)
		{
			return ((::MoleMole::UIActivityIdolLiveWidgetController_IdolLiveStatus(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_ANMMDKABBJF_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void AILKDMOPCAP(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYIDOLLIVEWIDGETCONTROLLER_AILKDMOPCAP_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
