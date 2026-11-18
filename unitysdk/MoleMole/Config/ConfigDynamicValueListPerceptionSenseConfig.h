#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class PerceptionSenseConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_CLONE_OFFSET UNITYSDK_OFFSET(0xFABDF70)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFABDF20)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABE420)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFABE080)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFABE070)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABE480)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABE100)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABE630)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABE2C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0xFABDDD0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xFABE7E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListPerceptionSenseConfig_TypeDefinitionIndex = 44612;

	class ConfigDynamicValueListPerceptionSenseConfig : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::PerceptionSenseConfig*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListPerceptionSenseConfig* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListPerceptionSenseConfig*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListPerceptionSenseConfig* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListPerceptionSenseConfig*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTPERCEPTIONSENSECONFIG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
