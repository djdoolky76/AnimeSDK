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

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_CLONE_OFFSET UNITYSDK_OFFSET(0x16532AA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16532A90)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16532F30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x16532BB0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x16532930)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x16532BA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16532F90)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16532C30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x16532970)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x165331C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16532DD0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x16532880)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16532A40)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x16533370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueInt_TypeDefinitionIndex = 45497;

	class ConfigDynamicValueInt : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Int32 Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_TOUNIONVALUE_OFFSET))(this);
		}

		::DAPDAOIGPPA GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueInt* op_Implicit(::System::Int32 value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueInt*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueInt* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueInt*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueInt* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueInt*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::DAPDAOIGPPA __base_GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEINT___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
