#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/MoleMole/Config/ConfigTriggerCreationData.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x131E2160)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x131E2110)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x131E26C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x131E2270)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x131E2260)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x131E2720)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x131E22F0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x131E28C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x131E2560)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x131E1FC0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x131E2A70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListTriggerCreationData_TypeDefinitionIndex = 76131;

	class ConfigDynamicValueListTriggerCreationData : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigTriggerCreationData>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListTriggerCreationData* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListTriggerCreationData*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListTriggerCreationData* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListTriggerCreationData*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTTRIGGERCREATIONDATA_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
