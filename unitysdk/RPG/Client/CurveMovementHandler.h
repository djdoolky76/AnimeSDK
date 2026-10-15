#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CurveEdgePoint.h"
#include "unitysdk/RPG/Client/ECurveEdgePoint.h"
#include "unitysdk/RPG/Client/ECurveMoveDirection.h"
#include "unitysdk/RPG/Client/ECurveMovementBlockReason.h"
#include "unitysdk/RPG/GameCore/ECurveObjectLogicState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/CurveEdgePointSetting.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class CurveMovementHandler; }
namespace RPG::Client { class CurveUndirectedEdge; }
namespace RPG::Client { class MonoCurveMovablePlayerTriggerRegion; }
namespace RPG::Client { class MonoCurveMovableTriggerRegion; }
namespace RPG::Client { class MonoCurveMovementManager; }
namespace RPG::Client { class MonoCurveMovementObject; }
namespace RPG::Client { class MonoCurveUndirectedGraph; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CURVEMOVEMENTHANDLER_AOFBAOAHNJO_OFFSET UNITYSDK_OFFSET(0xCBDBC80)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_CLIHPCBPJCJ_OFFSET UNITYSDK_OFFSET(0xCBDBD20)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0xCBDC190)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_DAFJBLOGBFH_OFFSET UNITYSDK_OFFSET(0xCBD92B0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_DBCHOEEAGIH_OFFSET UNITYSDK_OFFSET(0xCBDB080)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_DDNHPLDMKJN_OFFSET UNITYSDK_OFFSET(0xCBDA760)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_DGDMEFEIHJH_OFFSET UNITYSDK_OFFSET(0xCBD9950)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCBDC5D0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_EBIIHOEPEAA_OFFSET UNITYSDK_OFFSET(0xCBDA0D0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_EBLMEKGAKAD_OFFSET UNITYSDK_OFFSET(0xCBD98D0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ENTITYREF_OFFSET UNITYSDK_OFFSET(0xCBDBF10)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_FROMPOINT_OFFSET UNITYSDK_OFFSET(0xCBDBFC0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_GRAPH_OFFSET UNITYSDK_OFFSET(0xCBDBED0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISARRIVED_OFFSET UNITYSDK_OFFSET(0xCBDBF90)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISBLOCKED_OFFSET UNITYSDK_OFFSET(0xCBDBF20)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISMOVING_OFFSET UNITYSDK_OFFSET(0xCBDBF80)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISTRANSITION_OFFSET UNITYSDK_OFFSET(0xCBD7DD0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_LOCSTATUS_OFFSET UNITYSDK_OFFSET(0xCBDBFF0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MANAGER_OFFSET UNITYSDK_OFFSET(0xCBDBEB0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MOVABLEOBJECT_OFFSET UNITYSDK_OFFSET(0xCBDBEF0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MOVEDIRECTION_OFFSET UNITYSDK_OFFSET(0xCBDBFE0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_PERCENT_OFFSET UNITYSDK_OFFSET(0xCBDBFB0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xCBDBFA0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_TOPOINT_OFFSET UNITYSDK_OFFSET(0xCBDBFD0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCBD9A00)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCBD7E80)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_LEFIINAHKPK_OFFSET UNITYSDK_OFFSET(0xCBD8460)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0xCBD9750)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_MJLNIAKBHOA_1_OFFSET UNITYSDK_OFFSET(0xCBD83C0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_MJLNIAKBHOA_OFFSET UNITYSDK_OFFSET(0xCBD94A0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_MKHBFHBPFPE_OFFSET UNITYSDK_OFFSET(0xCBD7B10)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_MMKEDDICDHK_OFFSET UNITYSDK_OFFSET(0xCBD7A50)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_MOONJAJDCJN_OFFSET UNITYSDK_OFFSET(0xCBDC830)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_NDONIKODAJD_OFFSET UNITYSDK_OFFSET(0xCBD9E20)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_NLIFCHJNGGK_OFFSET UNITYSDK_OFFSET(0xCBDC9A0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_PKKDPNDKOPL_OFFSET UNITYSDK_OFFSET(0xCBD9D20)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_PKMMIBCCKOI_OFFSET UNITYSDK_OFFSET(0xCBD8EE0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_GRAPH_OFFSET UNITYSDK_OFFSET(0xCBDBEE0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_MANAGER_OFFSET UNITYSDK_OFFSET(0xCBDBEC0)
#define RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_MOVABLEOBJECT_OFFSET UNITYSDK_OFFSET(0xCBDBF00)

namespace RPG::Client
{
	inline static constexpr unsigned int CurveMovementHandler_TypeDefinitionIndex = 68545;

	class CurveMovementHandler : public ::System::Object
	{
	public:
		::RPG::Client::MonoCurveMovementManager* _Manager_k__BackingField; // 0x10
		::RPG::Client::MonoCurveUndirectedGraph* _Graph_k__BackingField; // 0x18
		::RPG::Client::MonoCurveMovementObject* _MovableObject_k__BackingField; // 0x20
		::System::Single _testMoveDistance; // 0x28
		::System::Single _percent; // 0x2C
		::RPG::Client::CurveEdgePoint _fromPoint; // 0x30
		::RPG::Client::CurveEdgePoint _toPoint; // 0x40
		::System::Boolean _isMoving; // 0x50
		::System::Boolean _isStarted; // 0x51
		::System::Boolean _isArrived; // 0x52
		::System::Byte _padding0[0x1];
		::System::Single _speed; // 0x54
		::System::Single _totalMoveDistance; // 0x58
		::RPG::Client::ECurveMoveDirection _direction; // 0x5C
		::System::Action_1<::RPG::Client::CurveMovementHandler*>* _onEnd; // 0x60
		::System::Action_1<::RPG::Client::CurveMovementHandler*>* _onStop; // 0x68
		::RPG::GameCore::GameEntity* _entity; // 0x70
		::RPG::Client::MonoCurveMovementManager* _movementManager; // 0x78
		::RPG::Client::MonoCurveMovableTriggerRegion* _curveMovableTriggerRegion; // 0x80
		::System::Boolean _isPlayerTriggerAllowMove; // 0x88
		::System::Byte _padding1[0x7];
		::RPG::Client::MonoCurveMovablePlayerTriggerRegion* _curveMovableAllowTriggerRegion; // 0x90
		::RPG::Client::MonoCurveMovablePlayerTriggerRegion* _curveMovableDisallowTriggerRegion; // 0x98
		::RPG::Client::ECurveMovementBlockReason _blockReason; // 0xA0
		::System::Boolean _isIdle; // 0xA4
		::System::Void _ctor(::RPG::Client::MonoCurveMovementManager* a1, ::RPG::Client::MonoCurveUndirectedGraph* a2, ::RPG::Client::MonoCurveMovementObject* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveMovementManager*, ::RPG::Client::MonoCurveUndirectedGraph*, ::RPG::Client::MonoCurveMovementObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean MMKEDDICDHK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_MMKEDDICDHK_OFFSET))(this);
		}

		::System::Boolean MKHBFHBPFPE(::System::String* a1, ::RPG::Client::ECurveEdgePoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::Client::ECurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_MKHBFHBPFPE_OFFSET))(this, a1, a2);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::MonoCurveMovementManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveMovementManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void MJLNIAKBHOA(::RPG::Client::CurveEdgePointSetting a1, ::RPG::Client::CurveEdgePointSetting a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveEdgePointSetting, ::RPG::Client::CurveEdgePointSetting, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_MJLNIAKBHOA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LPFBANCOMPE(::RPG::Client::ECurveMoveDirection a1, ::System::Action_1<::RPG::Client::CurveMovementHandler*>* a2, ::System::Action_1<::RPG::Client::CurveMovementHandler*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ECurveMoveDirection, ::System::Action_1<::RPG::Client::CurveMovementHandler*>*, ::System::Action_1<::RPG::Client::CurveMovementHandler*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_LPFBANCOMPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EBLMEKGAKAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_EBLMEKGAKAD_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void EBIIHOEPEAA(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_EBIIHOEPEAA_OFFSET))(this, a1, a2);
		}

		::System::Void PKKDPNDKOPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_PKKDPNDKOPL_OFFSET))(this);
		}

		::System::Single DGDMEFEIHJH(::RPG::Client::ECurveMoveDirection a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_DGDMEFEIHJH_OFFSET))(this, a1);
		}

		::System::Boolean DDNHPLDMKJN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_DDNHPLDMKJN_OFFSET))(this, a1, a2);
		}

		::RPG::Client::CurveEdgePoint DBCHOEEAGIH(::RPG::Client::ECurveMoveDirection a1)
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID, ::RPG::Client::ECurveMoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_DBCHOEEAGIH_OFFSET))(this, a1);
		}

		::System::Boolean LEFIINAHKPK(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_LEFIINAHKPK_OFFSET))(this, a1);
		}

		::System::Void AOFBAOAHNJO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_AOFBAOAHNJO_OFFSET))(this, a1);
		}

		::System::Void NDONIKODAJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_NDONIKODAJD_OFFSET))(this);
		}

		::System::Void MJLNIAKBHOA_1(::RPG::Client::CurveUndirectedEdge* a1, ::RPG::Client::ECurveEdgePoint a2, ::RPG::Client::CurveUndirectedEdge* a3, ::RPG::Client::ECurveEdgePoint a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CurveUndirectedEdge*, ::RPG::Client::ECurveEdgePoint, ::RPG::Client::CurveUndirectedEdge*, ::RPG::Client::ECurveEdgePoint, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_MJLNIAKBHOA_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PKMMIBCCKOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_PKMMIBCCKOI_OFFSET))(this);
		}

		::System::Boolean DAFJBLOGBFH(::RPG::Client::CurveEdgePointSetting a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveEdgePointSetting))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_DAFJBLOGBFH_OFFSET))(this, a1);
		}

		::System::Boolean CLIHPCBPJCJ(::RPG::Client::CurveEdgePoint a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CurveEdgePoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_CLIHPCBPJCJ_OFFSET))(this, a1);
		}

		::RPG::Client::MonoCurveMovementManager* get_Manager()
		{
			return ((::RPG::Client::MonoCurveMovementManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MANAGER_OFFSET))(this);
		}

		::System::Void set_Manager(::RPG::Client::MonoCurveMovementManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveMovementManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_MANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::MonoCurveUndirectedGraph* get_Graph()
		{
			return ((::RPG::Client::MonoCurveUndirectedGraph*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_GRAPH_OFFSET))(this);
		}

		::System::Void set_Graph(::RPG::Client::MonoCurveUndirectedGraph* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveUndirectedGraph*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_GRAPH_OFFSET))(this, a1);
		}

		::RPG::Client::MonoCurveMovementObject* get_MovableObject()
		{
			return ((::RPG::Client::MonoCurveMovementObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MOVABLEOBJECT_OFFSET))(this);
		}

		::System::Void set_MovableObject(::RPG::Client::MonoCurveMovementObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoCurveMovementObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_SET_MOVABLEOBJECT_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_EntityRef()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ENTITYREF_OFFSET))(this);
		}

		::System::Boolean get_IsBlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISBLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISMOVING_OFFSET))(this);
		}

		::System::Boolean get_IsArrived()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISARRIVED_OFFSET))(this);
		}

		::System::Boolean get_IsTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_ISTRANSITION_OFFSET))(this);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_SPEED_OFFSET))(this);
		}

		::System::Single get_Percent()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_PERCENT_OFFSET))(this);
		}

		::RPG::Client::CurveEdgePoint get_FromPoint()
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_FROMPOINT_OFFSET))(this);
		}

		::RPG::Client::CurveEdgePoint get_ToPoint()
		{
			return ((::RPG::Client::CurveEdgePoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_TOPOINT_OFFSET))(this);
		}

		::RPG::Client::ECurveMoveDirection get_MoveDirection()
		{
			return ((::RPG::Client::ECurveMoveDirection(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_MOVEDIRECTION_OFFSET))(this);
		}

		::System::Int32 get_LocStatus()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_GET_LOCSTATUS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_DISPOSE_OFFSET))(this);
		}

		::System::Void MOONJAJDCJN(::RPG::GameCore::ECurveObjectLogicState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ECurveObjectLogicState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_MOONJAJDCJN_OFFSET))(this, a1);
		}

		::System::Boolean NLIFCHJNGGK(::RPG::GameCore::ECurveObjectLogicState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ECurveObjectLogicState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CURVEMOVEMENTHANDLER_NLIFCHJNGGK_OFFSET))(this, a1);
		}

	};
}
