#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
class ILLJOMOEJGF;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_BUTTONLISTTRIGGER_CHECKIFINOWNERFORWARDANGLELIMIT_OFFSET UNITYSDK_OFFSET(0xF0540A0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xF0530E0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF0535A0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xF0537B0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xF053B20)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xF054350)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_ENABLEBUTTONS_OFFSET UNITYSDK_OFFSET(0xF0547B0)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xF055030)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_ONUIBUTTONCONFIRM_OFFSET UNITYSDK_OFFSET(0xF054410)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_REFRESHRUNTIMECONFIG_OFFSET UNITYSDK_OFFSET(0xF054D00)
#define RPG_GAMECORE_BUTTONLISTTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0xF055040)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKALLLIMIT_OFFSET UNITYSDK_OFFSET(0xF053850)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKBUTTONIDUNIQUE_OFFSET UNITYSDK_OFFSET(0xF053340)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKCDLIMIT_OFFSET UNITYSDK_OFFSET(0xF053B80)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKIFININTERACTIONANGLELIMIT_OFFSET UNITYSDK_OFFSET(0xF053D80)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKINRANGE_OFFSET UNITYSDK_OFFSET(0xF053D30)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__DISABLEUI_OFFSET UNITYSDK_OFFSET(0xF053630)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__ENABLEUI_OFFSET UNITYSDK_OFFSET(0xF053910)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__RESETCD_OFFSET UNITYSDK_OFFSET(0xF053C40)
#define RPG_GAMECORE_BUTTONLISTTRIGGER__TICKCD_OFFSET UNITYSDK_OFFSET(0xF053BD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ButtonListTrigger_TypeDefinitionIndex = 58730;

	class ButtonListTrigger : public ::EDLDHDMLJDH
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* _RuntimeButtons; // 0xA0
		::RPG::GameCore::GameEntity* _ContextOwner; // 0xA8
		::System::Single _CD; // 0xB0
		::System::Single OwnerForwardAngleRange; // 0xB4
		::System::Boolean _IsInTriggerRegion; // 0xB8
		::System::Boolean _IsTriggerUIShowing; // 0xB9
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xBA
		::System::Boolean ConsiderAngleLimit; // 0xBB
		::System::Boolean ConsiderOwnerForwardAngleLimit; // 0xBC
		::System::Byte _padding0[0x3];
		::System::Single InteractAngleRange; // 0xC0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Collections::Generic::List_1<::ILLJOMOEJGF*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Collections::Generic::List_1<::ILLJOMOEJGF*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _CheckButtonIDUnique()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKBUTTONIDUNIQUE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void _EnableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__ENABLEUI_OFFSET))(this);
		}

		::System::Void _DisableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__DISABLEUI_OFFSET))(this);
		}

		::System::Boolean _CheckCDLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKCDLIMIT_OFFSET))(this);
		}

		::System::Void _TickCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__TICKCD_OFFSET))(this, a1);
		}

		::System::Void _ResetCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__RESETCD_OFFSET))(this);
		}

		::System::Boolean _CheckInRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKINRANGE_OFFSET))(this);
		}

		::System::Boolean _CheckAllLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKALLLIMIT_OFFSET))(this);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_DOONTICK_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIfInInteractionAngleLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER__CHECKIFININTERACTIONANGLELIMIT_OFFSET))(this);
		}

		::System::Boolean CheckIfInOwnerForwardAngleLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_CHECKIFINOWNERFORWARDANGLELIMIT_OFFSET))(this);
		}

		::System::Void OnUIButtonConfirm(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_ONUIBUTTONCONFIRM_OFFSET))(this, a1);
		}

		::System::Void EnableButtons(::System::Collections::Generic::List_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_ENABLEBUTTONS_OFFSET))(this, a1, a2);
		}

		::System::Void RefreshRuntimeConfig(::System::Collections::Generic::List_1<::ILLJOMOEJGF*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::ILLJOMOEJGF*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_REFRESHRUNTIMECONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableAfterTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableAfterTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BUTTONLISTTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, a1);
		}

	};
}
