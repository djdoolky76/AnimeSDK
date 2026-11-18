#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class FKNIEPCILLG;
class OHDHAGLCAEB;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19B27EA0)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B27FA0)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B27E30)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B28BA0)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B283E0)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19B27F90)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B28C00)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B28460)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B29050)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B28A60)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B291E0)
#define MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B291F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VOStateEntityTagTrait_TypeDefinitionIndex = 53460;

	class VOStateEntityTagTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::String* StateKey; // 0x18
		::System::Int32 StateValue; // 0x20
		::MoleMole::Config::ValueCompareType CompareType; // 0x24
		::System::Collections::Generic::List_1<::System::String*>* EntityTagList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::VOStateEntityTagTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::VOStateEntityTagTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::VOStateEntityTagTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::VOStateEntityTagTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VOSTATEENTITYTAGTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
