#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MusicBattleMarkerNodeType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class OKDHGPAJECG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_AFOLOAJIEBN_OFFSET UNITYSDK_OFFSET(0x14CAA010)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_HMICOMFKCMD_OFFSET UNITYSDK_OFFSET(0x14CAA300)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_KILLMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x14CAA400)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14CA9EB0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14CA9F40)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14CA9DB0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_PLAYMOVEANIMATION_OFFSET UNITYSDK_OFFSET(0x14CAA110)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14CAA680)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14CAA470)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14CAA4D0)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14CAA560)
#define MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14CAA5F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMusicBattleInLevelPlayMoveWidgetController_TypeDefinitionIndex = 71593;

	class UIMusicBattleInLevelPlayMoveWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::OKDHGPAJECG* _view; // 0x2C8
		::System::Single AAPBCIBJEEL; // 0x2D0
		::System::Single GDFEBENBNCO; // 0x2D4
		::System::Int32 AIJFEHJHFNG; // 0x2D8
		::MoleMole::Config::MusicBattleMarkerNodeType GMIPBCKNEFH; // 0x2DC
		::System::Action_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* PJNFPEDHGAB; // 0x2E0
		::System::Boolean NCKCKOHHMOE; // 0x2E8
		::System::Boolean OAENJKKBBHO; // 0x2E9
		::System::Byte _padding0[0x2];
		::System::Single PBIHNKBCCMJ; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayMoveAnimation(::System::Int32 key, ::System::Single moveTime, ::MoleMole::Config::MusicBattleMarkerNodeType color, ::System::Action_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>* onCompleted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::MoleMole::Config::MusicBattleMarkerNodeType, ::System::Action_2<::System::Int32, ::MoleMole::UIMusicBattleInLevelPlayMoveWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_PLAYMOVEANIMATION_OFFSET))(this, key, moveTime, color, onCompleted);
		}

		::System::Void KillMoveAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_KILLMOVEANIMATION_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void HMICOMFKCMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_HMICOMFKCMD_OFFSET))(this);
		}

		::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void AFOLOAJIEBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMUSICBATTLEINLEVELPLAYMOVEWIDGETCONTROLLER_AFOLOAJIEBN_OFFSET))(this);
		}
	};
}
