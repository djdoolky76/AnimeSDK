#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOKKOEMOPFI.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1640B3F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1640B3A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1640B8B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1640B500)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1640B4F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1640B910)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1640B580)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1640BB70)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1640B750)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1640B250)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1640BD20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListHackChargeTypeFlag_TypeDefinitionIndex = 80578;

	class ConfigDynamicValueListHackChargeTypeFlag : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::EOKKOEMOPFI>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListHackChargeTypeFlag* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListHackChargeTypeFlag*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListHackChargeTypeFlag* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListHackChargeTypeFlag*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTHACKCHARGETYPEFLAG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
