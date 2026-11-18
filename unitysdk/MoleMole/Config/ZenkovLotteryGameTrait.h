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

#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFFF0E20)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFF0F20)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFF0E10)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFF1450)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFFF10C0)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFFF0F10)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFF14B0)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFF1140)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFFF1720)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFFF1310)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF18B0)
#define MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFFF18C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovLotteryGameTrait_TypeDefinitionIndex = 50537;

	class ZenkovLotteryGameTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 GameID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovLotteryGameTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovLotteryGameTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovLotteryGameTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovLotteryGameTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVLOTTERYGAMETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
