#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPPFFMBNGBP;
namespace RPG::GameCore { class TreasureDungeonItemConfigRow; }

#define RPG_CLIENT_TREASUREDUNGEONITEM_CLEAR_OFFSET UNITYSDK_OFFSET(0xED8F800)
#define RPG_CLIENT_TREASUREDUNGEONITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xED8F9E0)
#define RPG_CLIENT_TREASUREDUNGEONITEM_GET_ITEMROW_OFFSET UNITYSDK_OFFSET(0xED8F970)
#define RPG_CLIENT_TREASUREDUNGEONITEM_GET_KILLLEVEL_OFFSET UNITYSDK_OFFSET(0xED8F8C0)
#define RPG_CLIENT_TREASUREDUNGEONITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xED8F850)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonItem_TypeDefinitionIndex = 70139;

	class TreasureDungeonItem : public ::System::Object
	{
	public:
		::RPG::GameCore::TreasureDungeonItemConfigRow* _ItemRow; // 0x10
		::System::UInt32 ItemCount; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM_CLEAR_OFFSET))(this);
		}

		::System::Void Sync(::NPPFFMBNGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPPFFMBNGBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM_SYNC_OFFSET))(this, a1);
		}

		::System::UInt32 get_KillLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM_GET_KILLLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonItemConfigRow* get_ItemRow()
		{
			return ((::RPG::GameCore::TreasureDungeonItemConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONITEM_GET_ITEMROW_OFFSET))(this);
		}

	};
}
