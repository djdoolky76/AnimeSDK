#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UniqueItemKey.h"
#include "unitysdk/RPG/GameCore/ItemMainType.h"
#include "unitysdk/RPG/GameCore/ItemRarity.h"
#include "unitysdk/RPG/GameCore/ItemSubType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class ItemDisplayDataExtraInfo; }
namespace RPG::GameCore { class ItemRow; }
namespace System { class String; }

#define RPG_CLIENT_ITEMDISPLAYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDDBBBA0)
#define RPG_CLIENT_ITEMDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDDBBC40)
#define RPG_CLIENT_ITEMDISPLAYDATA_GET_DEFAULTICONPATH_OFFSET UNITYSDK_OFFSET(0xDDBBC50)
#define RPG_CLIENT_ITEMDISPLAYDATA_GET_ISUNIQUE_OFFSET UNITYSDK_OFFSET(0xDDBBDB0)
#define RPG_CLIENT_ITEMDISPLAYDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0xDDBBD60)
#define RPG_CLIENT_ITEMDISPLAYDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0xDDBBD00)

namespace RPG::Client
{
	inline static constexpr unsigned int ItemDisplayData_TypeDefinitionIndex = 67636;

	class ItemDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::ItemDisplayDataExtraInfo* ExtraInfo; // 0x10
		::RPG::GameCore::ItemRarity Rarity; // 0x18
		::System::UInt32 Rank; // 0x1C
		::System::UInt32 Level; // 0x20
		::System::UInt32 Count; // 0x24
		::RPG::GameCore::ItemSubType ItemSubType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::UniqueItemKey UniqueKey; // 0x30
		::System::UInt32 ConfigID; // 0x48
		::RPG::GameCore::ItemMainType ItemMainType; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ItemDisplayData* Create(::RPG::Client::ItemDisplayData* a1)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_CREATE_OFFSET))(a1);
		}

		::System::String* get_DefaultIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_GET_DEFAULTICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_GET_UID_OFFSET))(this);
		}

		::System::Boolean get_IsUnique()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_GET_ISUNIQUE_OFFSET))(this);
		}

		::RPG::GameCore::ItemRow* get__Row()
		{
			return ((::RPG::GameCore::ItemRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ITEMDISPLAYDATA_GET__ROW_OFFSET))(this);
		}

	};
}
