#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPDAOIGPPA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0xFABD090)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFABD080)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABD210)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFABD1A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_GETCONFIGDYNAMICVALUETYPE_OFFSET UNITYSDK_OFFSET(0xFABD030)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFABD190)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABD220)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABD200)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABA610)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABA050)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0xFABD240)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0xFABD230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValue_TypeDefinitionIndex = 85233;

	class ConfigDynamicValue : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigDynamicValue** StaticGet_Empty()
		{
			return (::MoleMole::Config::ConfigDynamicValue**)Il2CppClass::FromTypeDefinitionIndex(ConfigDynamicValue_TypeDefinitionIndex)->GetStaticField(0x4D350);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE__CCTOR_OFFSET))();
		}

		::DAPDAOIGPPA GetConfigDynamicValueType()
		{
			return ((::DAPDAOIGPPA(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_GETCONFIGDYNAMICVALUETYPE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValue* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValue* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUE_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
