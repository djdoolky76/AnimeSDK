#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class EKHEOJOFLLA;
class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace MoleMole::Config { class SphereAreaTriggerEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1279CC50)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1279CD50)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1279CBE0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1279E0B0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1279D430)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1279E790)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1279CD40)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1279E110)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1279D4B0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1279E600)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1279DF70)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1279E890)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1279E8B0)
#define MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1279E8C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SphereAreaTriggerAudioTrait_TypeDefinitionIndex = 47890;

	class SphereAreaTriggerAudioTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 QuestID; // 0x18
		::System::Boolean IsAutoStart; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single SwitchDelay; // 0x20
		::System::Single CountDown; // 0x24
		::System::String* DistanceToRTPC_Name; // 0x28
		::System::Single DistanceToRTPC_MaxRange; // 0x30
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::MoleMole::Config::SphereAreaTriggerEntry*>* Entries; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::SphereAreaTriggerAudioTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::SphereAreaTriggerAudioTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::SphereAreaTriggerAudioTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::SphereAreaTriggerAudioTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPHEREAREATRIGGERAUDIOTRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
