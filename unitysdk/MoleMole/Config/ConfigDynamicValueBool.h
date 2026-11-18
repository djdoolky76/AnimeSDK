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

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1A761910)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A761900)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A761DA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A761A20)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A761790)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A761A10)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A761E00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A761AA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A7617E0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A761FF0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A761C40)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A7616E0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7618B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1A762190)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueBool_TypeDefinitionIndex = 56374;

	class ConfigDynamicValueBool : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Boolean Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_TOUNIONVALUE_OFFSET))(this);
		}

		::DAPDAOIGPPA GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueBool* op_Implicit(::System::Boolean value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueBool*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueBool* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueBool*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueBool* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueBool*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::DAPDAOIGPPA __base_GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEBOOL___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
