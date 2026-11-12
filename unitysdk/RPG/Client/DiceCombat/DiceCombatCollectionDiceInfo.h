#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class IPABEFHCBLD;
namespace RPG::Client { class DiceCombatDiceConfigData; }
namespace System { class String; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD5985C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_AVAILABLE_OFFSET UNITYSDK_OFFSET(0xD598770)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_DICEINFO_OFFSET UNITYSDK_OFFSET(0xD5988B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD5987A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ID_OFFSET UNITYSDK_OFFSET(0xD598760)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xD598780)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD5987B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_UNLOCKTIME_OFFSET UNITYSDK_OFFSET(0xD598860)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_SET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0xD598790)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatCollectionDiceInfo_TypeDefinitionIndex = 78396;

	class DiceCombatCollectionDiceInfo : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::IPABEFHCBLD* _PlayerDiceInfo; // 0x18
		::RPG::Client::DiceCombatDiceConfigData* _ConfigDiceInfo; // 0x20
		::System::Boolean _Available_k__BackingField; // 0x28
		::System::Boolean _IsRecommend_k__BackingField; // 0x29
		::System::Byte _padding0[0x2];
		::System::UInt32 _ID_k__BackingField; // 0x2C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_Available()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_AVAILABLE_OFFSET))(this);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Void set_IsRecommend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_SET_ISRECOMMEND_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_NAME_OFFSET))(this);
		}

		::System::Int64 get_UnlockTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_UNLOCKTIME_OFFSET))(this);
		}

		::RPG::Client::DiceCombatDiceConfigData* get_DiceInfo()
		{
			return ((::RPG::Client::DiceCombatDiceConfigData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATCOLLECTIONDICEINFO_GET_DICEINFO_OFFSET))(this);
		}

	};
}
