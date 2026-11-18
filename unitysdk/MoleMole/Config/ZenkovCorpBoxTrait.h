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

#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1A04DB10)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04DC10)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04DB00)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A04E360)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1A04DE90)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1A04DC00)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A04E3C0)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A04DF10)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A04E6F0)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1A04E220)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04E880)
#define MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1A04E890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovCorpBoxTrait_TypeDefinitionIndex = 44474;

	class ZenkovCorpBoxTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Boolean IsNoSearch; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 CorpBoxID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovCorpBoxTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovCorpBoxTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovCorpBoxTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovCorpBoxTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVCORPBOXTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
