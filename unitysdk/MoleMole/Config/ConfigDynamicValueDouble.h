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

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_CLONE_OFFSET UNITYSDK_OFFSET(0x16409F60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16409F50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1640A3F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1640A070)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x16409DD0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1640A060)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1640A450)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1640A0F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x16409E20)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1640A5B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1640A290)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x16409D10)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x16409F00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1640A760)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueDouble_TypeDefinitionIndex = 83856;

	class ConfigDynamicValueDouble : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Double Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_TOUNIONVALUE_OFFSET))(this);
		}

		::DAPDAOIGPPA GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueDouble* op_Implicit(::System::Double value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueDouble*(*)(::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueDouble* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueDouble*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueDouble* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueDouble*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::DAPDAOIGPPA __base_GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEDOUBLE___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
