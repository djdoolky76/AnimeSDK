#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJLMHMNAILH;
class MDBIICBGNGF;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0xDF860C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0xDF86070)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDF850C0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_GET_RECOMMEMBERS_OFFSET UNITYSDK_OFFSET(0xDF863F0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_INIT_OFFSET UNITYSDK_OFFSET(0xDF86330)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_ISVALIDMEMBER_OFFSET UNITYSDK_OFFSET(0xDF86390)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamRecomResult_TypeDefinitionIndex = 67542;

	class RogueTournBuildRefTeamRecomResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* _RecomMembers_k__BackingField; // 0x10
		::MDBIICBGNGF* _Context; // 0x18
		::FJLMHMNAILH* _Strategy; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::FJLMHMNAILH* a1, ::MDBIICBGNGF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FJLMHMNAILH*, ::MDBIICBGNGF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsValidMember(::RPG::Client::IRogueTournBuildRefTeamMemberData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_ISVALIDMEMBER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* get_RecomMembers()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_GET_RECOMMEMBERS_OFFSET))(this);
		}

	};
}
