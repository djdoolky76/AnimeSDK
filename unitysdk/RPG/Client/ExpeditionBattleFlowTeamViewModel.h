#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class FGAAFLAALBF;
class GPOJDMAFJDE;
namespace RPG::Client { class ExpeditionBattleRoute; }
namespace RPG::Client { class ExpeditionBattleTeam; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD80F000)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xD80F040)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETBOARDAVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xD80F0E0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETCOMMONTALK_OFFSET UNITYSDK_OFFSET(0xD80F640)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETSTARTTALK_OFFSET UNITYSDK_OFFSET(0xD80F180)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETVICTORYTALK_OFFSET UNITYSDK_OFFSET(0xD80F7B0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_MAINMONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0xD80EFC0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xD80EFE0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_TEAMINDEX_OFFSET UNITYSDK_OFFSET(0xD80EF80)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_TEAM_OFFSET UNITYSDK_OFFSET(0xD80EFA0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_MAINMONSTERICONPATH_OFFSET UNITYSDK_OFFSET(0xD80EFD0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_ROUTEID_OFFSET UNITYSDK_OFFSET(0xD80EFF0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_TEAMINDEX_OFFSET UNITYSDK_OFFSET(0xD80EF90)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_TEAM_OFFSET UNITYSDK_OFFSET(0xD80EFB0)
#define RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL__GETFIRSTAVAILABLETALK_OFFSET UNITYSDK_OFFSET(0xD80F2F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleFlowTeamViewModel_TypeDefinitionIndex = 65358;

	class ExpeditionBattleFlowTeamViewModel : public ::System::Object
	{
	public:
		::System::String* _MainMonsterIconPath_k__BackingField; // 0x10
		::GPOJDMAFJDE* _DisplayService; // 0x18
		::RPG::Client::ExpeditionBattleTeam* _Team_k__BackingField; // 0x20
		::System::Int32 _TeamIndex_k__BackingField; // 0x28
		::System::UInt32 _RouteID_k__BackingField; // 0x2C
		::System::Void _ctor(::System::Int32 a1, ::RPG::Client::ExpeditionBattleTeam* a2, ::RPG::Client::ExpeditionBattleRoute* a3, ::GPOJDMAFJDE* a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::ExpeditionBattleTeam*, ::RPG::Client::ExpeditionBattleRoute*, ::GPOJDMAFJDE*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Int32 get_TeamIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_TEAMINDEX_OFFSET))(this);
		}

		::System::Void set_TeamIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_TEAMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::ExpeditionBattleTeam* get_Team()
		{
			return ((::RPG::Client::ExpeditionBattleTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::Client::ExpeditionBattleTeam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ExpeditionBattleTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_TEAM_OFFSET))(this, a1);
		}

		::System::String* get_MainMonsterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_MAINMONSTERICONPATH_OFFSET))(this);
		}

		::System::Void set_MainMonsterIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_MAINMONSTERICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_RouteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GET_ROUTEID_OFFSET))(this);
		}

		::System::Void set_RouteID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_SET_ROUTEID_OFFSET))(this, a1);
		}

		::System::String* GetAvatarIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETAVATARICONPATH_OFFSET))(this, a1);
		}

		::System::String* GetBoardAvatarIconPath(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETBOARDAVATARICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetStartTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETSTARTTALK_OFFSET))(this);
		}

		::RPG::Client::TextID GetCommonTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETCOMMONTALK_OFFSET))(this);
		}

		::RPG::Client::TextID GetVictoryTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL_GETVICTORYTALK_OFFSET))(this);
		}

		::RPG::Client::TextID _GetFirstAvailableTalk(::System::Func_2<::FGAAFLAALBF*, ::RPG::Client::TextID>* a1)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::Func_2<::FGAAFLAALBF*, ::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEFLOWTEAMVIEWMODEL__GETFIRSTAVAILABLETALK_OFFSET))(this, a1);
		}

	};
}
