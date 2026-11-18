#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GDDJFHLFNGE;
namespace DG::Tweening { class Tween; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowProgressCircleRowWidgetController; }

#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_HHEJHEGKPFB_OFFSET UNITYSDK_OFFSET(0x199BE150)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x199BCE30)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199BCDA0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199BE9A0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199BCCD0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199BCD30)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PKGBAHOJCBF_OFFSET UNITYSDK_OFFSET(0x199BDA10)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x199BD950)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_SETPROGRESSIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x199BE630)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199BEA40)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199BEAA0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x199BEB30)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199BEBC0)
#define MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199BEC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralPhaseProgressWidgetController_TypeDefinitionIndex = 87598;

	class UIGeneralPhaseProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GDDJFHLFNGE* _view; // 0x2C8
		::DG::Tweening::Tween* HKLOGKLEINM; // 0x2D0
		::DG::Tweening::Tween* JAGBKEGDDLO; // 0x2D8
		::MoleMole::UIHollowProgressCircleRowWidgetController* MGCIPOJGIBH; // 0x2E0
		::UnityEngine::Vector3 LMBAKOEOFCC; // 0x2E8
		::UnityEngine::Vector3 KPKKPOEDLEE; // 0x2F4
		::System::Single CHLIHGFDIIA; // 0x300
		::System::Boolean DKOAMEJHGNF; // 0x304

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitProgressView(::System::Int32 lastLayer, ::System::Int32 currentLayer, ::System::Int32 maxLayer, ::System::Boolean showMainIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_INITPROGRESSVIEW_OFFSET))(this, lastLayer, currentLayer, maxLayer, showMainIcon);
		}

		::System::Void PlayProgressAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET))(this);
		}

		::System::Void SetProgressImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_SETPROGRESSIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void HHEJHEGKPFB(::MoleMole::UIHollowProgressCircleRowWidgetController* CHAKCJNAPHM, ::UnityEngine::Vector3 GIAEPMKCBIB, ::UnityEngine::Vector3 BOEJJMLJEDP)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowProgressCircleRowWidgetController*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_HHEJHEGKPFB_OFFSET))(this, CHAKCJNAPHM, GIAEPMKCBIB, BOEJJMLJEDP);
		}

		::System::Void PKGBAHOJCBF(::System::Single BOEJJMLJEDP)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALPHASEPROGRESSWIDGETCONTROLLER_PKGBAHOJCBF_OFFSET))(this, BOEJJMLJEDP);
		}
	};
}
