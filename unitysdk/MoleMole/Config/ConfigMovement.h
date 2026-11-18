#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOOOPOCDNJO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class JCADHFOKIHK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_CLONE_OFFSET UNITYSDK_OFFSET(0x1653C470)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1653C420)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1653D4B0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1653C580)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_GETFIXEDMOVEMENTRATIO_OFFSET UNITYSDK_OFFSET(0x1653C280)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1653C570)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1653D510)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1653C600)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1653DA00)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1653D3E0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT_SETUPLOGICMOVEMENT_OFFSET UNITYSDK_OFFSET(0x1653C1E0)
#define MOLEMOLE_CONFIG_CONFIGMOVEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1653DB50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMovement_TypeDefinitionIndex = 51675;

	class ConfigMovement : public ::System::Object
	{
	public:
		// static const ::System::Single MIN_SPEED; // 0x0
		// static const ::System::Single SQR_MIN_SPEED; // 0x0
		// static const ::System::Single REACH_THRESHOLD; // 0x0
		::System::String* ConfigKey; // 0x10
		::System::Single HitTangentialRatio; // 0x18
		::System::Single Duration; // 0x1C
		::EOOOPOCDNJO TimesUpMoveOption; // 0x20
		::System::Boolean MuteRootMotionMovement; // 0x24
		::System::Boolean IgnoreMovementCurveRatio; // 0x25
		::System::Byte _padding0[0x2];
		::System::Single Gravity; // 0x28
		::System::Single HitNormalRatio; // 0x2C
		::System::Int32 MaxHitNumber; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT__CTOR_OFFSET))(this);
		}

		::System::Void SetupLogicMovement(::PJGGDJJPPJP* movementComponent, ::MoleMole::Battle::Entity* other, ::MoleMole::Battle::Entity* caster, ::JCADHFOKIHK* instancedAbility)
		{
			return ((::System::Void(*)(::PVOID, ::PJGGDJJPPJP*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::JCADHFOKIHK*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_SETUPLOGICMOVEMENT_OFFSET))(this, movementComponent, other, caster, instancedAbility);
		}

		::System::Single GetFixedMovementRatio(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_GETFIXEDMOVEMENTRATIO_OFFSET))(this, entity);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigMovement* Clone()
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMovement* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMovement* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMovement*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMOVEMENT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
