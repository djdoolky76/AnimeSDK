#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIDFAKPHJNJ.h"
#include "unitysdk/FEPDOHBACGO.h"
#include "unitysdk/MoleMole/Config/ConfigMovement.h"
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

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_CLONE_OFFSET UNITYSDK_OFFSET(0x1B926080)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B925FF0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B926F70)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B926190)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B926180)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B926FD0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B926210)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B927400)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B926E10)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1B9258C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1B9251C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B925190)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1B9275B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementCurve_TypeDefinitionIndex = 92108;

	class ConfigMovementCurve : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::MoleMole::Config::ConfigPosRot* CoordinatePosRot; // 0x38
		::UnityEngine::AnimationCurve* VelocityCurveZ; // 0x40
		::UnityEngine::AnimationCurve* VelocityCurveY; // 0x48
		::UnityEngine::AnimationCurve* VelocityCurveX; // 0x50
		::AIDFAKPHJNJ DirectionUpdateMode; // 0x58
		::System::Single ScaleRatio; // 0x5C
		::FEPDOHBACGO CoordinateType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE__CTOR_OFFSET))(this);
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementCurve* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementCurve*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementCurve* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementCurve*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTCURVE___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
