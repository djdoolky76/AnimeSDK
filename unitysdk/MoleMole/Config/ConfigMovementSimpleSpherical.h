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

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_CLONE_OFFSET UNITYSDK_OFFSET(0x16417960)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x164178D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16418450)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16417A70)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16417A60)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x164184B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16417AF0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16418980)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x164182F0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x164177C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x16417570)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16418B30)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x16418B40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementSimpleSpherical_TypeDefinitionIndex = 47071;

	class ConfigMovementSimpleSpherical : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::MoleMole::Config::ConfigPosRot* Coords; // 0x38
		::UnityEngine::Vector3 InitVelocity; // 0x40
		::System::Boolean KeepRelativePosition; // 0x4C
		::System::Boolean KeepCoordOnStart; // 0x4D
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 Acceleration; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL__CTOR_OFFSET))(this);
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementSimpleSpherical* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementSimpleSpherical*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementSimpleSpherical* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementSimpleSpherical*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLESPHERICAL___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
