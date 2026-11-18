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

#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1B927A70)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B9279E0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B928560)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B927B80)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B927B70)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9285C0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B927C00)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B928A90)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B928400)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_PROCESSRIGIDBODY_OFFSET UNITYSDK_OFFSET(0x1B9278D0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1B9276A0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B928C40)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL___BASE_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1B928C50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovementSimpleCylindrical_TypeDefinitionIndex = 57945;

	class ConfigMovementSimpleCylindrical : public ::MoleMole::Config::ConfigMovement
	{
	public:
		::MoleMole::Config::ConfigPosRot* Coords; // 0x38
		::System::Boolean KeepCoordOnStart; // 0x40
		::System::Boolean KeepRelativePosition; // 0x41
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 Acceleration; // 0x44
		::UnityEngine::Vector3 InitVelocity; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL__CTOR_OFFSET))(this);
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Void ProcessRigidbody(::GEIHCPAOKKK* modelComponent, ::PJGGDJJPPJP* movementComponent, ::System::Single deltaTime, ::System::Single timeScale, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::PJGGDJJPPJP*, ::System::Single, ::System::Single, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_PROCESSRIGIDBODY_OFFSET))(this, modelComponent, movementComponent, deltaTime, timeScale, instancedAbility);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovementSimpleCylindrical* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovementSimpleCylindrical*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovementSimpleCylindrical* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovementSimpleCylindrical*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_SetupLogicMovement(::PJGGDJJPPJP* P0, ::MoleMole::Battle::Entity* P1, ::MoleMole::Battle::Entity* P2, ::JCADHFOKIHK* P3)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENTSIMPLECYLINDRICAL___BASE_SETUPLOGICMOVEMENT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
