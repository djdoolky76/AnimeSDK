#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/MoleMole/Config/ReachIKConfig.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_CLONE_OFFSET UNITYSDK_OFFSET(0xFABF730)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFABF6E0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABFC90)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFABF840)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFABF830)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABFCF0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABF8C0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABFE90)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABFB30)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0xFABF590)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC0040)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListReachIKConfig_TypeDefinitionIndex = 73657;

	class ConfigDynmaicValueListReachIKConfig : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ReachIKConfig>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListReachIKConfig* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListReachIKConfig*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListReachIKConfig* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListReachIKConfig*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTREACHIKCONFIG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
