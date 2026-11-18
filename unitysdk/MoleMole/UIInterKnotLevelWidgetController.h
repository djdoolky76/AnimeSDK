#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ANAHIOPMBAB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_DDFKEOCAKIO_OFFSET UNITYSDK_OFFSET(0x19A58370)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_DMDBFPIKMHB_OFFSET UNITYSDK_OFFSET(0x19A575B0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A56F10)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A56FA0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A56DE0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A56EA0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_1_OFFSET UNITYSDK_OFFSET(0x19A57680)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_2_OFFSET UNITYSDK_OFFSET(0x19A58610)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_OFFSET UNITYSDK_OFFSET(0x19A57130)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_SETADDEXP_OFFSET UNITYSDK_OFFSET(0x19A58280)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_SETLEVELTEXT_OFFSET UNITYSDK_OFFSET(0x19A59170)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A591F0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A59250)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A592E0)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A59370)
#define MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A59400)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotLevelWidgetController_TypeDefinitionIndex = 45045;

	class UIInterKnotLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::ANAHIOPMBAB* _view; // 0x2C8
		::System::Single HANIIOCHPLN; // 0x2D0
		::System::Single KHDKMKHLGHG; // 0x2D4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshLevelTxtView(::System::Int32 addedExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_OFFSET))(this, addedExp);
		}

		::System::Void RefreshLevelTxtView_1(::System::Int32 curLv, ::System::Int32 prvLv, ::System::Int32 remainExp, ::System::Int32 expNeededForNxtLv, ::System::Int32 prvRemainExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_1_OFFSET))(this, curLv, prvLv, remainExp, expNeededForNxtLv, prvRemainExp);
		}

		::System::Void RefreshLevelTxtView_2(::System::Int32 curLv, ::System::Int32 prvLv, ::System::Int32 remainExp, ::System::Int32 prevNeededForNxtLv, ::System::Int32 expNeededForNxtLv, ::System::Int32 prvRemainExp, ::System::Int32 maxLevel, ::System::Int32 maxExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_REFRESHLEVELTXTVIEW_2_OFFSET))(this, curLv, prvLv, remainExp, prevNeededForNxtLv, expNeededForNxtLv, prvRemainExp, maxLevel, maxExp);
		}

		::System::Void SetAddExp(::System::Int32 addedExp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_SETADDEXP_OFFSET))(this, addedExp);
		}

		::System::Void SetLevelText(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_SETLEVELTEXT_OFFSET))(this, key);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void DDFKEOCAKIO(::System::Single PMGFIHJAJHL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_DDFKEOCAKIO_OFFSET))(this, PMGFIHJAJHL);
		}

		::System::Int32 DMDBFPIKMHB(::System::Int32 LOHAFHENOLD, ::System::Int32 HFBIHKINNMF, ::System::Int32 HFOELHGAIPM, ::System::Int32& IDBCJNNCBNN)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTLEVELWIDGETCONTROLLER_DMDBFPIKMHB_OFFSET))(this, LOHAFHENOLD, HFBIHKINNMF, HFOELHGAIPM, IDBCJNNCBNN);
		}
	};
}
