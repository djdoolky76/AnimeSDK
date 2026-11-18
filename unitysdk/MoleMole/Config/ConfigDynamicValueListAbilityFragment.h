#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigAbilityFragment; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_CLONE_OFFSET UNITYSDK_OFFSET(0x1640A990)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1640A940)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1640AE40)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1640AAA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1640AA90)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1640AEA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1640AB20)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1640B050)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1640ACE0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1640A7F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1640B200)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListAbilityFragment_TypeDefinitionIndex = 61098;

	class ConfigDynamicValueListAbilityFragment : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAbilityFragment*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListAbilityFragment* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListAbilityFragment*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListAbilityFragment* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListAbilityFragment*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTABILITYFRAGMENT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
