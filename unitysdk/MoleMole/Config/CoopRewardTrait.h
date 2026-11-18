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

#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0xFACBFC0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFACC0C0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0xFACBFB0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xFACC5F0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xFACC260)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0xFACC0B0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFACC650)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xFACC2E0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0xFACC8C0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0xFACC4B0)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0xFACCA50)
#define MOLEMOLE_CONFIG_COOPREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0xFACCA60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CoopRewardTrait_TypeDefinitionIndex = 90311;

	class CoopRewardTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 RewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::CoopRewardTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::CoopRewardTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::CoopRewardTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPREWARDTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
