#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/ViewObject/EntityBuildContext.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x192B3250)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B3350)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B3240)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B3780)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192B33F0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x192B3C30)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192B3340)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B37E0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192B3470)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192B3A50)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192B3640)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_POSTBUILDENTITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x192B3BE0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x192B3CD0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192B3CE0)
#define MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x192B3CF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int MonsterWeaknessResistOverrideTrait_TypeDefinitionIndex = 60668;

	class MonsterWeaknessResistOverrideTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 OverrideID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::MonsterWeaknessResistOverrideTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::MonsterWeaknessResistOverrideTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::MonsterWeaknessResistOverrideTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::MonsterWeaknessResistOverrideTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean PostBuildEntityComponent(::Foundation::ViewObject::EntityBuildContext& buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::ViewObject::EntityBuildContext&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_POSTBUILDENTITYCOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_MONSTERWEAKNESSRESISTOVERRIDETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
