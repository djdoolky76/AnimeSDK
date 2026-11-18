#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class SphereAreaTriggerEntry; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_CLONE_OFFSET UNITYSDK_OFFSET(0x165340A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16534050)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16534550)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165341B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x165341A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x165345B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16534230)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16534760)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x165343F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x16533F00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x16534910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListSphereAreaTriggerEntry_TypeDefinitionIndex = 73692;

	class ConfigDynamicValueListSphereAreaTriggerEntry : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::SphereAreaTriggerEntry*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListSphereAreaTriggerEntry* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListSphereAreaTriggerEntry*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListSphereAreaTriggerEntry* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListSphereAreaTriggerEntry*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTSPHEREAREATRIGGERENTRY_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
