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

#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_CLONE_OFFSET UNITYSDK_OFFSET(0x1C6F4D20)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6F4E20)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6F4D10)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6F5570)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6F50A0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_GETHASHNUM_OFFSET UNITYSDK_OFFSET(0x1C6F4E10)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6F55D0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6F5120)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_PARSEFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C6F5940)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_PARSEFROMFLX_OFFSET UNITYSDK_OFFSET(0x1C6F5430)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F5AD0)
#define MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT___BASE_EXPOSEMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6F5AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZenkovSplitTeamGroupTrait_TypeDefinitionIndex = 67329;

	class ZenkovSplitTeamGroupTrait : public ::MoleMole::Config::ConfigViewObjectTraitBase
	{
	public:
		::System::Int32 RelatedPOIGroupId; // 0x18
		::System::Int32 RelatedPOIMember; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT__CTOR_OFFSET))(this);
		}

		::System::Void ForeachRefTypeMember(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_FOREACHREFTYPEMEMBER_OFFSET))(this, callback);
		}

		::MoleMole::Config::ConfigViewObjectTraitBase* Clone()
		{
			return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_CLONE_OFFSET))(this);
		}

		::System::Int32 GetHashNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_GETHASHNUM_OFFSET))(this);
		}

		::System::Void ExposeMember(::OHDHAGLCAEB* processor, ::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_EXPOSEMEMBER_OFFSET))(this, processor, prefix);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		static ::MoleMole::Config::ZenkovSplitTeamGroupTrait* ParseFromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::MoleMole::Config::ZenkovSplitTeamGroupTrait*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_PARSEFROMFLX_OFFSET))(node);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		static ::MoleMole::Config::ZenkovSplitTeamGroupTrait* ParseFromBinary(::FKNIEPCILLG* byteArray, ::System::Int32 threadFlag)
		{
			return ((::MoleMole::Config::ZenkovSplitTeamGroupTrait*(*)(::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT_PARSEFROMBINARY_OFFSET))(byteArray, threadFlag);
		}

		::System::Void __base_ExposeMember(::OHDHAGLCAEB* P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::OHDHAGLCAEB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZENKOVSPLITTEAMGROUPTRAIT___BASE_EXPOSEMEMBER_OFFSET))(this, P0, P1);
		}
	};
}
