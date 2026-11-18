#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigColliderRegisterData.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_CLONE_OFFSET UNITYSDK_OFFSET(0x1A7623C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A762370)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A762920)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A7624D0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A7624C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A762980)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A762550)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A762B20)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A7627C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1A762220)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A762CD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListColliderRegisterData_TypeDefinitionIndex = 57048;

	class ConfigDynamicValueListColliderRegisterData : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigColliderRegisterData>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListColliderRegisterData* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListColliderRegisterData*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListColliderRegisterData* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListColliderRegisterData*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTCOLLIDERREGISTERDATA_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
