#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/SlotType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::Client::TrainParty { class TrainPartyBuildSlotInfo; }
namespace RPG::GameCore { class PlayerRoomSlotConfigRow; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0xED3A9D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xED4C7E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GETSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xED44750)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GETTAGFLAG_OFFSET UNITYSDK_OFFSET(0xED3EF50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_DIYITEM_OFFSET UNITYSDK_OFFSET(0xED4CDF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_ROW_OFFSET UNITYSDK_OFFSET(0xED4AC70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_SLOTID_OFFSET UNITYSDK_OFFSET(0xED4CDD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_REMOVECURRENTDIYITEM_OFFSET UNITYSDK_OFFSET(0xED4C7F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SETSLOTID_OFFSET UNITYSDK_OFFSET(0xED3A970)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SET_DIYITEM_OFFSET UNITYSDK_OFFSET(0xED4CE00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SET_SLOTID_OFFSET UNITYSDK_OFFSET(0xED4CDE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xED389E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__COMPARETO_OFFSET UNITYSDK_OFFSET(0xED4CCF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__INITSLOTTYPE_OFFSET UNITYSDK_OFFSET(0xED4CB40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__INITTAGFLAGS_OFFSET UNITYSDK_OFFSET(0xED4C8D0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyBuildSlotInfo_TypeDefinitionIndex = 76462;

	class TrainPartyBuildSlotInfo : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* _DIYItem_k__BackingField; // 0x10
		::System::UInt32 _SlotID_k__BackingField; // 0x18
		::System::Int32 _TagFlag; // 0x1C
		::RPG::Client::TrainParty::SlotType _SlotType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void SetSlotID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SETSLOTID_OFFSET))(this, a1);
		}

		::System::Void Sync(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveCurrentDIYItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_REMOVECURRENTDIYITEM_OFFSET))(this);
		}

		::System::Int32 GetTagFlag()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GETTAGFLAG_OFFSET))(this);
		}

		::RPG::Client::TrainParty::SlotType GetSlotType()
		{
			return ((::RPG::Client::TrainParty::SlotType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GETSLOTTYPE_OFFSET))(this);
		}

		::System::Void _InitTagFlags()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__INITTAGFLAGS_OFFSET))(this);
		}

		::System::Void _InitSlotType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__INITSLOTTYPE_OFFSET))(this);
		}

		::System::Int32 System_IComparable_RPG_Client_TrainParty_TrainPartyBuildSlotInfo__CompareTo(::RPG::Client::TrainParty::TrainPartyBuildSlotInfo* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildSlotInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SYSTEM_ICOMPARABLE_RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO__COMPARETO_OFFSET))(this, a1);
		}

		::System::UInt32 get_SlotID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_SLOTID_OFFSET))(this);
		}

		::System::Void set_SlotID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SET_SLOTID_OFFSET))(this, a1);
		}

		::RPG::GameCore::PlayerRoomSlotConfigRow* get_Row()
		{
			return ((::RPG::GameCore::PlayerRoomSlotConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyBuildDIYItem* get_DIYItem()
		{
			return ((::RPG::Client::TrainParty::TrainPartyBuildDIYItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_GET_DIYITEM_OFFSET))(this);
		}

		::System::Void set_DIYItem(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYBUILDSLOTINFO_SET_DIYITEM_OFFSET))(this, a1);
		}

	};
}
