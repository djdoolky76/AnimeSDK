#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/UIHollowGuideItemWidgetController___c__DisplayClass15_0.h"

class DAJFFHOPBKI;
namespace MoleMole { class UIControlReference; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_FHAPBLMDGLD_OFFSET UNITYSDK_OFFSET(0x1A294730)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_FULLSCREENRECTTRANS_OFFSET UNITYSDK_OFFSET(0x1A2930E0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_ISPLAYERVISIBLE_OFFSET UNITYSDK_OFFSET(0x1A2930C0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1A2930D0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GKHFHBKOEJG_OFFSET UNITYSDK_OFFSET(0x1A293C80)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_KEKFBIDPNBE_OFFSET UNITYSDK_OFFSET(0x1A2944F0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_LEADCEKLFIH_OFFSET UNITYSDK_OFFSET(0x1A293D50)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_LGEIFIDAIJF_OFFSET UNITYSDK_OFFSET(0x1A293F30)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_NOOPMNMJNLB_OFFSET UNITYSDK_OFFSET(0x1A294370)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A293260)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A2932F0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A293100)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_PEGINJNMFKI_OFFSET UNITYSDK_OFFSET(0x1A293B50)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_RESETVIEWSTATE_OFFSET UNITYSDK_OFFSET(0x1A293370)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_SET_FULLSCREENRECTTRANS_OFFSET UNITYSDK_OFFSET(0x1A2930F0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0x1A293430)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A294150)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A2941C0)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A294250)
#define MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A2942E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowGuideItemWidgetController_TypeDefinitionIndex = 72724;

	class UIHollowGuideItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _NJPJBNLODFB_k__BackingField; // 0x2C8
		::System::Byte _padding0[0x7];
		::UnityEngine::RectTransform* _LHIPODHBFOK_k__BackingField; // 0x2D0
		::UnityEngine::Vector3 JIMFBJENAGA; // 0x2D8
		::System::Byte _padding1[0x4];
		::DAJFFHOPBKI* _view; // 0x2E8
		::System::Boolean CBIMAPPHBGP; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_ISPLAYERVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_ISSHOW_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_FullScreenRectTrans()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GET_FULLSCREENRECTTRANS_OFFSET))(this);
		}

		::System::Void set_FullScreenRectTrans(::UnityEngine::RectTransform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_SET_FULLSCREENRECTTRANS_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetViewState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_RESETVIEWSTATE_OFFSET))(this);
		}

		::System::Void Tick(::UnityEngine::Vector3 inputWorldPos, ::UnityEngine::Camera* cam, ::System::Boolean playerVisible, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Camera*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_TICK_OFFSET))(this, inputWorldPos, cam, playerVisible, deltaTime);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void NOOPMNMJNLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_NOOPMNMJNLB_OFFSET))(this);
		}

		::System::Void GKHFHBKOEJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_GKHFHBKOEJG_OFFSET))(this);
		}

		::System::Void KEKFBIDPNBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_KEKFBIDPNBE_OFFSET))(this);
		}

		::System::Void LEADCEKLFIH(::MoleMole::UIHollowGuideItemWidgetController___c__DisplayClass15_0& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowGuideItemWidgetController___c__DisplayClass15_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_LEADCEKLFIH_OFFSET))(this, param_0);
		}

		::System::Void LGEIFIDAIJF(::MoleMole::UIHollowGuideItemWidgetController___c__DisplayClass15_0& param_0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowGuideItemWidgetController___c__DisplayClass15_0&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_LGEIFIDAIJF_OFFSET))(this, param_0);
		}

		::System::Void PEGINJNMFKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_PEGINJNMFKI_OFFSET))(this);
		}

		::System::Void FHAPBLMDGLD(::System::Boolean EGEGIMGMJHN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWGUIDEITEMWIDGETCONTROLLER_FHAPBLMDGLD_OFFSET))(this, EGEGIMGMJHN);
		}
	};
}
