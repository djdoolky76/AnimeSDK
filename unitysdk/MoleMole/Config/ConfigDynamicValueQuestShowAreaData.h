#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicValue.h"
#include "unitysdk/MoleMole/Config/QuestShowAreaData.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_CLONE_OFFSET UNITYSDK_OFFSET(0xFABE9A0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFABE990)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABEE90)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFABEAB0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFABEAA0)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABF080)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABEB30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFABF220)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFABED30)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_TOUNIONVALUE_OFFSET UNITYSDK_OFFSET(0xFABE830)
#define MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFABF540)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicValueQuestShowAreaData_TypeDefinitionIndex = 75656;

	class ConfigDynamicValueQuestShowAreaData : public ::MoleMole::Config::ConfigDynamicValue
	{
	public:
		::MoleMole::Config::QuestShowAreaData Value; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA__CTOR_OFFSET))(this);
		}

		::DPKOIBEFPAO ToUnionValue()
		{
			return ((::DPKOIBEFPAO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_TOUNIONVALUE_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigDynamicValue* Clone()
		{
			return ((::MoleMole::Config::ConfigDynamicValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_GETHASHNUM_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ConfigDynamicValueQuestShowAreaData* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ConfigDynamicValueQuestShowAreaData*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ConfigDynamicValueQuestShowAreaData* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ConfigDynamicValueQuestShowAreaData*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICVALUEQUESTSHOWAREADATA_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}
	};
}
