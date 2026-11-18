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

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_CLONE_OFFSET UNITYSDK_OFFSET(0x1BA290D0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA29080)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA29590)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA291E0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1BA291D0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA295F0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA29260)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA29850)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1BA29430)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1BA28F30)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA29A00)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListBool_TypeDefinitionIndex = 66970;

	class ConfigDynmaicValueListBool : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::System::Boolean>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListBool* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListBool*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListBool* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListBool*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTBOOL_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
