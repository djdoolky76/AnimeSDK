#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Config { class ConfigViewObjectTraitBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19242250)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19242350)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19242200)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192444D0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19242FD0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19244EE0)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19242340)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19244530)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19243050)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19244D50)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19244390)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19244F70)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19244F80)
#define MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19244F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMonsterAlertTrait_TypeDefinitionIndex = 44430;

	class ConfigMonsterAlertTrait : public ::MoleMole::Config::MonsterTraitBase
	{
	public:
		::System::Boolean UseNewMode; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* AlertConfigKey; // 0x20
		::System::Boolean IsSetAlertValueMax; // 0x28
		::System::Boolean EnterBattleRegardlessOfSameArea; // 0x29
		::System::Boolean NoStackAlertReduceOnEnemyExitSameArea; // 0x2A
		::System::Boolean IsHoldAlertValue; // 0x2B
		::System::Int32 AlertGroup; // 0x2C
		::System::Boolean IsHandleMuteLevelHudOnIdle; // 0x30
		::System::Boolean MuteLevelHudOnIdle; // 0x31
		::System::Boolean IsHandleMuteLevelHudOnEnterBattle; // 0x32
		::System::Boolean MuteLevelHudOnEnterBattle; // 0x33
		::System::Boolean IsHandleShowMonsterHPWhenLevelHUDShowOnIdle; // 0x34
		::System::Boolean ShowMonsterHPWhenLevelHUDShowOnIdle; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigMonsterAlertTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigMonsterAlertTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigMonsterAlertTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigMonsterAlertTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMONSTERALERTTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
