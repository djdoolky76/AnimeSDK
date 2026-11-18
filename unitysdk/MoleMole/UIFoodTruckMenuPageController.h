#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIFoodTruckMenuPageController_EOrderType.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class AJLABKDHLAM;
class CJIEIHEDMME;
class GICBPENJOFF;
class NMLCENJBGNF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_DFIBLJFAOJK_OFFSET UNITYSDK_OFFSET(0x1999E3C0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1999BAE0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_KEDCOOAHFCK_OFFSET UNITYSDK_OFFSET(0x1999C650)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_KJHMPNNEHKK_OFFSET UNITYSDK_OFFSET(0x1999D670)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_OMEMLDBOLAO_OFFSET UNITYSDK_OFFSET(0x1999D6C0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1999BB90)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1999D320)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1999D140)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1999BED0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1999BC20)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1999BF40)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_PFOJBIACKAC_OFFSET UNITYSDK_OFFSET(0x1999C7A0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1999BAF0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1999D2B0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1999D3C0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1999D500)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1999D590)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1999D5A0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1999D5B0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1999D5C0)
#define MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1999D5D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodTruckMenuPageController_TypeDefinitionIndex = 75582;

	class UIFoodTruckMenuPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::Int32 IINEJDJLICD = 0x7335D; // 0x0
		// static const ::System::Int32 CGCNGAOFFCN = 0x7335E; // 0x0
		::MoleMole::UIFoodTruckMenuPageController_EOrderType JEJMJJDMPAG; // 0x330
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* PJHFHAKDIGE; // 0x338
		::System::Int32 HIFAJHJKOIH; // 0x340
		::System::Byte _padding1[0x4];
		::System::Action_1<::System::Boolean>* MDBJDMPDGND; // 0x348
		::AJLABKDHLAM* _view; // 0x350
		::System::Collections::Generic::List_1<::GICBPENJOFF*>* CNEIMMHNPMO; // 0x358
		::System::Collections::Generic::List_1<::System::Object*>* FLBKHBPMNBN; // 0x360
		::System::Int32 CurrentSelectIndex; // 0x368
		::System::Boolean Erroring; // 0x36C
		::System::Byte _padding2[0x3];
		::NMLCENJBGNF* EFPMLJEHODL; // 0x370
		::System::Boolean JAIGFKHCMPE; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnSelect(::System::Int32 AAGCMDKGEAN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_ONSELECT_OFFSET))(this, AAGCMDKGEAN);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void PFOJBIACKAC(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_PFOJBIACKAC_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void KJHMPNNEHKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_KJHMPNNEHKK_OFFSET))(this);
		}

		::CJIEIHEDMME* KEDCOOAHFCK()
		{
			return ((::CJIEIHEDMME*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_KEDCOOAHFCK_OFFSET))(this);
		}

		::System::Void OMEMLDBOLAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_OMEMLDBOLAO_OFFSET))(this);
		}

		::System::Void DFIBLJFAOJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODTRUCKMENUPAGECONTROLLER_DFIBLJFAOJK_OFFSET))(this);
		}
	};
}
