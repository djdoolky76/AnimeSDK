#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19263D80)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19263E80)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19263D30)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19266380)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19264C40)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19263E70)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192663E0)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19264CC0)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19266D40)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19266240)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19266ED0)
#define MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19266EE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovEvacuationSystemTrait_TypeDefinitionIndex = 55137;

	class ZenkovEvacuationSystemTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 EvacuationType; // 0x18
		::System::Int32 InitPhase; // 0x1C
		::System::Int32 UntriggerableDuration; // 0x20
		::System::Int32 LinkedGroupID; // 0x24
		::System::String* LinkedGroupState; // 0x28
		::System::Int32 LinkedGroupStateValue; // 0x30
		::System::Int32 SubmitID; // 0x34
		::System::Int32 EvacuableCountdown; // 0x38
		::System::Int32 UnevacuableCountdown; // 0x3C
		::System::Int32 ZenkovQuestID; // 0x40
		::System::Int32 ZKMiddleTipID_NearTriggerable; // 0x44
		::System::Int32 ZKMiddleTipID_Triggerable; // 0x48
		::System::Int32 ZKMiddleTipID_Evacuable; // 0x4C
		::System::Int32 ZKMiddleTipID_NearEvacuableClosing; // 0x50
		::System::Int32 ZKMiddleTipID_Unevacuable; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovEvacuationSystemTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovEvacuationSystemTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovEvacuationSystemTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovEvacuationSystemTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVEVACUATIONSYSTEMTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
