#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1B8B87D0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8B88D0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8B8750)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8B99F0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8B8ED0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B8BA190)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1B8B88C0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8B9A50)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8B8F50)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B8BA000)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1B8B98B0)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8BA250)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8BA260)
#define MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B8BA270)

namespace MoleMole::Config
{
	inline static constexpr unsigned int TriggerMissionTipsTrait_TypeDefinitionIndex = 79534;

	class TriggerMissionTipsTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 QuestId; // 0x18
		::System::Int32 CheckTipType; // 0x1C
		::System::Int32 PartnerDateTagTextId; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* CheckTriggerName; // 0x28
		::System::String* replaceTipsSoundEventName; // 0x30
		::System::String* OverrideText; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::TriggerMissionTipsTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::TriggerMissionTipsTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::TriggerMissionTipsTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::TriggerMissionTipsTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_TRIGGERMISSIONTIPSTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
