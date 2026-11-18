#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIDFAKPHJNJ.h"
#include "unitysdk/EBGABOFHFHL.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class AJKECBJFMFI;
class FKNIEPCILLG;
class GEIHCPAOKKK;
class JCADHFOKIHK;
class KNGHPBLDEIG;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_CHECKOVERLAP_OFFSET UNITYSDK_OFFSET(0x121C6740)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x121C77D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FINDSUITABLEPOSANDAPPLYINSTANTMOVE_OFFSET UNITYSDK_OFFSET(0x121C5750)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FINDSUITABLEPOSONARRIVAL_OFFSET UNITYSDK_OFFSET(0x121C5BD0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x121C7730)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x121C83B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x121C78E0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETCORRECTIONENTITY_OFFSET UNITYSDK_OFFSET(0x121C52F0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETGROUNDPOS_OFFSET UNITYSDK_OFFSET(0x121C5600)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x121C78D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETHULLCOLLIDERRADIUS_OFFSET UNITYSDK_OFFSET(0x121C70F0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INITMODELCOLLIDERPARAM_OFFSET UNITYSDK_OFFSET(0x121C6D50)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x121C8410)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x121C7960)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x121C8870)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x121C8250)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x121C40C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_SELECTSUITABLEPOSBYCIRCLEMETHOD_OFFSET UNITYSDK_OFFSET(0x121C7290)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x121C69B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x121C4010)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x121C8A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementTarget_TypeDefinitionIndex = 76638;

	class ConfigMovementTarget : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x38
		::AJKECBJFMFI* MoveType; // 0x40
		::Il2CppArray<::UnityEngine::Vector3>* navMeshPathCorners; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* path; // 0x50
		::UnityEngine::AI::NavMeshPath* navPath; // 0x58
		::System::Single modelHeight; // 0x60
		::AIDFAKPHJNJ TargetUpdateMode; // 0x64
		::UnityEngine::RaycastHit hitInfo; // 0x68
		::UnityEngine::Vector3 DefaultOffset; // 0x9C
		::EBGABOFHFHL colliderType; // 0xA8
		::System::Boolean IsReached; // 0xAC
		::System::Boolean isCapsule; // 0xAD
		::System::Boolean ReachTargetStop; // 0xAE
		::System::Byte _padding0[0x1];
		::System::Single colliderRadius; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET__CTOR_OFFSET))(this);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void InitModelColliderParam(::GEIHCPAOKKK* modelComponent)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INITMODELCOLLIDERPARAM_OFFSET))(this, modelComponent);
		}

		::System::Void FindSuitablePosOnArrival(::PJGGDJJPPJP* movementComponent, ::GEIHCPAOKKK* modelComponent)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FINDSUITABLEPOSONARRIVAL_OFFSET))(this, movementComponent, modelComponent);
		}

		::System::Single GetHullColliderRadius(::GEIHCPAOKKK* modelComponent)
		{
			return ((::System::Single(*)(::PVOID, ::GEIHCPAOKKK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETHULLCOLLIDERRADIUS_OFFSET))(this, modelComponent);
		}

		::System::Boolean CheckOverlap(::PJGGDJJPPJP* movementComponent, ::GEIHCPAOKKK* modelComponent, ::UnityEngine::Vector3 targetPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJGGDJJPPJP*, ::GEIHCPAOKKK*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_CHECKOVERLAP_OFFSET))(this, movementComponent, modelComponent, targetPos);
		}

		::System::Void FindSuitablePosAndApplyInstantMove(::PJGGDJJPPJP* movementComponent, ::KNGHPBLDEIG* instanceConfig, ::GEIHCPAOKKK* modelComponent, ::System::Boolean teleport)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::KNGHPBLDEIG*, ::GEIHCPAOKKK*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FINDSUITABLEPOSANDAPPLYINSTANTMOVE_OFFSET))(this, movementComponent, instanceConfig, modelComponent, teleport);
		}

		::System::Boolean SelectSuitablePosByCircleMethod(::MoleMole::Battle::Entity* self, ::PJGGDJJPPJP* moveComponent, ::KNGHPBLDEIG* instantConfig, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 targetPos, ::System::Int32 overlapLayerMask, ::UnityEngine::Vector3& findPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP*, ::KNGHPBLDEIG*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_SELECTSUITABLEPOSBYCIRCLEMETHOD_OFFSET))(this, self, moveComponent, instantConfig, startPos, targetPos, overlapLayerMask, findPos);
		}

		::MoleMole::Battle::Entity* GetCorrectionEntity(::KNGHPBLDEIG* instanceConfig, ::PJGGDJJPPJP* movementComponent)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::KNGHPBLDEIG*, ::PJGGDJJPPJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETCORRECTIONENTITY_OFFSET))(this, instanceConfig, movementComponent);
		}

		::UnityEngine::Vector3 GetGroundPos(::UnityEngine::Vector3 originPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETGROUNDPOS_OFFSET))(this, originPos);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementTarget* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementTarget*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementTarget* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementTarget*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTTARGET___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
