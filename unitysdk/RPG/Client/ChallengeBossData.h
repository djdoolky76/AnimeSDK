#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengeData.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class ALIOECIFDKK;
class IPALENCIHFB;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeBossSingleNodeInfo; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class MonsterGuideData; }
namespace RPG::GameCore { class ChallengeBossMazeExtraConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6F4A20)
#define RPG_CLIENT_CHALLENGEBOSSDATA_EVERENTERED_OFFSET UNITYSDK_OFFSET(0x1B6F6420)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET UNITYSDK_OFFSET(0x1B6F57F0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCHALLENGEBOSSSINGLENODEINFO_OFFSET UNITYSDK_OFFSET(0x1B6F5370)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCOVERBOSSMONSTERID_OFFSET UNITYSDK_OFFSET(0x1B6F4FE0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETCURRENTTEAMMAXSCORE_OFFSET UNITYSDK_OFFSET(0x1B6F64B0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETDESCRIPTIONPARAMS_OFFSET UNITYSDK_OFFSET(0x1B6F5230)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1B6F5190)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x1B6F52C0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERGUIDEDATA_OFFSET UNITYSDK_OFFSET(0x1B6F53F0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETUPGRADEAVAILABLEAVATAR_OFFSET UNITYSDK_OFFSET(0x1B6F5F60)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GETVORACITYINVASIONLEVEL_OFFSET UNITYSDK_OFFSET(0x1B6F5480)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x1B6F4A00)
#define RPG_CLIENT_CHALLENGEBOSSDATA_GET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x1B6F49B0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_HASEVERREACHEDEND_OFFSET UNITYSDK_OFFSET(0x1B6F63D0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_ISADDTOSHOWMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x1B6F6540)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1B6F5F00)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SET_BOSSEXTRAINFOROW_OFFSET UNITYSDK_OFFSET(0x1B6F4A10)
#define RPG_CLIENT_CHALLENGEBOSSDATA_SYNCARCHIVEEXTINFO_OFFSET UNITYSDK_OFFSET(0x1B6F5B60)
#define RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESCORE_OFFSET UNITYSDK_OFFSET(0x1B6F60C0)
#define RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESINGLENODEINFO_OFFSET UNITYSDK_OFFSET(0x1B6F61B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossData_TypeDefinitionIndex = 64515;

	class ChallengeBossData : public ::RPG::Client::ChallengeData
	{
	public:
		::Il2CppArray<::RPG::Client::ChallengeBossSingleNodeInfo*>* _NodeInfos; // 0x68
		::System::Collections::Generic::List_1<::RPG::Client::MonsterGuideData*>* _MonsterGuides; // 0x70
		::RPG::GameCore::ChallengeBossMazeExtraConfigRow* _BossExtraInfoRow_k__BackingField; // 0x78
		::System::Boolean EverReachEnd; // 0x80
		// static const ::System::Object NodeNum; // 0x0
		// static const ::System::Object _MonsterGuideMaxCount; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ChallengeGroupType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_NodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GET_NODECOUNT_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeBossMazeExtraConfigRow* get_BossExtraInfoRow()
		{
			return ((::RPG::GameCore::ChallengeBossMazeExtraConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GET_BOSSEXTRAINFOROW_OFFSET))(this);
		}

		::System::Void set_BossExtraInfoRow(::RPG::GameCore::ChallengeBossMazeExtraConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeBossMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SET_BOSSEXTRAINFOROW_OFFSET))(this, a1);
		}

		::RPG::Client::TextID GetDescription()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETDESCRIPTION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* GetDescriptionParams()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETDESCRIPTIONPARAMS_OFFSET))(this);
		}

		::System::UInt32 GetCoverBossMonsterID(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETCOVERBOSSMONSTERID_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterData* GetMonsterData(::System::Int32 a1)
		{
			return ((::RPG::Client::MonsterData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERDATA_OFFSET))(this, a1);
		}

		::RPG::Client::MonsterGuideData* GetMonsterGuideData(::System::Int32 a1)
		{
			return ((::RPG::Client::MonsterGuideData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETMONSTERGUIDEDATA_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengeBossSingleNodeInfo* GetChallengeBossSingleNodeInfo(::System::Int32 a1)
		{
			return ((::RPG::Client::ChallengeBossSingleNodeInfo*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETCHALLENGEBOSSSINGLENODEINFO_OFFSET))(this, a1);
		}

		::System::Int32 GetVoracityInvasionLevel(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETVORACITYINVASIONLEVEL_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetAllWaveMonsterDataByStageIndexAndEventIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETALLWAVEMONSTERDATABYSTAGEINDEXANDEVENTINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void SyncArchiveExtInfo(::ALIOECIFDKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALIOECIFDKK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SYNCARCHIVEEXTINFO_OFFSET))(this, a1);
		}

		::System::Void SaveExtInfoWhenEnterChallenge(::IPALENCIHFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPALENCIHFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_SAVEEXTINFOWHENENTERCHALLENGE_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GetUpgradeAvailableAvatar(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETUPGRADEAVAILABLEAVATAR_OFFSET))(this, a1);
		}

		::System::Void UpdateScore(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESCORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateSingleNodeInfo(::System::Int32 a1, ::System::Boolean a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_UPDATESINGLENODEINFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean HasEverReachedEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_HASEVERREACHEDEND_OFFSET))(this);
		}

		::System::Boolean EverEntered()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_EVERENTERED_OFFSET))(this);
		}

		::System::UInt32 GetCurrentTeamMaxScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_GETCURRENTTEAMMAXSCORE_OFFSET))(this);
		}

		::System::Boolean IsAddToShowMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSDATA_ISADDTOSHOWMAXLEVEL_OFFSET))(this);
		}

	};
}
