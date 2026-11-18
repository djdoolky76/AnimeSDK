#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ZKRewardStateEntry; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_CLONE_OFFSET UNITYSDK_OFFSET(0x19233DF0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19233DA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192342A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19233F00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19233EF0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19234300)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19233F80)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192344B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19234140)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x19233C50)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19234660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListZKRewardStateEntry_TypeDefinitionIndex = 72286;

	class ConfigDynamicValueListZKRewardStateEntry : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ZKRewardStateEntry*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListZKRewardStateEntry* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListZKRewardStateEntry*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListZKRewardStateEntry* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListZKRewardStateEntry*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTZKREWARDSTATEENTRY_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
