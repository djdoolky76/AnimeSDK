#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ECurveMoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace RPG::Client { class CurveEdgeConnectionTriggerSetting; }
namespace RPG::Client { class CurveEdgePointTriggerSetting; }
namespace RPG::Client { class CurveMovementHandler; }
namespace RPG::Client { class CurveObjectLogicTriggerSetting; }
namespace RPG::Client { class MonoCurveAudioManager; }
namespace RPG::Client { class MonoCurveMovementManager; }
namespace RPG::Client { class MonoCurveUndirectedGraph; }
namespace RPG::Client { class MonoTriggerRegion; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_AWAKE_OFFSET UNITYSDK_OFFSET(0xD745610)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_BIIPBCKIHKK_OFFSET UNITYSDK_OFFSET(0xD7452E0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_CMLBMBIDLOO_OFFSET UNITYSDK_OFFSET(0xD744AF0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0xD7458D0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD742550)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_FKINABCACNK_OFFSET UNITYSDK_OFFSET(0xD743FB0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0xD740340)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_GET_ENTITYREF_OFFSET UNITYSDK_OFFSET(0xD7458B0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_INITENTITY_OFFSET UNITYSDK_OFFSET(0xD745470)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_ISALLOWSHOWTRIGGEROPTIONS_OFFSET UNITYSDK_OFFSET(0xD744190)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_OJBDPIPJFKO_OFFSET UNITYSDK_OFFSET(0xD745000)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_OKLOJONFNFH_OFFSET UNITYSDK_OFFSET(0xD744F50)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_ONMOVABLEOBJECTMOVEENDED_OFFSET UNITYSDK_OFFSET(0xD73FD10)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_OONBKOIBLNG_OFFSET UNITYSDK_OFFSET(0xD744430)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_PIDDNNGELBH_OFFSET UNITYSDK_OFFSET(0xD743D50)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPCURVEEDGECONNECTIONTRIGGER_OFFSET UNITYSDK_OFFSET(0xD742AC0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPMOVABLEOBJECTLOGICTRIGGER_OFFSET UNITYSDK_OFFSET(0xD743A30)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPMOVABLEOBJECTTRIGGER_OFFSET UNITYSDK_OFFSET(0xD73F850)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_SET_ENTITYREF_OFFSET UNITYSDK_OFFSET(0xD7458C0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_START_OFFSET UNITYSDK_OFFSET(0xD745820)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERDETECTCOLLIDEREVENT_OFFSET UNITYSDK_OFFSET(0xD73DC60)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERRELOADCURVEMOVEMENTEVENT_OFFSET UNITYSDK_OFFSET(0xD73FE40)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERTOUCHMOVABLEOBJECT_OFFSET UNITYSDK_OFFSET(0xD73D850)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATELOGICTRIGGERSTATE_OFFSET UNITYSDK_OFFSET(0xD7449E0)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATELOGICTRIGGER_OFFSET UNITYSDK_OFFSET(0xD744310)
#define RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xD744B40)

namespace RPG::Client
{
	class MonoCurveTriggerManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single OptionProtectTime; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* LevelGraphConfigPath; // 0x20
		::System::String* DetectColliderCustomString; // 0x28
		::System::String* DetectPlayerColliderCustomString; // 0x30
		::System::String* DetectColliderBeforeInteractiveCustomString; // 0x38
		::System::String* ReloadCurveMovementCustomString; // 0x40
		::System::Boolean EnableCurveEdgePointTrigger; // 0x48
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::Client::CurveEdgePointTriggerSetting*>* CurveEdgePointSettings; // 0x50
		::System::Boolean EnableCurveConnectionTrigger; // 0x58
		::System::Byte _padding2[0x7];
		::Il2CppArray<::RPG::Client::CurveEdgeConnectionTriggerSetting*>* CurveConnectionTriggerSettings; // 0x60
		::System::Boolean EnableMovableObjectLogicTrigger; // 0x68
		::System::Byte _padding3[0x7];
		::Il2CppArray<::RPG::Client::CurveObjectLogicTriggerSetting*>* MovableObjectStateLogicTriggerSettings; // 0x70
		::RPG::GameCore::GameEntity* _EntityRef_k__BackingField; // 0x78
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* CJBGJHKKCOI; // 0x80
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* EFMMBEKAEHM; // 0x88
		::System::Boolean DDJGNDMDMMO; // 0x90
		::System::Byte _padding4[0x7];
		::RPG::Client::MonoCurveUndirectedGraph* AKBJLEAGNNB; // 0x98
		::RPG::Client::MonoCurveMovementManager* OBBFGKHHKDK; // 0xA0
		::RPG::Client::MonoCurveAudioManager* CFCNNLBCCEE; // 0xA8
		::System::Collections::Generic::List_1<::RPG::Client::MonoTriggerRegion*>* LPNBNHPKOMH; // 0xB0
		::System::Single OOKLOLAJHEO; // 0xB8
		// static const ::System::Object ConnectionPropID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void TriggerDetectColliderEvent(::RPG::Client::CurveMovementHandler* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERDETECTCOLLIDEREVENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void TriggerReloadCurveMovementEvent(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERRELOADCURVEMOVEMENTEVENT_OFFSET))(this, a1);
		}

		::System::Void SetupCurveEdgeConnectionTrigger(::RPG::Client::CurveEdgeConnectionTriggerSetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveEdgeConnectionTriggerSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPCURVEEDGECONNECTIONTRIGGER_OFFSET))(this, a1);
		}

		::System::Void SetupMovableObjectLogicTrigger(::RPG::Client::CurveObjectLogicTriggerSetting* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveObjectLogicTriggerSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPMOVABLEOBJECTLOGICTRIGGER_OFFSET))(this, a1);
		}

