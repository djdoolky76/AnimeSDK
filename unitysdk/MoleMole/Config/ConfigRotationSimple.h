#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEPDOHBACGO.h"
#include "unitysdk/MoleMole/Config/ConfigRotation.h"
#include "unitysdk/PJGGDJJPPJP_ALLPGHPMHHC.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6D5660)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6D5650)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6D68A0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6D5770)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C6D5760)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6D6900)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6D57F0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6D6D30)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6D6740)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PROCESS_OFFSET UNITYSDK_OFFSET(0x1C6D4DC0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_SETUP_OFFSET UNITYSDK_OFFSET(0x1C6D4D30)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D4CD0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x1C6D6EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationSimple_TypeDefinitionIndex = 39027;

	class ConfigRotationSimple : public ::MoleMole::Config::ConfigRotation
	{
	public:
		::UnityEngine::AnimationCurve* AngleAccelerationCurveY; // 0x28
		::UnityEngine::AnimationCurve* InitAngleVelocityCurveY; // 0x30
		::UnityEngine::AnimationCurve* AngleAccelerationCurveZ; // 0x38
		::UnityEngine::AnimationCurve* InitAngleVelocityCurveZ; // 0x40
		::UnityEngine::AnimationCurve* AngleAccelerationCurveX; // 0x48
		::UnityEngine::AnimationCurve* InitAngleVelocityCurveX; // 0x50
		::System::Boolean UseCurve; // 0x58
		::System::Byte _padding0[0x3];
		::FEPDOHBACGO CoordinateType; // 0x5C
		::System::Single ScaleRatio; // 0x60
		::UnityEngine::Vector3 InitAngleVelocity; // 0x64
		::UnityEngine::Vector3 AngleAcceleration; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE__CTOR_OFFSET))(this);
		}

		::System::Void Setup(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::PJGGDJJPPJP_ALLPGHPMHHC& rotateState, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_SETUP_OFFSET))(this, movementComponent, other, rotateState, caster, instancedAbility);
		}

		::System::Void Process(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PROCESS_OFFSET))(this, modelComponent, movementComponent, deltaTime);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotationSimple* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotationSimple*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotationSimple* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotationSimple*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_Setup(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::PJGGDJJPPJP_ALLPGHPMHHC& P2, ::MoleMole::Battle::Entity* P3, ::JCADHFOKIHK* P4)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONSIMPLE___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
