#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/UIMainCityGuideItemWidgetController___c__DisplayClass14_0.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DJIOENNHKKE;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_BBEBCCOOEAE_OFFSET UNITYSDK_OFFSET(0x18D07A70)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_DMBDGGCCICI_OFFSET UNITYSDK_OFFSET(0x18D07880)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_FHAPBLMDGLD_OFFSET UNITYSDK_OFFSET(0x18D08330)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_FULLSCREENRECTTRANS_OFFSET UNITYSDK_OFFSET(0x18D06EF0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_ISSHOWGUIDE_OFFSET UNITYSDK_OFFSET(0x18D06ED0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x18D06EE0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GKHFHBKOEJG_OFFSET UNITYSDK_OFFSET(0x18D077B0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_KEKFBIDPNBE_OFFSET UNITYSDK_OFFSET(0x18D080F0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_LIHGIMIBKOB_OFFSET UNITYSDK_OFFSET(0x18D07CC0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D07110)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D071A0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D06F10)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_PEGINJNMFKI_OFFSET UNITYSDK_OFFSET(0x18D07680)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_RESETVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x18D07220)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SETPARTNERID_OFFSET UNITYSDK_OFFSET(0x18D07C50)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SET_FULLSCREENRECTTRANS_OFFSET UNITYSDK_OFFSET(0x18D06F00)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x18D072E0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D07EE0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18D07F40)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18D07FD0)
#define MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18D08060)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityGuideItemWidgetController_TypeDefinitionIndex = 89628;

	class UIMainCityGuideItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _NJPJBNLODFB_k__BackingField; // 0x2C8
		::System::Byte _padding0[0x7];
		::UnityEngine::RectTransform* _LHIPODHBFOK_k__BackingField; // 0x2D0
		::DJIOENNHKKE* _view; // 0x2D8
		::System::Boolean FNLONLCHOPD; // 0x2E0
		::System::Byte _padding1[0x3];
		::System::Int32 DGKMJIBMDMN; // 0x2E4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsShowGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_ISSHOWGUIDE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_ISSHOW_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_FullScreenRectTrans()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GET_FULLSCREENRECTTRANS_OFFSET))(this);
		}

		::System::Void set_FullScreenRectTrans(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SET_FULLSCREENRECTTRANS_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetViewState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_RESETVIEWSTATE_OFFSET))(this);
		}

		::System::Void Tick(::UnityEngine::Vector3 inputWorldPos, ::System::Boolean showGuide, ::System::Single deltaTime, ::UnityEngine::Camera* overrideCam)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_TICK_OFFSET))(this, inputWorldPos, showGuide, deltaTime, overrideCam);
		}

		::System::Void SetPartnerID(::System::Int32 partnerID, ::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_SETPARTNERID_OFFSET))(this, partnerID, force);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void KEKFBIDPNBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_KEKFBIDPNBE_OFFSET))(this);
		}

		::System::Void FHAPBLMDGLD(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_FHAPBLMDGLD_OFFSET))(this, EGEGIMGMJHN);
		}

		::System::Void PEGINJNMFKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_PEGINJNMFKI_OFFSET))(this);
		}

		::System::Void BBEBCCOOEAE(::MoleMole::UIMainCityGuideItemWidgetController___c__DisplayClass14_0& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCityGuideItemWidgetController___c__DisplayClass14_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_BBEBCCOOEAE_OFFSET))(this, param_0);
		}

		::System::Void DMBDGGCCICI(::MoleMole::UIMainCityGuideItemWidgetController___c__DisplayClass14_0& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainCityGuideItemWidgetController___c__DisplayClass14_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_DMBDGGCCICI_OFFSET))(this, param_0);
		}

		::System::Void LIHGIMIBKOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_LIHGIMIBKOB_OFFSET))(this);
		}

		::System::Void GKHFHBKOEJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYGUIDEITEMWIDGETCONTROLLER_GKHFHBKOEJG_OFFSET))(this);
		}
	};
}
