#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6E6C20)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6E6D30)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6E6C10)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6E6F70)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6E6DD0)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C6E6D20)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6E7000)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6E6E50)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6E7060)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6E6E80)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6E71E0)
#define MOLEMOLE_CONFIG_MONSTERTRAITBASE___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6E71F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterTraitBase_TypeDefinitionIndex = 82098;

	class MonsterTraitBase : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MonsterTraitBase* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MonsterTraitBase*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MonsterTraitBase* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MonsterTraitBase*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERTRAITBASE___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
