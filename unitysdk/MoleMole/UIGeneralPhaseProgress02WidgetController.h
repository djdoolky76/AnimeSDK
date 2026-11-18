#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OADGFBEJIMM;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowProgressCircleRowWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_CHFJOGNFEKM_OFFSET UNITYSDK_OFFSET(0x19762800)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x19760D50)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ODECIMADFCO_OFFSET UNITYSDK_OFFSET(0x19761910)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19760CC0)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19762450)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19760BF0)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19760C50)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_PKGBAHOJCBF_OFFSET UNITYSDK_OFFSET(0x19761CD0)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x19761C60)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197624E0)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197625C0)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19762650)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197626E0)
#define MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19762770)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPhaseProgress02WidgetController_TypeDefinitionIndex = 57786;

	class UIGeneralPhaseProgress02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OADGFBEJIMM* _view; // 0x2C8
		::DG::Tweening::Tween* HKLOGKLEINM; // 0x2D0
		::MoleMole::UIHollowProgressCircleRowWidgetController* MGCIPOJGIBH; // 0x2D8
		::UnityEngine::Vector3 LMBAKOEOFCC; // 0x2E0
		::UnityEngine::Vector3 KPKKPOEDLEE; // 0x2EC
		::System::Single CHLIHGFDIIA; // 0x2F8
		::System::Boolean DKOAMEJHGNF; // 0x2FC
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::MoleMole::UIHollowProgressCircleRowWidgetController*>* NLOINLLFOBH; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitProgressView(::System::Int32 lastLayer, ::System::Int32 currentLayer, ::System::Int32 maxLayer, ::System::Boolean showMainIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET))(this, lastLayer, currentLayer, maxLayer, showMainIcon);
		}

		::System::Void PlayProgressAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CHFJOGNFEKM(::System::Single GEGOALONGBI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_CHFJOGNFEKM_OFFSET))(this, GEGOALONGBI);
		}

		::System::Void PKGBAHOJCBF(::System::Single BOEJJMLJEDP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_PKGBAHOJCBF_OFFSET))(this, BOEJJMLJEDP);
		}

		::System::Void ODECIMADFCO(::System::Single HBEMMIJOIEC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESS02WIDGETCONTROLLER_ODECIMADFCO_OFFSET))(this, HBEMMIJOIEC);
		}
	};
}
