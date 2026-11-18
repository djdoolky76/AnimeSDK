#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class DLBOKACBENI;
class EGMJAPMDEIH;
class HollowInfoProgressParam;
class MEKACGJBPGE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_BFFMEAELHHI_OFFSET UNITYSDK_OFFSET(0x18CCE490)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_IJEBBGIADHF_OFFSET UNITYSDK_OFFSET(0x18CCF9F0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_JHCMOIDMFGH_OFFSET UNITYSDK_OFFSET(0x18CCE340)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18CCCA60)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18CCCAF0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18CCC830)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x18CCE650)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_SETMISSION_OFFSET UNITYSDK_OFFSET(0x18CCE5F0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_UPDATEREWARDLIST_OFFSET UNITYSDK_OFFSET(0x18CCCD50)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCF6F0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18CCF840)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18CCF8D0)
#define MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18CCF960)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowInfoProgress02WidgetController_TypeDefinitionIndex = 59408;

	class UIHollowInfoProgress02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 HCCNALGJHOG = 0x4; // 0x0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* EEPAFBKHPMO; // 0x2C8
		::HollowInfoProgressParam* ELBGKIJHCML; // 0x2D0
		::DLBOKACBENI* _view; // 0x2D8
		::EGMJAPMDEIH* AJLHHAOHPMM; // 0x2E0
		::UnityEngine::Material* IGGLFPKFEKN; // 0x2E8
		::System::Int32 DBOAHOEOEHK; // 0x2F0
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnWidgetController*>* DKEIOACDFBH; // 0x2F8
		::MEKACGJBPGE* MNMFKIHHCAC; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void UpdateRewardList(::System::Boolean isUp, ::System::Boolean isFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_UPDATEREWARDLIST_OFFSET))(this, isUp, isFinish);
		}

		::System::Void SetMission(::System::Int32 missionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_SETMISSION_OFFSET))(this, missionID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this);
		}

		::System::Int32 JHCMOIDMFGH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_JHCMOIDMFGH_OFFSET))(this);
		}

		::System::Void IJEBBGIADHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_IJEBBGIADHF_OFFSET))(this);
		}

		::UnityEngine::RectTransform* BFFMEAELHHI()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWINFOPROGRESS02WIDGETCONTROLLER_BFFMEAELHHI_OFFSET))(this);
		}
	};
}
