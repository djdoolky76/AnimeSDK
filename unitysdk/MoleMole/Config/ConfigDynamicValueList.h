#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPDAOIGPPA.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_CLONE_OFFSET UNITYSDK_OFFSET(0x1B914E80)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B914E30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B9154A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B914F90)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1B914DE0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B914F80)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B915500)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B915010)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B915710)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B915340)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x1B914AC0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9158C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0x1B915910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueList_TypeDefinitionIndex = 69302;

	class ConfigDynamicValueList : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicValue*>* Elements; // 0x10
		::DAPDAOIGPPA ElementType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_TOUNIONVALUE_OFFSET))(this);
		}

		::DAPDAOIGPPA GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueList* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueList*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueList* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueList*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::DAPDAOIGPPA __base_GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELIST___BASE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}
	};
}
