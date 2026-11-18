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

#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x192636D0)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192637D0)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192636C0)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19263A60)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19263870)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192637C0)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19263AF0)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192638F0)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19263B50)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19263920)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19263D10)
#define MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19263D20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovAltarGameTrait_TypeDefinitionIndex = 62543;

	class ZenkovAltarGameTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovAltarGameTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovAltarGameTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovAltarGameTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovAltarGameTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVALTARGAMETRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
