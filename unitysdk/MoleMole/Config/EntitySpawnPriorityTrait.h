#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19251B10)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19251C10)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19251B00)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19252140)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19251DB0)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x192525A0)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19251C00)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192521A0)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19251E30)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19252410)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19252000)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19252640)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19252650)
#define MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19252660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EntitySpawnPriorityTrait_TypeDefinitionIndex = 50658;

	class EntitySpawnPriorityTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 Priority; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::EntitySpawnPriorityTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::EntitySpawnPriorityTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::EntitySpawnPriorityTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::EntitySpawnPriorityTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ENTITYSPAWNPRIORITYTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
