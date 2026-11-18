#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIDFAKPHJNJ.h"
#include "unitysdk/EDEJEOBBPPF.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"
#include "unitysdk/PJGGDJJPPJP_ALLPGHPMHHC.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/LFGBJHCEJID.h"
#include "unitysdk/UnityEngine/Vector3.h"

class CMOJIMJLNFA;
class FKNIEPCILLG;
class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_CLONE_OFFSET UNITYSDK_OFFSET(0x11E9E560)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x11E9E4F0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E9FC80)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11E9E670)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x11E9E660)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x11E9C700)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONENTITY_OFFSET UNITYSDK_OFFSET(0x11E9D010)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONUP_OFFSET UNITYSDK_OFFSET(0x11E9C950)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_HANDLEFINALFORWARD_OFFSET UNITYSDK_OFFSET(0x11E9E250)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E9FCE0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x11E9E6F0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11EA02B0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x11E9FB90)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PROCESS_OFFSET UNITYSDK_OFFSET(0x11E9D210)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_RECORDPOSROTPARAM_OFFSET UNITYSDK_OFFSET(0x11E9C550)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_SETUP_OFFSET UNITYSDK_OFFSET(0x11E9C9F0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0x11E9C500)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x11EA0430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationToTarget_TypeDefinitionIndex = 84650;

	class ConfigRotationToTarget : public ::MoleMole::Config::ConfigRotation
	{
	public:
		::UnityEngine::AnimationCurve* TargetAngleCurve; // 0x28
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x30
		::CMOJIMJLNFA* SpeedRatioCurvebyDistance; // 0x38
		::UnityEngine::AnimationCurve* RotationCurve; // 0x40
		::EDEJEOBBPPF RotateType; // 0x48
		::System::Single RotateSpeed; // 0x4C
		::System::Single ScaleRatio; // 0x50
		::System::Boolean ReachLimitStop; // 0x54
		::System::Boolean ReachTargetStop; // 0x55
		::System::Boolean DisableTargetCacheForBullet; // 0x56
		::System::Boolean DirectlyApplyRotation; // 0x57
		::System::Single RotationAngleLimit; // 0x58
		::AIDFAKPHJNJ TargetUpdateMode; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET__CTOR_OFFSET))(this);
		}

		::System::Void RecordPosRotParam(::PJGGDJJPPJP* movementComponent, ::LFGBJHCEJID posRot)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::LFGBJHCEJID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_RECORDPOSROTPARAM_OFFSET))(this, movementComponent, posRot);
		}

		::UnityEngine::Vector3 GetRotationDir(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONDIR_OFFSET))(this, modelComponent, movementComponent);
		}

		::UnityEngine::Vector3 GetRotationUp(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONUP_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void Setup(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::PJGGDJJPPJP_ALLPGHPMHHC& rotateState, ::MoleMole::Battle::Entity* inputCaster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_SETUP_OFFSET))(this, movementComponent, other, rotateState, inputCaster, instancedAbility);
		}

		::System::Void Process(::GEIHCPAOKKK* characterModelComp, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PROCESS_OFFSET))(this, characterModelComp, movementComponent, deltaTime);
		}

		::UnityEngine::Vector3 HandleFinalForward(::UnityEngine::Vector3 forward, ::System::Boolean& reachLimitAngle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_HANDLEFINALFORWARD_OFFSET))(this, forward, reachLimitAngle);
		}

		::MoleMole::Battle::Entity* GetRotationEntity(::System::UInt32 entityId)
		{
			return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETROTATIONENTITY_OFFSET))(this, entityId);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotationToTarget* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotationToTarget*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotationToTarget* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotationToTarget*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_Setup(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::PJGGDJJPPJP_ALLPGHPMHHC& P2, ::MoleMole::Battle::Entity* P3, ::JCADHFOKIHK* P4)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOTARGET___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
