#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class NpcMontageConfig; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_CLONE_OFFSET UNITYSDK_OFFSET(0x1B916660)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B916610)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B916B10)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B916770)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B916760)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B916B70)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B9167F0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B916D20)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B9169B0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1B9164C0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B916ED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListNpcMontageConfig_TypeDefinitionIndex = 74159;

	class ConfigDynmaicValueListNpcMontageConfig : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::NpcMontageConfig*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListNpcMontageConfig* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListNpcMontageConfig*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListNpcMontageConfig* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListNpcMontageConfig*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTNPCMONTAGECONFIG_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
