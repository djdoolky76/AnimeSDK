#pragma once
#include "unitysdk/unitysdk.h"
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

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_CLONE_OFFSET UNITYSDK_OFFSET(0x131E9BB0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x131E9B20)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6CB520)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x131E9CC0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x131E9CB0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6CB580)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x131E9D40)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6CBAA0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6CB3C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x131E8D60)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x131E8ED0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6CBC50)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1C6CBC60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementAutoParabola_TypeDefinitionIndex = 68800;

	class ConfigMovementAutoParabola : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x38
		::System::Single TargetRotLimitAngleRight; // 0x40
		::System::Int32 ExpectAngle; // 0x44
		::System::Single Accelerated; // 0x48
		::System::Single ExpectSpeed; // 0x4C
		::System::Single MaxAngle; // 0x50
		::System::Single TargetRotLimitAngleLeft; // 0x54
		::System::Single ExpectTime; // 0x58
		::System::Single MaxSpeed; // 0x5C
		::System::Single MinAngle; // 0x60
		::System::Single MinSpeed; // 0x64
		::System::Single DefaultRotAngle; // 0x68
		::UnityEngine::Vector3 DefaultOffset; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA__CTOR_OFFSET))(this);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementAutoParabola* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementAutoParabola*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementAutoParabola* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementAutoParabola*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTAUTOPARABOLA___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