		::System::Void SetupMovableObjectTrigger(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_SETUPMOVABLEOBJECTTRIGGER_OFFSET))(this, a1);
		}

		::System::Boolean IsAllowShowTriggerOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_ISALLOWSHOWTRIGGEROPTIONS_OFFSET))(this);
		}

		::System::Void UpdateLogicTrigger(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATELOGICTRIGGER_OFFSET))(this, a1);
		}

		::System::Void UpdateLogicTriggerState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATELOGICTRIGGERSTATE_OFFSET))(this);
		}

		::System::Void TriggerTouchMovableObject(::RPG::Client::CurveMovementHandler* a1, ::RPG::Client::ECurveMoveDirection a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_TRIGGERTOUCHMOVABLEOBJECT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MonoTriggerRegion* FKINABCACNK(::UnityEngine::Collider* a1)
		{
			return ((::RPG::Client::MonoTriggerRegion*(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_FKINABCACNK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* PIDDNNGELBH()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_PIDDNNGELBH_OFFSET))(this);
		}

		::System::Void OONBKOIBLNG(::RPG::Client::CurveMovementHandler* a1, ::RPG::Client::CurveObjectLogicTriggerSetting* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::RPG::Client::CurveObjectLogicTriggerSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_OONBKOIBLNG_OFFSET))(this, a1, a2);
		}

		::System::Void CMLBMBIDLOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_CMLBMBIDLOO_OFFSET))(this);
		}

		::System::Void OKLOJONFNFH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_OKLOJONFNFH_OFFSET))(this, a1);
		}

		::System::Void OJBDPIPJFKO(::RPG::GameCore::GameEntity* a1, ::RPG::Client::CurveEdgeConnectionTriggerSetting* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::Client::CurveEdgeConnectionTriggerSetting*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_OJBDPIPJFKO_OFFSET))(this, a1, a2);
		}

		::System::Void BIIPBCKIHKK(::RPG::Client::CurveMovementHandler* a1, ::RPG::Client::ECurveMoveDirection a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_BIIPBCKIHKK_OFFSET))(this, a1, a2);
		}

		::System::Void OnMovableObjectMoveEnded(::RPG::Client::CurveMovementHandler* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveMovementHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_ONMOVABLEOBJECTMOVEENDED_OFFSET))(this, a1);
		}

		::System::Void InitEntity(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_INITENTITY_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_UPDATE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* get_EntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_GET_ENTITYREF_OFFSET))(this);
		}

		::System::Void set_EntityRef(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_SET_ENTITYREF_OFFSET))(this, a1);
		}

		::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOCURVETRIGGERMANAGER_GET_DELTATIME_OFFSET))(this);
		}

	};
}
