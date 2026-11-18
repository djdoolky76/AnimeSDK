#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPDAOIGPPA.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_CLONE_OFFSET UNITYSDK_OFFSET(0xFFD21A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFD2190)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFD2630)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFD22B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0xFFD2010)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFFD22A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFD2690)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFD2330)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xFFD2060)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFD27F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFD24D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0xFFD1F50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD2140)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0xFFD29A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueFloat_TypeDefinitionIndex = 73776;

	class ConfigDynamicValueFloat : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Single Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_TOUNIONVALUE_OFFSET))(this);
		}

		::DAPDAOIGPPA GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueFloat* op_Implicit(::System::Single value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueFloat*(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueFloat* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueFloat*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueFloat* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueFloat*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::DAPDAOIGPPA __base_GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEFLOAT___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
