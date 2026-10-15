#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xDF8EC10)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDF8E950)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF8F000)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_GET_MEMBERCANDIDATES_OFFSET UNITYSDK_OFFSET(0xDF8F070)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xDF8E990)

namespace RPG::Client
{
	class RogueTournBuildRefTeamData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*>* _MemberCandidates_k__BackingField; // 0x10
		// static const ::System::Object SlotCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*>* get_MemberCandidates()
		{
			return ((::System::Collections::Generic::List_1<::RPG::PoolList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMDATA_GET_MEMBERCANDIDATES_OFFSET))(this);
		}

	};
}
