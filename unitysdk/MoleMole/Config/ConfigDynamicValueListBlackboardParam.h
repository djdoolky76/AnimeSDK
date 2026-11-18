#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBlackboardParam.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_CLONE_OFFSET UNITYSDK_OFFSET(0xFABD470)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFABD420)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABD9D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFABD580)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFABD570)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABDA30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABD600)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABDBD0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABD870)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0xFABD2D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xFABDD80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListBlackboardParam_TypeDefinitionIndex = 54738;

	class ConfigDynamicValueListBlackboardParam : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigBlackboardParam>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListBlackboardParam* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListBlackboardParam*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListBlackboardParam* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListBlackboardParam*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTBLACKBOARDPARAM_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
