#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class APABMHKEOAE;
class EMPEGMEDAHH;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIBangBooAutoBattleInLevelPageController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_JHJIBNDNMGB_OFFSET UNITYSDK_OFFSET(0x1A744E50)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A743DD0)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1A743F10)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A743E60)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A743B90)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A743D60)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x1A7441B0)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_RESETCAMP_OFFSET UNITYSDK_OFFSET(0x1A744160)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A745090)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A745190)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1A745220)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A745250)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A7452E0)
#define MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A745370)

namespace MoleMole
{
	inline static constexpr unsigned int UIABInLevelCampInfoWidgetController_TypeDefinitionIndex = 79681;

	class UIABInLevelCampInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::APABMHKEOAE* _view; // 0x2C8
		::System::Collections::Generic::List_1<::KNLFLMMHALL_1<::System::Object*>*>* KKFAPGOGPPN; // 0x2D0
		::System::Collections::Generic::HashSet_1<::System::Int32>* PBIDCAMGDBC; // 0x2D8
		::System::Int32 BIDIKCOKGNO; // 0x2E0
		::System::Byte _padding0[0x4];
		::MoleMole::MonoGamepadCustomList* OPKAJMCJNNI; // 0x2E8
		::MoleMole::UIBangBooAutoBattleInLevelPageController* KBJPABNJOOM; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void ResetCamp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_RESETCAMP_OFFSET))(this);
		}

		::System::Void RefreshInfo(::System::Int32 campId, ::EMPEGMEDAHH* inLevelData, ::System::Boolean isAdd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::EMPEGMEDAHH*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, campId, inLevelData, isAdd);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void JHJIBNDNMGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABINLEVELCAMPINFOWIDGETCONTROLLER_JHJIBNDNMGB_OFFSET))(this);
		}
	};
}
