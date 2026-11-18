#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigAnimatorFloatParam.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_CLONE_OFFSET UNITYSDK_OFFSET(0x165335A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16533550)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16533B00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_FROMFLX_OFFSET UNITYSDK_OFFSET(0x165336B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x165336A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16533B60)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16533730)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16533D00)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x165339A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x16533400)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16533EB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListAnimatorFloatParam_TypeDefinitionIndex = 83538;

	class ConfigDynamicValueListAnimatorFloatParam : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigAnimatorFloatParam>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListAnimatorFloatParam* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListAnimatorFloatParam*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListAnimatorFloatParam* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListAnimatorFloatParam*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTANIMATORFLOATPARAM_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
