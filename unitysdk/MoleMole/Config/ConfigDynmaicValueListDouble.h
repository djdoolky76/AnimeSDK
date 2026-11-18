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

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1B915B40)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B915AF0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B916000)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B915C50)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B915C40)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B916060)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B915CD0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9162C0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B915EA0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1B9159A0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B916470)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListDouble_TypeDefinitionIndex = 43572;

	class ConfigDynmaicValueListDouble : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::System::Double>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListDouble* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListDouble*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListDouble* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListDouble*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTDOUBLE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
