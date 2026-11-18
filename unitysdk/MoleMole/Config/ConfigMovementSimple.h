#pragma once
#include "unitysdk/unitysdk.h"
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
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_CLONE_OFFSET UNITYSDK_OFFSET(0x190A3920)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x190A38D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A40A0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x190A3A30)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x190A3A20)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A4100)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x190A3AB0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A4330)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x190A3F40)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x190A3090)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x190A3500)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x190A3050)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x190A44E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementSimple_TypeDefinitionIndex = 54723;

	class ConfigMovementSimple : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::UnityEngine::Vector3 Acceleration; // 0x38
		::FEPDOHBACGO CoordinateType; // 0x44
		::UnityEngine::Vector3 InitVelocity; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE__CTOR_OFFSET))(this);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementSimple* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementSimple*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementSimple* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementSimple*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLE___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
