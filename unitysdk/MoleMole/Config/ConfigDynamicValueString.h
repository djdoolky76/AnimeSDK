#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPDAOIGPPA.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_CLONE_OFFSET UNITYSDK_OFFSET(0x121B79A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x121B7950)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x121B7E60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FROMFLX_OFFSET UNITYSDK_OFFSET(0x121B7AB0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x121B77E0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x121B7AA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x121B7EC0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x121B7B30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x121B7830)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x121B8050)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x121B7D00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x121B7730)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING__CTOR_OFFSET UNITYSDK_OFFSET(0x121B7900)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x121B8200)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueString_TypeDefinitionIndex = 85525;

	class ConfigDynamicValueString : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::String* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_TOUNIONVALUE_OFFSET))(this);
		}

		::DAPDAOIGPPA GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueString* op_Implicit(::System::String* value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueString*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueString* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueString*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueString* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueString*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::DAPDAOIGPPA __base_GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUESTRING___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
