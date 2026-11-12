#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDMFOJKAHFC;
class JOCIBBFJPMP;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengePeak; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_BUILDLOCALDATA_OFFSET UNITYSDK_OFFSET(0xE6856D0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE685640)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xE685D50)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEPEAKMOB_OFFSET UNITYSDK_OFFSET(0xE685D10)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_FINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0xE685DC0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xE685D30)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0xE685D70)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0xE685DE0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_PEAKID_OFFSET UNITYSDK_OFFSET(0xE685CF0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xE685D60)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEPEAKMOB_OFFSET UNITYSDK_OFFSET(0xE685D20)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_FINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0xE685DD0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0xE685D40)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0xE685DF0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_PEAKID_OFFSET UNITYSDK_OFFSET(0xE685D00)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SYNC_OFFSET UNITYSDK_OFFSET(0xE685770)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0xE685990)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordMobData_TypeDefinitionIndex = 65711;

	class PlayerChallengePeakRecordMobData : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeak* _ChallengePeakMob_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedTargetIDList_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _ChallengeAvatarDataList_k__BackingField; // 0x20
		::System::UInt32 _MinUseTurn_k__BackingField; // 0x28
		::System::Boolean _IsClear_k__BackingField; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 _PeakID_k__BackingField; // 0x30
		// static const ::System::Object _MaxStarCount; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_CTOR_OFFSET))(this);
		}

		::System::Void BuildLocalData(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_BUILDLOCALDATA_OFFSET))(this, a1);
		}

		::System::Void Sync(::CDMFOJKAHFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDMFOJKAHFC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SYNC_OFFSET))(this, a1);
		}

		::System::Void _SyncLineup(::JOCIBBFJPMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCIBBFJPMP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA__SYNCLINEUP_OFFSET))(this, a1);
		}

		::System::UInt32 get_PeakID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_PEAKID_OFFSET))(this);
		}

		::System::Void set_PeakID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_PEAKID_OFFSET))(this, a1);
		}

		::RPG::Client::ChallengePeak* get_ChallengePeakMob()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEPEAKMOB_OFFSET))(this);
		}

		::System::Void set_ChallengePeakMob(::RPG::Client::ChallengePeak* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEPEAKMOB_OFFSET))(this, a1);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Void set_IsClear(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_ISCLEAR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_ChallengeAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_CHALLENGEAVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_ChallengeAvatarDataList(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_CHALLENGEAVATARDATALIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MaxStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MAXSTARCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedTargetIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_FINISHEDTARGETIDLIST_OFFSET))(this);
		}

		::System::Void set_FinishedTargetIDList(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_FINISHEDTARGETIDLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_MinUseTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_GET_MINUSETURN_OFFSET))(this);
		}

		::System::Void set_MinUseTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDMOBDATA_SET_MINUSETURN_OFFSET))(this, a1);
		}

	};
}
