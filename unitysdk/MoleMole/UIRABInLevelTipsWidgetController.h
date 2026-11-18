#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CBNEPKLKMPK;
class DENNNBBPNEO;
class JPGAKCLPEPK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABInLevelPageController; }
namespace MoleMole { class UIRABInLevelQuestTipsWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_BAGOKGEMNLI_OFFSET UNITYSDK_OFFSET(0x15D40B90)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x15D40DE0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_FNFLAPMOKBF_OFFSET UNITYSDK_OFFSET(0x15D41760)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_MBHJEAOCHAF_OFFSET UNITYSDK_OFFSET(0x15D414D0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D40A70)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15D40A20)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D40B00)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D40850)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D40950)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_PFDBAHDGNIK_OFFSET UNITYSDK_OFFSET(0x15D41350)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D40F70)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D41100)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15D41190)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D411A0)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D41230)
#define MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15D412C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelTipsWidgetController_TypeDefinitionIndex = 62301;

	class UIRABInLevelTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Single DMEBOLJELBO; // 0x0
		::CBNEPKLKMPK* _view; // 0x2C8
		::DENNNBBPNEO* JEBFIPGBIBL; // 0x2D0
		::MoleMole::UIRABInLevelPageController* OKJPBIEFFEF; // 0x2D8
		::System::Collections::Generic::Queue_1<::System::Object*>* KHFEEAKNHHK; // 0x2E0
		::System::Collections::Generic::HashSet_1<::System::Int32>* DDBLEEKHECO; // 0x2E8
		::MoleMole::UIRABInLevelQuestTipsWidgetController* FAJJCDMPCLJ; // 0x2F0
		::System::Int32 HBMLNIGICFC; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::JPGAKCLPEPK* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::JPGAKCLPEPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, viewModel);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void PFDBAHDGNIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_PFDBAHDGNIK_OFFSET))(this);
		}

		::System::Void BAGOKGEMNLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_BAGOKGEMNLI_OFFSET))(this);
		}

		::System::Void FNFLAPMOKBF(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_FNFLAPMOKBF_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void MBHJEAOCHAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELTIPSWIDGETCONTROLLER_MBHJEAOCHAF_OFFSET))(this);
		}
	};
}
