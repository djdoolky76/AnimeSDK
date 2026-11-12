#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::PixAir { class PixAirBattleRoundEnemyData; }
namespace System { class String; }

#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xE58C5A0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE58C630)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_COINLOOT_OFFSET UNITYSDK_OFFSET(0xE58C730)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYDESC_OFFSET UNITYSDK_OFFSET(0xE58C790)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xE58C7B0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYID_OFFSET UNITYSDK_OFFSET(0xE58C750)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYNAME_OFFSET UNITYSDK_OFFSET(0xE58C770)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYTALKCONTENT_OFFSET UNITYSDK_OFFSET(0xE58C7D0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_COINLOOT_OFFSET UNITYSDK_OFFSET(0xE58C740)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYDESC_OFFSET UNITYSDK_OFFSET(0xE58C7A0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYHEADICONPATH_OFFSET UNITYSDK_OFFSET(0xE58C7C0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYID_OFFSET UNITYSDK_OFFSET(0xE58C760)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYNAME_OFFSET UNITYSDK_OFFSET(0xE58C780)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYTALKCONTENT_OFFSET UNITYSDK_OFFSET(0xE58C7E0)
#define RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA__INIT_OFFSET UNITYSDK_OFFSET(0xE58C640)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBattleRoundEnemyData_TypeDefinitionIndex = 82094;

	class PixAirBattleRoundEnemyData : public ::System::Object
	{
	public:
		::System::String* _EnemyHeadIconPath_k__BackingField; // 0x10
		::System::UInt32 _CoinLoot_k__BackingField; // 0x18
		::System::UInt32 _EnemyID_k__BackingField; // 0x1C
		::RPG::Client::TextID _EnemyName_k__BackingField; // 0x20
		::RPG::Client::TextID _EnemyTalkContent_k__BackingField; // 0x30
		::RPG::Client::TextID _EnemyDesc_k__BackingField; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PixAir::PixAirBattleRoundEnemyData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::PixAir::PixAirBattleRoundEnemyData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA__INIT_OFFSET))(this);
		}

		::System::UInt32 get_CoinLoot()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_COINLOOT_OFFSET))(this);
		}

		::System::Void set_CoinLoot(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_COINLOOT_OFFSET))(this, a1);
		}

		::System::UInt32 get_EnemyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYID_OFFSET))(this);
		}

		::System::Void set_EnemyID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EnemyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYNAME_OFFSET))(this);
		}

		::System::Void set_EnemyName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EnemyDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYDESC_OFFSET))(this);
		}

		::System::Void set_EnemyDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYDESC_OFFSET))(this, a1);
		}

		::System::String* get_EnemyHeadIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYHEADICONPATH_OFFSET))(this);
		}

		::System::Void set_EnemyHeadIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYHEADICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_EnemyTalkContent()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_GET_ENEMYTALKCONTENT_OFFSET))(this);
		}

		::System::Void set_EnemyTalkContent(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBATTLEROUNDENEMYDATA_SET_ENEMYTALKCONTENT_OFFSET))(this, a1);
		}

	};
}
