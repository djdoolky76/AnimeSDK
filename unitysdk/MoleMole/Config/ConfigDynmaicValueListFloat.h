#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_CLONE_OFFSET UNITYSDK_OFFSET(0x1909CE60)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1909CE10)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1909D320)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1909CF70)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1909CF60)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1909D380)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1909CFF0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1909D5E0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1909D1C0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1909CCC0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1909D790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListFloat_TypeDefinitionIndex = 78488;

	class ConfigDynmaicValueListFloat : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::System::Single>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListFloat* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListFloat*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListFloat* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListFloat*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTFLOAT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
