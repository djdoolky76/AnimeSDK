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

#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x192BA620)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192BA720)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x192BA610)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x192BA9B0)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x192BA7C0)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x192BA710)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192BAA40)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x192BA840)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x192BAAA0)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x192BA870)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x192BAC60)
#define MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x192BAC70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovStalkerTrait_TypeDefinitionIndex = 81348;

	class ZenkovStalkerTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovStalkerTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovStalkerTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovStalkerTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovStalkerTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSTALKERTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
