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

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_CLONE_OFFSET UNITYSDK_OFFSET(0x1BA362D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA36240)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA37960)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA363E0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BA363D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA379C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA36460)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA37EA0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA37800)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1BA34FE0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1BA35320)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA34FC0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1BA38050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementParabola_TypeDefinitionIndex = 52005;

	class ConfigMovementParabola : public ::MoleMole::Config::ConfigMovement
	{
	public:
		// static const ::System::String* CACHED_G; // 0x0
		::MoleMole::Config::ConfigPosRot* TargetPosRot; // 0x38
		::UnityEngine::Vector3 DefaultOffset; // 0x40
		::System::Single InitSpeed; // 0x4C
		::System::Single t2; // 0x50
		::System::Single DefaultRotAngle; // 0x54
		::System::Single t1; // 0x58
		::System::Single TargetRotLimitAngleRight; // 0x5C
		::System::Single TargetRotLimitAngleLeft; // 0x60
		::System::Single h1; // 0x64
		::System::Single s1; // 0x68
		::System::Single s2; // 0x6C
		::System::Single h2; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA__CTOR_OFFSET))(this);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementParabola* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementParabola*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementParabola* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementParabola*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTPARABOLA___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
