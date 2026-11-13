#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class BACCOPOCMPC;
class DEEGAJPPPBG;
class EFHJJIGLPDL;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class ColliderTriggerComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }

#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x192762C0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19276320)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_CONTROLENTITY_OFFSET UNITYSDK_OFFSET(0x19276ED0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_PLAYERSTUB_OFFSET UNITYSDK_OFFSET(0x19276EC0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x19276930)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_RELEASECONTROL_OFFSET UNITYSDK_OFFSET(0x19276580)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_SETPLAYERSTUB_OFFSET UNITYSDK_OFFSET(0x19276CB0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0x192763C0)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__DELAYCANCELCONTROL_OFFSET UNITYSDK_OFFSET(0x19276E30)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__INHERITCONTROLENTITYMODIFIERS_OFFSET UNITYSDK_OFFSET(0x19276790)
#define RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__ONREMOTECONTROLRELEASE_OFFSET UNITYSDK_OFFSET(0x19276D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRemoteControllerComponent_TypeDefinitionIndex = 58888;

	class PlayerRemoteControllerComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::GameEntity* _PlayerStub; // 0x18
		::BACCOPOCMPC* _AdvCharAICmpt; // 0x20
		::RPG::GameCore::LevelGraphComponent* _LevelGraphCmpt; // 0x28
		::RPG::GameCore::TransformComponent* _TargetTransformCmpt; // 0x30
		::RPG::GameCore::TransformComponent* _SelfTransformCmpt; // 0x38
		::RPG::GameCore::GameEntity* _ControlEntity; // 0x40
		::RPG::GameCore::CharacterVisibleComponent* _VisibleCmpt; // 0x48
		::RPG::GameCore::NPCComponent* _NPCCmpt; // 0x50
		::RPG::GameCore::ColliderTriggerComponent* _TriggerCmpt; // 0x58
		::DEEGAJPPPBG* _CharVisionCmpt; // 0x60
		::RPG::GameCore::AdventureCharacterController* _AdvCharCtrlCmpt; // 0x68
		::EFHJJIGLPDL* _TargetingCmpt; // 0x70
		::System::Boolean SupportRush; // 0x78
		::System::Boolean CanUseSameMapTeleport; // 0x79
		::System::Boolean SyncPlayerPositionToServer; // 0x7A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_TICK_OFFSET))(this, a1);
		}

		::System::Void ReleaseControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_RELEASECONTROL_OFFSET))(this);
		}

		::System::Void _InheritControlEntityModifiers(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__INHERITCONTROLENTITYMODIFIERS_OFFSET))(this, a1);
		}

		::System::Void InitComponent(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_INITCOMPONENT_OFFSET))(this, a1);
		}

		::System::Void SetPlayerStub(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_SETPLAYERSTUB_OFFSET))(this, a1);
		}

		::System::Void _OnRemoteControlRelease(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__ONREMOTECONTROLRELEASE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* _DelayCancelControl()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT__DELAYCANCELCONTROL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_PlayerStub()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_PLAYERSTUB_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_ControlEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERREMOTECONTROLLERCOMPONENT_GET_CONTROLENTITY_OFFSET))(this);
		}

	};
}
