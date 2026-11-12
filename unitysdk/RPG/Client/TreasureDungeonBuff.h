#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGNNOJEEBLP;
namespace RPG::Client { class TreasureDungeonBuff; }
namespace RPG::GameCore { class TreasureDungeonBuffConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_TREASUREDUNGEONBUFF_CREATETEMPBUFF_OFFSET UNITYSDK_OFFSET(0xED8CDD0)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_CTOR_OFFSET UNITYSDK_OFFSET(0xED8CEE0)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_BUFFROW_OFFSET UNITYSDK_OFFSET(0xED8D280)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_DESC_OFFSET UNITYSDK_OFFSET(0xED8D6A0)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xED8D5D0)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_NAME_OFFSET UNITYSDK_OFFSET(0xED8D680)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xED8D520)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_GET_REMAINUSEDTIME_OFFSET UNITYSDK_OFFSET(0xED8D500)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_SET_DESC_OFFSET UNITYSDK_OFFSET(0xED8D6B0)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_SET_NAME_OFFSET UNITYSDK_OFFSET(0xED8D690)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_SET_REMAINUSEDTIME_OFFSET UNITYSDK_OFFSET(0xED8D510)
#define RPG_CLIENT_TREASUREDUNGEONBUFF_SYNC_OFFSET UNITYSDK_OFFSET(0xED8D2F0)
#define RPG_CLIENT_TREASUREDUNGEONBUFF__REFRESHTEXT_OFFSET UNITYSDK_OFFSET(0xED8CEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonBuff_TypeDefinitionIndex = 70133;

	class TreasureDungeonBuff : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::RPG::GameCore::TreasureDungeonBuffConfigRow* _BuffRow; // 0x18
		::System::String* _Desc_k__BackingField; // 0x20
		::System::UInt32 _RemainUsedTime_k__BackingField; // 0x28
		::System::UInt32 _BuffID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TreasureDungeonBuff* CreateTempBuff(::System::UInt32 a1)
		{
			return ((::RPG::Client::TreasureDungeonBuff*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_CREATETEMPBUFF_OFFSET))(a1);
		}

		::System::Void Sync(::JGNNOJEEBLP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGNNOJEEBLP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_SYNC_OFFSET))(this, a1);
		}

		::System::Void _RefreshText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF__REFRESHTEXT_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonBuffConfigRow* get_BuffRow()
		{
			return ((::RPG::GameCore::TreasureDungeonBuffConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_BUFFROW_OFFSET))(this);
		}

		::System::UInt32 get_RemainUsedTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_REMAINUSEDTIME_OFFSET))(this);
		}

		::System::Void set_RemainUsedTime(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_SET_REMAINUSEDTIME_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_RARITY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONBUFF_SET_DESC_OFFSET))(this, a1);
		}

	};
}
