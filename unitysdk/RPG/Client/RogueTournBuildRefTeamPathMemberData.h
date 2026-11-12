#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class AvatarPath; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_CLEAR_OFFSET UNITYSDK_OFFSET(0xEA40700)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xEA40630)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEA407A0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_GET_PATHS_OFFSET UNITYSDK_OFFSET(0xEA40F70)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_ISVALIDFORRECOM_OFFSET UNITYSDK_OFFSET(0xEA40810)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEA40670)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamPathMemberData_TypeDefinitionIndex = 69483;

	class RogueTournBuildRefTeamPathMemberData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarPath*>* _Paths_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_DISPOSE_OFFSET))(this);
		}

		::System::Boolean IsValidForRecom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_ISVALIDFORRECOM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarPath*>* get_Paths()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::AvatarPath*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMPATHMEMBERDATA_GET_PATHS_OFFSET))(this);
		}

	};
}
