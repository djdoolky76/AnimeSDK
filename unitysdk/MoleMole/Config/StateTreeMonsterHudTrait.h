#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A771320)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A771420)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A7712B0)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A771BE0)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A7716A0)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A771410)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A771C40)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A771720)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET UNITYSDK_OFFSET(0x1A772250)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_ONPOSTENTITYREADY_OFFSET UNITYSDK_OFFSET(0x1A7720E0)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A771F50)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A771AA0)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7723C0)
#define MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A7723D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StateTreeMonsterHudTrait_TypeDefinitionIndex = 63866;

	class StateTreeMonsterHudTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* ValueName; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* UICtrlNames; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StateTreeMonsterHudTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StateTreeMonsterHudTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StateTreeMonsterHudTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StateTreeMonsterHudTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void OnPostEntityReady(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_ONPOSTENTITYREADY_OFFSET))(this, entityHandle);
		}

		::System::Void OnPostEntityDissociate(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT_ONPOSTENTITYDISSOCIATE_OFFSET))(this, entityHandle);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STATETREEMONSTERHUDTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
