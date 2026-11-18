#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class VOStateAudioPortalEntry; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_CLONE_OFFSET UNITYSDK_OFFSET(0x11E8C070)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x11E8C020)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E8C520)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_FROMFLX_OFFSET UNITYSDK_OFFSET(0x11E8C180)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x11E8C170)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E8C580)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x11E8C200)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x11E8C730)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x11E8C3C0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0x11E8BED0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11E8C8E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueListVOStateAudioPortalEntry_TypeDefinitionIndex = 59593;

	class ConfigDynamicValueListVOStateAudioPortalEntry : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::VOStateAudioPortalEntry*>* Elements; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueListVOStateAudioPortalEntry* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListVOStateAudioPortalEntry*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueListVOStateAudioPortalEntry* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueListVOStateAudioPortalEntry*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUELISTVOSTATEAUDIOPORTALENTRY_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
