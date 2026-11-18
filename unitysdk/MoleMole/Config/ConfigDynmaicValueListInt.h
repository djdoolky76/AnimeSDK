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

#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_CLONE_OFFSET UNITYSDK_OFFSET(0x18B941F0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x18B941A0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B946B0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x18B94300)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x18B942F0)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B94710)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x18B94380)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B94970)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x18B94550)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x18B94050)
#define MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT__CTOR_OFFSET UNITYSDK_OFFSET(0x18B94B20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynmaicValueListInt_TypeDefinitionIndex = 92190;

	class ConfigDynmaicValueListInt : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListInt* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListInt*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynmaicValueListInt* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynmaicValueListInt*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNMAICVALUELISTINT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
