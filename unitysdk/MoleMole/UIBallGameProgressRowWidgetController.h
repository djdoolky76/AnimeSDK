#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNEADNBEPBN.h"
#include "unitysdk/LDKCHEEKEMJ.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/NKCKADEDLED.h"

class BKMOIBFLAEP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_DELCDBANENF_OFFSET UNITYSDK_OFFSET(0x19659620)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19658F00)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19658F90)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19658DA0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19658E00)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19659010)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19659680)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19659760)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196597F0)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19659880)
#define MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19659910)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameProgressRowWidgetController_TypeDefinitionIndex = 65156;

	class UIBallGameProgressRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::BKMOIBFLAEP* _view; // 0x2C8
		::System::Single DEOMJMJPINK; // 0x2D0
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* EJDMHOEJOHO; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::NKCKADEDLED wave)
		{
			return ((::System::Void(*)(::PVOID, ::NKCKADEDLED))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, wave);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::JNEADNBEPBN DELCDBANENF(::LDKCHEEKEMJ OBNIAHNMHPF)
		{
			return ((::JNEADNBEPBN(*)(::PVOID, ::LDKCHEEKEMJ))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEPROGRESSROWWIDGETCONTROLLER_DELCDBANENF_OFFSET))(this, OBNIAHNMHPF);
		}
	};
}
