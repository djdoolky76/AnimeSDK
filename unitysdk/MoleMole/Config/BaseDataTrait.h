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

#define MOLEMOLE_CONFIG_BASEDATATRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19B10730)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B10830)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B106E0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B10C80)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B108D0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19B11110)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19B10820)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B10CE0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B10950)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B10F80)
#define MOLEMOLE_CONFIG_BASEDATATRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B10B40)
#define MOLEMOLE_CONFIG_BASEDATATRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B111B0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B111C0)
#define MOLEMOLE_CONFIG_BASEDATATRAIT___BASE_GENERATECOMPONENT_OFFSET UNITYSDK_OFFSET(0x19B111D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseDataTrait_TypeDefinitionIndex = 54605;

	class BaseDataTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* GameplayTags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::BaseDataTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::BaseDataTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::BaseDataTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::BaseDataTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Boolean GenerateComponent(::EKHEOJOFLLA* buildContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT_GENERATECOMPONENT_OFFSET))(this, buildContext);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_GenerateComponent(::EKHEOJOFLLA* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BASEDATATRAIT___BASE_GENERATECOMPONENT_OFFSET))(this, P0);
		}
	};
}
