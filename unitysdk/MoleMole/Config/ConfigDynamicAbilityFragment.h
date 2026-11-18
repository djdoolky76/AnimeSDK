#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class ConfigAbilityFragment; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_CLONE_OFFSET UNITYSDK_OFFSET(0x164090B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x16409060)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x164095E0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x164091C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x164091B0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16409640)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x16409240)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x16409810)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x16409480)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x16408F10)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x164099C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAbilityFragment_TypeDefinitionIndex = 59724;

	class ConfigDynamicAbilityFragment : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::MoleMole::Config::ConfigAbilityFragment* Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicAbilityFragment* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicAbilityFragment*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicAbilityFragment* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicAbilityFragment*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICABILITYFRAGMENT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
