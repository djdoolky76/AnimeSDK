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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_STORETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6EF7E0)
#define MOLEMOLE_CONFIG_STORETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6EF8E0)
#define MOLEMOLE_CONFIG_STORETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6EF740)
#define MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6F0D20)
#define MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6EFFC0)
#define MOLEMOLE_CONFIG_STORETRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C6F1740)
#define MOLEMOLE_CONFIG_STORETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C6EF8D0)
#define MOLEMOLE_CONFIG_STORETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6F0D80)
#define MOLEMOLE_CONFIG_STORETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6F0040)
#define MOLEMOLE_CONFIG_STORETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6F15B0)
#define MOLEMOLE_CONFIG_STORETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6F0BE0)
#define MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F1800)
#define MOLEMOLE_CONFIG_STORETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6F1810)
#define MOLEMOLE_CONFIG_STORETRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1C6F1820)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StoreTrait_TypeDefinitionIndex = 65858;

	class StoreTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 StoreID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* PlayerPointKey; // 0x20
		::System::Collections::Generic::List_1<::System::Int32>* ActiveMemberConfigIDList; // 0x28
		::System::Int32 TeleportID; // 0x30
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::System::String*>* HideTags; // 0x38
		::System::Collections::Generic::List_1<::System::String*>* HideWhiteList; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* Args; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StoreTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StoreTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StoreTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STORETRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
