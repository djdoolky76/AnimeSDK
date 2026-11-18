#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class DBEOLNKGIHB;
namespace MoleMole { class UIControlReference; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_GLICPEPCPDJ_OFFSET UNITYSDK_OFFSET(0x18399210)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_HFCDAPLGIAH_OFFSET UNITYSDK_OFFSET(0x183995A0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18398CD0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18398D60)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18398C70)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_PLAYEND_OFFSET UNITYSDK_OFFSET(0x18399290)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_PLAYSTART_OFFSET UNITYSDK_OFFSET(0x18398DE0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_RESETSTATE_OFFSET UNITYSDK_OFFSET(0x18398FB0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18399340)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183993F0)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18399480)
#define MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18399510)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCurseWidgetController_TypeDefinitionIndex = 56626;

	class UIHollowCurseWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::DBEOLNKGIHB* _view; // 0x2C8
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* HENOIMEANMN; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_PLAYSTART_OFFSET))(this);
		}

		::System::Void PlayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_PLAYEND_OFFSET))(this);
		}

		::System::Void ResetState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_RESETSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* GLICPEPCPDJ()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_GLICPEPCPDJ_OFFSET))(this);
		}

		::System::Void HFCDAPLGIAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCURSEWIDGETCONTROLLER_HFCDAPLGIAH_OFFSET))(this);
		}
	};
}
