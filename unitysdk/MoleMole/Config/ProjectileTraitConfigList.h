#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/MoleMole/Config/ProjectileTraitConfig.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x127959B0)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12795960)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12795F10)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_FROMFLX_OFFSET UNITYSDK_OFFSET(0x12795AC0)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12795AB0)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12795F70)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12795B40)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12796110)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x12795DB0)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x12795810)
#define MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x127962C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ProjectileTraitConfigList_TypeDefinitionIndex = 65652;

	class ProjectileTraitConfigList : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ProjectileTraitConfig>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ProjectileTraitConfigList* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ProjectileTraitConfigList*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ProjectileTraitConfigList* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ProjectileTraitConfigList*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PROJECTILETRAITCONFIGLIST_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
