#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPDAOIGPPA.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_CLONE_OFFSET UNITYSDK_OFFSET(0x12771590)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x12771580)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x12771A10)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FROMFLX_OFFSET UNITYSDK_OFFSET(0x127716A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x127713F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x12771690)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12771A70)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x12771720)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x12771440)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x12771BD0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x127718B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x12771320)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x12771530)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x12771D80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueVector_TypeDefinitionIndex = 71380;

	class ConfigDynamicValueVector : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::UnityEngine::Vector3 Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_TOUNIONVALUE_OFFSET))(this);
		}

		::DAPDAOIGPPA GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		static ::MoleMole::Config::ConfigDynamicValueVector* op_Implicit(::UnityEngine::Vector3 value)
		{
			return ((::MoleMole::Config::ConfigDynamicValueVector*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_OP_IMPLICIT_OFFSET))(value);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueVector* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueVector*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueVector* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueVector*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::DAPDAOIGPPA __base_GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEVECTOR___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
