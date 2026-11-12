#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOOLBDIOCBO;
class KLJKOBOHPAB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBossFriendLineupRecommendation; }
namespace RPG::Client { class ChallengePeakBossStatisticsLineupRecommendation; }
namespace RPG::Client { class ChallengePeakGroup; }
namespace RPG::Client { class ChallengePeakNormalFriendLineupRecommendation; }
namespace RPG::Client { class ChallengePeakNormalStatisticsLineupRecommendation; }
namespace RPG::Client { class ChallengePeakTeam; }
namespace RPG::Client { class ChallengePeakTeamApplier; }
namespace RPG::Client { class ChallengePeakTeamContext; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_APPLYTEAM_OFFSET UNITYSDK_OFFSET(0xD31EA50)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMHASCHANGED_OFFSET UNITYSDK_OFFSET(0xD31DFA0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMISEMPTY_OFFSET UNITYSDK_OFFSET(0xD31DDC0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMNEEDFORCESAVE_OFFSET UNITYSDK_OFFSET(0xD31E180)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0xD31E7E0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0xD31E9C0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CREATE_OFFSET UNITYSDK_OFFSET(0xD30C4F0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0xD31D090)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_FILLLINEUPCONFLICTCHALLENGEPEAKSTO_OFFSET UNITYSDK_OFFSET(0xD31D5A0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETALLAVATARSOFNORMALLEVEL_OFFSET UNITYSDK_OFFSET(0xD31EBF0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETBOSSTEAM_OFFSET UNITYSDK_OFFSET(0xD31EBB0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAMBYID_OFFSET UNITYSDK_OFFSET(0xD31E360)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAM_OFFSET UNITYSDK_OFFSET(0xD31DD30)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xD31D070)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xD31D050)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0xD31CF70)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFTEAMSLOTS_OFFSET UNITYSDK_OFFSET(0xD31CFC0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xD31D030)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xD31D010)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETBOSSTEAM_OFFSET UNITYSDK_OFFSET(0xD31E6F0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0xD31E4D0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xD31D080)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xD31D060)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xD31D040)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALSTATISTICRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xD31D020)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKEQUIPMENTSOFSNAPSHOTAREEQUIPPEDBYTEAM_OFFSET UNITYSDK_OFFSET(0xD31EC50)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKHAVEEQUIPMENTCONFLICT_OFFSET UNITYSDK_OFFSET(0xD31D990)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CREATENORMALAVATARSOURCE_OFFSET UNITYSDK_OFFSET(0xD31D190)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITNORMALTEAMS_OFFSET UNITYSDK_OFFSET(0xD31D200)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITRECOMMENDATIONS_OFFSET UNITYSDK_OFFSET(0xD31D3F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamContext_TypeDefinitionIndex = 64631;

	class ChallengePeakTeamContext : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeakTeam* _BossTeam; // 0x10
		::RPG::Client::ChallengePeakGroup* _PeakGroup; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ChallengePeakTeam*>* _NormalTeams; // 0x20
		::JOOLBDIOCBO* _NormalAvatarSource; // 0x28
		::JOOLBDIOCBO* _BossAvatarSource; // 0x30
		::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* _NormalStatisticRecommendation_k__BackingField; // 0x38
		::RPG::Client::ChallengePeakBossFriendLineupRecommendation* _BossFriendRecommendation_k__BackingField; // 0x40
		::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* _BossStatisticRecommendation_k__BackingField; // 0x48
		::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* _NormalFriendRecommendation_k__BackingField; // 0x50
		::System::Void _ctor(::RPG::Client::ChallengePeakGroup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CountOfNormalTeams()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFNORMALTEAMS_OFFSET))(this);
		}

		::System::Int32 get_CountOfTeamSlots()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_COUNTOFTEAMSLOTS_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* get_NormalStatisticRecommendation()
		{
			return ((::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALSTATISTICRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_NormalStatisticRecommendation(::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakNormalStatisticsLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALSTATISTICRECOMMENDATION_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* get_NormalFriendRecommendation()
		{
			return ((::RPG::Client::ChallengePeakNormalFriendLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_NORMALFRIENDRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_NormalFriendRecommendation(::RPG::Client::ChallengePeakNormalFriendLineupRecommendation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakNormalFriendLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_NORMALFRIENDRECOMMENDATION_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* get_BossStatisticRecommendation()
		{
			return ((::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSSTATISTICRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_BossStatisticRecommendation(::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBossStatisticsLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSSTATISTICRECOMMENDATION_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakBossFriendLineupRecommendation* get_BossFriendRecommendation()
		{
			return ((::RPG::Client::ChallengePeakBossFriendLineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GET_BOSSFRIENDRECOMMENDATION_OFFSET))(this);
		}

		::System::Void set_BossFriendRecommendation(::RPG::Client::ChallengePeakBossFriendLineupRecommendation* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBossFriendLineupRecommendation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_SET_BOSSFRIENDRECOMMENDATION_OFFSET))(this, a1);
		}

		static ::RPG::Client::ChallengePeakTeamContext* Create(::RPG::Client::ChallengePeakGroup* a1)
		{
			return ((::RPG::Client::ChallengePeakTeamContext*(*)(::RPG::Client::ChallengePeakGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CREATE_OFFSET))(a1);
		}

		::System::Void FillLineupConflictChallengePeaksTo(::RPG::Client::ChallengePeak* a1, ::System::Collections::Generic::ICollection_1<::RPG::Client::ChallengePeak*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*, ::System::Collections::Generic::ICollection_1<::RPG::Client::ChallengePeak*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_FILLLINEUPCONFLICTCHALLENGEPEAKSTO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengePeakTeam* GetNormalTeam(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAM_OFFSET))(this, a1);
		}

		::System::Boolean CheckAnyNormalTeamIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMISEMPTY_OFFSET))(this);
		}

		::System::Boolean CheckAnyNormalTeamHasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMHASCHANGED_OFFSET))(this);
		}

		::System::Boolean CheckAnyNormalTeamNeedForceSave()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CHECKANYNORMALTEAMNEEDFORCESAVE_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakTeam* GetNormalTeamByID(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETNORMALTEAMBYID_OFFSET))(this, a1);
		}

		::System::Void ResetNormalTeams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETNORMALTEAMS_OFFSET))(this);
		}

		::System::Void ResetBossTeam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_RESETBOSSTEAM_OFFSET))(this);
		}

		::System::Void ClearNormalTeams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARNORMALTEAMS_OFFSET))(this);
		}

		::System::Void ClearRecommendations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_CLEARRECOMMENDATIONS_OFFSET))(this);
		}

		::System::Void ApplyTeam(::RPG::Client::ChallengePeakTeamApplier* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakTeamApplier*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_APPLYTEAM_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeakTeam* GetBossTeam()
		{
			return ((::RPG::Client::ChallengePeakTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETBOSSTEAM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAllAvatarsOfNormalLevel()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT_GETALLAVATARSOFNORMALLEVEL_OFFSET))(this);
		}

		::JOOLBDIOCBO* _CreateNormalAvatarSource()
		{
			return ((::JOOLBDIOCBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CREATENORMALAVATARSOURCE_OFFSET))(this);
		}

		::System::Void _InitNormalTeams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITNORMALTEAMS_OFFSET))(this);
		}

		::System::Boolean _CheckHaveEquipmentConflict(::RPG::Client::ChallengePeak* a1, ::RPG::Client::ChallengePeak* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeak*, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKHAVEEQUIPMENTCONFLICT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckEquipmentsOfSnapshotAreEquippedByTeam(::KLJKOBOHPAB* a1, ::System::Collections::Generic::HashSet_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLJKOBOHPAB*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__CHECKEQUIPMENTSOFSNAPSHOTAREEQUIPPEDBYTEAM_OFFSET))(this, a1, a2);
		}

		::System::Void _InitRecommendations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT__INITRECOMMENDATIONS_OFFSET))(this);
		}

	};
}
