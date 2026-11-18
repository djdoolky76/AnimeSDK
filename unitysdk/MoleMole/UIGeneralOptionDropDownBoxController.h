#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFOPAEHFPMM.h"
#include "unitysdk/MoleMole/UISettingEnumWidgetController.h"

class IKJPPEFGDDK;
class LGINJIKKBJA;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralDynamicTipsPopWindowController; }
namespace MoleMole { class UIGeneralOptionDropDownBoxContext; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }

#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x199BBA80)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_GETBUTTON_OFFSET UNITYSDK_OFFSET(0x199BBF50)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_IJEJNABHNME_OFFSET UNITYSDK_OFFSET(0x199BC110)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_IOPMFCNCMPD_OFFSET UNITYSDK_OFFSET(0x199BC610)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_LGLGJLEHBAO_OFFSET UNITYSDK_OFFSET(0x199BC670)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199BB850)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199BB8B0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_REFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0x199BC000)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SETENABLE_OFFSET UNITYSDK_OFFSET(0x199BBFB0)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x199BC060)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199BC070)
#define MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x199BC100)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralOptionDropDownBoxController_TypeDefinitionIndex = 42589;

	class UIGeneralOptionDropDownBoxController : public ::MoleMole::UISettingEnumWidgetController
	{
	public:
		::System::Boolean DECIDLELLCP; // 0x308
		::System::Byte _padding0[0x7];
		::IKJPPEFGDDK* _view; // 0x310
		::MoleMole::UIGeneralOptionDropDownBoxContext* DAAAEJDBNFI; // 0x318
		::MoleMole::UIGeneralPopUpHintWidgetController* BJENNDFBCAC; // 0x320
		::MoleMole::UIGeneralDynamicTipsPopWindowController* NPPFABENNOF; // 0x328
		::System::Int32 KFKEJCCOLEN; // 0x330
		::System::Byte _padding1[0x4];
		::Il2CppArray<::BFOPAEHFPMM>* CGMBJKGEOFH; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::LGINJIKKBJA* GetButton()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_GETBUTTON_OFFSET))(this);
		}

		::System::Void SetEnable(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_SETENABLE_OFFSET))(this, enable);
		}

		::System::Void RefreshContext(::MoleMole::UIGeneralOptionDropDownBoxContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralOptionDropDownBoxContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_REFRESHCONTEXT_OFFSET))(this, context);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void IJEJNABHNME(::System::Int32 ABHBKFJKINO, ::System::Boolean IPLGNDKCANH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_IJEJNABHNME_OFFSET))(this, ABHBKFJKINO, IPLGNDKCANH);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void IOPMFCNCMPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_IOPMFCNCMPD_OFFSET))(this);
		}

		::System::Void LGLGJLEHBAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALOPTIONDROPDOWNBOXCONTROLLER_LGLGJLEHBAO_OFFSET))(this);
		}
	};
}
