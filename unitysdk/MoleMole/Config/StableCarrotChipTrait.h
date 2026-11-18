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

#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x19B26BF0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B26CF0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B26BA0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B276A0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x19B27050)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x19B26CE0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B27700)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B270D0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19B27AE0)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x19B27560)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B27C70)
#define MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x19B27C80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int StableCarrotChipTrait_TypeDefinitionIndex = 46506;

	class StableCarrotChipTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 StableCarrotChipRewardID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* StateKey; // 0x20
		::System::Int32 StateValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::StableCarrotChipTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::StableCarrotChipTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::StableCarrotChipTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::StableCarrotChipTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_STABLECARROTCHIPTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
