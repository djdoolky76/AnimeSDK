#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class BHALPEHAEEK;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMusicBattleInLevelInteractWidgetController; }
namespace MoleMole { class UIMusicBattleInLevelPlayMoveWidgetController; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class MEKABAIJMNM_1;

#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ACTIVATEBONUS_OFFSET UNITYSDK_OFFSET(0x18FCE590)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET UNITYSDK_OFFSET(0x18FCE370)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_AFOLOAJIEBN_OFFSET UNITYSDK_OFFSET(0x18FCDE30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_GET_MUSICBATTLEPLAYROW_OFFSET UNITYSDK_OFFSET(0x18FCDA20)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_HMICOMFKCMD_OFFSET UNITYSDK_OFFSET(0x18FCE490)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_KCJCAADFPKJ_OFFSET UNITYSDK_OFFSET(0x18FCEC80)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_KILLMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x18FCE210)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FCDD10)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FCDDA0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18FCDA80)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18FCDB40)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_PLAYMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x18FCDF30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x18FCEAE0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_UPDATEFEVERPROGRESS_OFFSET UNITYSDK_OFFSET(0x18FCDC30)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FCE740)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18FCE8A0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18FCE930)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18FCE9C0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18FCEA50)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelPlayWidgetController_TypeDefinitionIndex = 77117;

	class UIMusicBattleInLevelPlayWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::BHALPEHAEEK* _view; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* KOJKHPBCPGC; // 0x2D0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* MIKBKOFGPCH; // 0x2D8
		::System::Action_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* JEFMMOPOEND; // 0x2E0
		::System::Single DKCHJHDEFKM; // 0x2E8
		::System::Single NBNPANLACBA; // 0x2EC
		::System::Boolean AKGFOMPCGLP; // 0x2F0
		::System::Boolean LIKKOPPGCJM; // 0x2F1
		::System::Byte _padding0[0x2];
		::System::Single GMHCCAMPEPI; // 0x2F4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MEKABAIJMNM_1<::MoleMole::UIMusicBattleInLevelInteractWidgetController*>* get_MusicBattlePlayRow()
		{
			return ((::MEKABAIJMNM_1<::MoleMole::UIMusicBattleInLevelInteractWidgetController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_GET_MUSICBATTLEPLAYROW_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayMoveAnimation(::System::Int32 key, ::System::Single moveTime, ::MoleMole::Config::MusicBattleMarkerNodeType color)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::MoleMole::Config::MusicBattleMarkerNodeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_PLAYMOVEANIMATION_OFFSET))(this, key, moveTime, color);
		}

		::System::Void KillMoveAnimation(::System::Int32 key)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_KILLMOVEANIMATION_OFFSET))(this, key);
		}

		::System::Void UpdateFeverProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_UPDATEFEVERPROGRESS_OFFSET))(this, progress);
		}

		::System::Void ActivateFever(::System::Single feverTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ACTIVATEFEVER_OFFSET))(this, feverTime);
		}

		::System::Void ActivateBonus(::System::Boolean activated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_ACTIVATEBONUS_OFFSET))(this, activated);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void KCJCAADFPKJ(::System::Int32 IJKOLMELBBC, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController* ALPANKAJAGK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_KCJCAADFPKJ_OFFSET))(this, IJKOLMELBBC, ALPANKAJAGK);
		}

		::System::Void AFOLOAJIEBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_AFOLOAJIEBN_OFFSET))(this);
		}

		::System::Void HMICOMFKCMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYWIDGETCONTROLLER_HMICOMFKCMD_OFFSET))(this);
		}
	};
}
