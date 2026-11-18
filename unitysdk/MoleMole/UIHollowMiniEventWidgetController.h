#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLHBLOBDIGB.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class FAKGOOMIIIO;
class FMNAIOANOLK;
class JPMEIMBBDNG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowMiniEventWidgetController_Context; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_IABMNMAMLLJ_OFFSET UNITYSDK_OFFSET(0x18CD0E20)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_OCEGNKFCOEO_OFFSET UNITYSDK_OFFSET(0x18CD22E0)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_OMEAAFBJHLN_OFFSET UNITYSDK_OFFSET(0x18CD10E0)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18CD0D90)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18CD2480)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18CD0510)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18CD0570)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_PBJHDNBLDPH_OFFSET UNITYSDK_OFFSET(0x18CD29B0)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x18CD0660)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18CD2410)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD2600)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18CD2770)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18CD2800)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18CD2890)
#define MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18CD2920)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMiniEventWidgetController_TypeDefinitionIndex = 78179;

	class UIHollowMiniEventWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single EBOIDIOHOLI; // 0x0
		// static const ::System::Single IKFGMBOLEIL; // 0x0
		::JPMEIMBBDNG* _view; // 0x2C8
		::MoleMole::UIHollowMiniEventWidgetController_Context* DAAAEJDBNFI; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::FAKGOOMIIIO*>* JHNJIIACHDG; // 0x2D8
		::System::Single JECENEJDFKB; // 0x2E0
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* IDCJOJDDLOK; // 0x2E8
		::FMNAIOANOLK* DENFPKFLMOJ; // 0x2F0
		::CLHBLOBDIGB State; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshView(::MoleMole::UIHollowMiniEventWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowMiniEventWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, context);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean PBJHDNBLDPH(::UnityEngine::UI::Image* AOOLNBKIHAG, ::System::String* MCOHLHMKLIP, ::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_PBJHDNBLDPH_OFFSET))(this, AOOLNBKIHAG, MCOHLHMKLIP, ABHBKFJKINO);
		}

		::System::Void OCEGNKFCOEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_OCEGNKFCOEO_OFFSET))(this);
		}

		::System::Void OMEAAFBJHLN(::System::Int32 CJLHCAHJILG, ::System::Boolean& PFPJFCGFNFL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_OMEAAFBJHLN_OFFSET))(this, CJLHCAHJILG, PFPJFCGFNFL);
		}

		::System::Void IABMNMAMLLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIEVENTWIDGETCONTROLLER_IABMNMAMLLJ_OFFSET))(this);
		}
	};
}
