#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIDFAKPHJNJ.h"
#include "unitysdk/FEPDOHBACGO.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class GEIHCPAOKKK;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_BUILDAXES_OFFSET UNITYSDK_OFFSET(0x1BA32A00)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_CLONE_OFFSET UNITYSDK_OFFSET(0x1BA333D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA33340)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA34820)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA334E0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BA334D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA34880)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA33560)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA34D20)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA346C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1BA32C50)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_RESOLVETARGETPOS_OFFSET UNITYSDK_OFFSET(0x1BA32730)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1BA32210)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA321C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1BA34ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementCurveFollow_TypeDefinitionIndex = 45282;

	class ConfigMovementCurveFollow : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x38
		::UnityEngine::AnimationCurve* VelocityCurveZ; // 0x40
		::UnityEngine::AnimationCurve* VelocityCurveY; // 0x48
		::UnityEngine::AnimationCurve* VelocityCurveX; // 0x50
		::System::Single ScaleRatio; // 0x58
		::System::Boolean ReachTargetStop; // 0x5C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 DefaultOffset; // 0x60
		::FEPDOHBACGO UpAxisType; // 0x6C
		::AIDFAKPHJNJ TargetUpdateMode; // 0x70
		::UnityEngine::Vector3 Acceleration; // 0x74
		::UnityEngine::Vector3 InitVelocity; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::UnityEngine::Vector3 ResolveTargetPos(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_RESOLVETARGETPOS_OFFSET))(this, modelComponent, movementComponent, caster, other, instancedAbility);
		}

		::System::Void BuildAxes(::GEIHCPAOKKK* modelComponent, ::UnityEngine::Vector3 forward, ::UnityEngine::Vector3& up, ::UnityEngine::Vector3& right)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_BUILDAXES_OFFSET))(this, modelComponent, forward, up, right);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementCurveFollow* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementCurveFollow*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementCurveFollow* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementCurveFollow*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVEFOLLOW___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
