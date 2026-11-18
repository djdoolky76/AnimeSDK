#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimationPreloadConfig.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_CLONE_OFFSET UNITYSDK_OFFSET(0x19234850)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19234800)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19234DB0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19234960)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19234950)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19234E10)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192349E0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19234FB0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19234C50)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x192346B0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19235160)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListAnimationPreloadConfig_TypeDefinitionIndex = 66251;

	class ConfigDynmaicValueListAnimationPreloadConfig : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::AnimationPreloadConfig>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListAnimationPreloadConfig* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListAnimationPreloadConfig*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListAnimationPreloadConfig* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListAnimationPreloadConfig*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTANIMATIONPRELOADCONFIG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
