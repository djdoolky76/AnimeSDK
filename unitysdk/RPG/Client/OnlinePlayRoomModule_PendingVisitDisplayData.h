#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBPDACMBHGL.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xD9F1580)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_GET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xD9F5370)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_GET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xD9F5390)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_SET_PLAYERBRIEFDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0xD9F5380)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_SET_ROOMTYPE_OFFSET UNITYSDK_OFFSET(0xD9F53A0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule_PendingVisitDisplayData_TypeDefinitionIndex = 66399;

	class OnlinePlayRoomModule_PendingVisitDisplayData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* _PlayerBriefDisplayData_k__BackingField; // 0x10
		::CBPDACMBHGL _RoomType_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::Client::PlayerBriefDisplayData* a1, ::CBPDACMBHGL a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::PlayerBriefDisplayData* get_PlayerBriefDisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_GET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this);
		}

		::System::Void set_PlayerBriefDisplayData(::RPG::Client::PlayerBriefDisplayData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerBriefDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_SET_PLAYERBRIEFDISPLAYDATA_OFFSET))(this, a1);
		}

		::CBPDACMBHGL get_RoomType()
		{
			return ((::CBPDACMBHGL(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_GET_ROOMTYPE_OFFSET))(this);
		}

		::System::Void set_RoomType(::CBPDACMBHGL a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBPDACMBHGL))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE_PENDINGVISITDISPLAYDATA_SET_ROOMTYPE_OFFSET))(this, a1);
		}

	};
}
