#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class NpcAccessoryVoConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_CLONE_OFFSET UNITYSDK_OFFSET(0x19298890)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19298840)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19298D40)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192989A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19298990)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19298DA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19298A20)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19298F50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19298BE0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x192986F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19299100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListNpcAccessoryVoConfig_TypeDefinitionIndex = 39481;

	class ConfigDynamicValueListNpcAccessoryVoConfig : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::NpcAccessoryVoConfig*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListNpcAccessoryVoConfig* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListNpcAccessoryVoConfig*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListNpcAccessoryVoConfig* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListNpcAccessoryVoConfig*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTNPCACCESSORYVOCONFIG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
