#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropInteractionTrigger_ButtonParam; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1928D840)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1928C4A0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1928C670)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0x1928C810)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0x1928C9F0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0x1928CA50)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1928D800)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_GET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1928D820)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_ONTRIGGEREDLOGICFINISH_OFFSET UNITYSDK_OFFSET(0x1928CC50)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1928D810)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER_SET_DISABLEWHENTRIGGERED_OFFSET UNITYSDK_OFFSET(0x1928D830)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__CHECKIFININTERACTIONANGLE_OFFSET UNITYSDK_OFFSET(0x1928CD50)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__CHECKRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1928D070)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__DISABLEUI_OFFSET UNITYSDK_OFFSET(0x1928C760)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__ENABLEUI_OFFSET UNITYSDK_OFFSET(0x1928C880)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__ONTRIGGERUICONFIRM_OFFSET UNITYSDK_OFFSET(0x1928D540)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__RESETCD_OFFSET UNITYSDK_OFFSET(0x1928D100)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKANGLELIMIT_OFFSET UNITYSDK_OFFSET(0x1928CBF0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKCD_OFFSET UNITYSDK_OFFSET(0x1928D6E0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKHEIGHTLIMIT_OFFSET UNITYSDK_OFFSET(0x1928CBB0)
#define RPG_GAMECORE_PROPINTERACTIONTRIGGER__TRIGGERCALLBACKLOGIC_OFFSET UNITYSDK_OFFSET(0x1928D1F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropInteractionTrigger_TypeDefinitionIndex = 58750;

	class PropInteractionTrigger : public ::EDLDHDMLJDH
	{
	public:
		::RPG::GameCore::PropInteractionTrigger_ButtonParam* _ButtonParam; // 0xA0
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* _BtnCallbackConfig; // 0xA8
		::RPG::GameCore::TaskContext* _OwnerLevelGraphContext; // 0xB0
		::System::Action* OnTriggerCallback; // 0xB8
		::System::Boolean ConsiderAngleLimit; // 0xC0
		::System::Boolean DestroyPropAfterTrigger; // 0xC1
		::System::Boolean SetupByMission; // 0xC2
		::System::Boolean _IsInTriggerRegion; // 0xC3
		::System::Boolean _IsTriggerUIShowing; // 0xC4
		::System::Boolean _DisableAfterTriggered_k__BackingField; // 0xC5
		::System::Boolean _DisableWhenTriggered_k__BackingField; // 0xC6
		::System::Byte _padding0[0x1];
		::System::Single _CD; // 0xC8
		::System::Single InteractAngleRange; // 0xCC
		static ::System::String** StaticGet_TriggerName()
		{
			return (::System::String**)UnitySDK::FromName("RPG.GameCore", "PropInteractionTrigger")->GetStaticField(0x69950);
		}

		::System::Void _ctor(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::TaskContext* a2, ::Il2CppArray<::RPG::GameCore::TaskConfig*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::TaskContext*, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_DISPOSE_OFFSET))(this);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_DOONTICK_OFFSET))(this, a1);
		}

		::System::Void OnTriggeredLogicFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_ONTRIGGEREDLOGICFINISH_OFFSET))(this);
		}

		::System::Void _EnableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__ENABLEUI_OFFSET))(this);
		}

		::System::Void _DisableUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__DISABLEUI_OFFSET))(this);
		}

		::System::Boolean _CheckRuntimeID(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__CHECKRUNTIMEID_OFFSET))(this, a1);
		}

		::System::Void _ResetCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__RESETCD_OFFSET))(this);
		}

		::System::Void _TriggerCallbackLogic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__TRIGGERCALLBACKLOGIC_OFFSET))(this);
		}

		::System::Void _OnTriggerUIConfirm(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__ONTRIGGERUICONFIRM_OFFSET))(this, a1);
		}

		::System::Void _TickHeightLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKHEIGHTLIMIT_OFFSET))(this);
		}

		::System::Void _TickAngleLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKANGLELIMIT_OFFSET))(this);
		}

		::System::Void _TickCD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__TICKCD_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIfInInteractionAngle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER__CHECKIFININTERACTIONANGLE_OFFSET))(this);
		}

		::System::Boolean get_DisableAfterTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_GET_DISABLEAFTERTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableAfterTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_SET_DISABLEAFTERTRIGGERED_OFFSET))(this, a1);
		}

		::System::Boolean get_DisableWhenTriggered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_GET_DISABLEWHENTRIGGERED_OFFSET))(this);
		}

		::System::Void set_DisableWhenTriggered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPINTERACTIONTRIGGER_SET_DISABLEWHENTRIGGERED_OFFSET))(this, a1);
		}

	};
}
