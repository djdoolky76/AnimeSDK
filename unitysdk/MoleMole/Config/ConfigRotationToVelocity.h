#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIDFAKPHJNJ.h"
#include "unitysdk/EDEJEOBBPPF.h"
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

#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_CLONE_OFFSET UNITYSDK_OFFSET(0x192A8B60)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192A8B50)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192A9B70)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192A8C70)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192A8C60)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_GETROTATIONDIR_OFFSET UNITYSDK_OFFSET(0x192A7FC0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_HANDLEFINALFORWARD_OFFSET UNITYSDK_OFFSET(0x192A88B0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192A9BD0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192A8CF0)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192A9F80)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192A9A10)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PROCESS_OFFSET UNITYSDK_OFFSET(0x192A8150)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_SETUP_OFFSET UNITYSDK_OFFSET(0x192A8040)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY__CTOR_OFFSET UNITYSDK_OFFSET(0x192A7F70)
#define MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY___BASE_SETUP_OFFSET UNITYSDK_OFFSET(0x192AA130)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigRotationToVelocity_TypeDefinitionIndex = 44431;

	class ConfigRotationToVelocity : public ::MoleMole::Config::ConfigRotation
	{
	public:
		::UnityEngine::AnimationCurve* RotationCurve; // 0x28
		::UnityEngine::AnimationCurve* TargetAngleCurve; // 0x30
		::System::Single RotateSpeed; // 0x38
		::EDEJEOBBPPF RotateType; // 0x3C
		::System::Single ScaleRatio; // 0x40
		::System::Boolean ReachLimitStop; // 0x44
		::System::Boolean ReachTargetStop; // 0x45
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 TargetDir; // 0x48
		::System::Single RotationAngleLimit; // 0x54
		::AIDFAKPHJNJ TargetUpdateMode; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRotationDir(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_GETROTATIONDIR_OFFSET))(this, modelComponent, movementComponent);
		}

		::System::Void Setup(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::PJGGDJJPPJP_ALLPGHPMHHC& rotateState, ::MoleMole::Battle::Entity* inputCaster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_SETUP_OFFSET))(this, movementComponent, other, rotateState, inputCaster, instancedAbility);
		}

		::System::Void Process(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PROCESS_OFFSET))(this, modelComponent, movementComponent, deltaTime);
		}

		::UnityEngine::Vector3 HandleFinalForward(::UnityEngine::Vector3 forward, ::System::Boolean& reachLimitAngle)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_HANDLEFINALFORWARD_OFFSET))(this, forward, reachLimitAngle);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigRotation* Clone()
		{
			return ((::MoleMole::Config::ConfigRotation*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigRotationToVelocity* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigRotationToVelocity*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigRotationToVelocity* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigRotationToVelocity*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_Setup(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::PJGGDJJPPJP_ALLPGHPMHHC& P2, ::MoleMole::Battle::Entity* P3, ::JCADHFOKIHK* P4)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::PJGGDJJPPJP_ALLPGHPMHHC&, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGROTATIONTOVELOCITY___BASE_SETUP_OFFSET))(this, P0, P1, P2, P3, P4);
		}
	};
}
