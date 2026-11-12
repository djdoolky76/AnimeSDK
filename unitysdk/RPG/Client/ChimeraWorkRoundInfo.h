#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GADFFIFFNHM;
namespace RPG::Client { class ChimeraWorkRoundData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHIMERAWORKROUNDINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD4D0550)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD4CE640)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GETCURRENTDISPLAYROUNDDATA_OFFSET UNITYSDK_OFFSET(0xD4CEB20)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GETCURRENTROUNDDATA_OFFSET UNITYSDK_OFFSET(0xD4CE920)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GETGALLARYUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xD4CEF40)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GETROUNDDATA_OFFSET UNITYSDK_OFFSET(0xD4CEA70)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_ALLUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xD4CE390)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_FINALROUNDFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xD4CE350)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_FINALROUNDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0xD4CE370)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_LASTROUNDID_OFFSET UNITYSDK_OFFSET(0xD4CE310)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_NEWLYUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xD4CE3B0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_SERVERROUNDID_OFFSET UNITYSDK_OFFSET(0xD4CE330)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD4CE3D0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_ISCURRENTROUNDMISSIONOPTIONFINISH_OFFSET UNITYSDK_OFFSET(0xD4CECE0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_ISFINALROUNDFINISH_OFFSET UNITYSDK_OFFSET(0xD4CE9C0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_ISINFINALROUND_OFFSET UNITYSDK_OFFSET(0xD4CE7E0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_ALLUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xD4CE3A0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_FINALROUNDFINISHWORKCNT_OFFSET UNITYSDK_OFFSET(0xD4CE360)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_FINALROUNDSUBROUNDID_OFFSET UNITYSDK_OFFSET(0xD4CE380)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_LASTROUNDID_OFFSET UNITYSDK_OFFSET(0xD4CE320)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_NEWLYUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xD4CE3C0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_SERVERROUNDID_OFFSET UNITYSDK_OFFSET(0xD4CE340)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCFINALROUNDINFO_OFFSET UNITYSDK_OFFSET(0xD4CE740)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCNEWLYUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xD4D0360)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCROUNDID_OFFSET UNITYSDK_OFFSET(0xD4CE6E0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xD4D0170)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0xD4CF1F0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO_UPDATEFINALROUNDFINISH_OFFSET UNITYSDK_OFFSET(0xD4CE7A0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO__ISROUNDALLSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xD4CFBB0)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO__ISROUNDANYSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0xD4CFE90)
#define RPG_CLIENT_CHIMERAWORKROUNDINFO__SYNCUNLOCKEDCHIMERAS_OFFSET UNITYSDK_OFFSET(0xD4D02F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraWorkRoundInfo_TypeDefinitionIndex = 64944;

	class ChimeraWorkRoundInfo : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _AllUnlockedChimeras_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _NewlyUnlockedChimeras_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ChimeraWorkRoundData*>* _ChimeraWorkRoundDataDict; // 0x20
		::System::UInt32 _LastRoundID_k__BackingField; // 0x28
		::System::UInt32 _FinalRoundSubRoundID_k__BackingField; // 0x2C
		::System::UInt32 _ServerRoundID_k__BackingField; // 0x30
		::System::UInt32 _FinalRoundFinishWorkCnt_k__BackingField; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_LastRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_LASTROUNDID_OFFSET))(this);
		}

		::System::Void set_LastRoundID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_LASTROUNDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ServerRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_SERVERROUNDID_OFFSET))(this);
		}

		::System::Void set_ServerRoundID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_SERVERROUNDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinalRoundFinishWorkCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_FINALROUNDFINISHWORKCNT_OFFSET))(this);
		}

		::System::Void set_FinalRoundFinishWorkCnt(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_FINALROUNDFINISHWORKCNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_FinalRoundSubRoundID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_FINALROUNDSUBROUNDID_OFFSET))(this);
		}

		::System::Void set_FinalRoundSubRoundID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_FINALROUNDSUBROUNDID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_AllUnlockedChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_ALLUNLOCKEDCHIMERAS_OFFSET))(this);
		}

		::System::Void set_AllUnlockedChimeras(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_ALLUNLOCKEDCHIMERAS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_NewlyUnlockedChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GET_NEWLYUNLOCKEDCHIMERAS_OFFSET))(this);
		}

		::System::Void set_NewlyUnlockedChimeras(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SET_NEWLYUNLOCKEDCHIMERAS_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncRoundID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCROUNDID_OFFSET))(this, a1, a2);
		}

		::System::Void SyncFinalRoundInfo(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCFINALROUNDINFO_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateFinalRoundFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_UPDATEFINALROUNDFINISH_OFFSET))(this);
		}

		::System::Boolean IsInFinalRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_ISINFINALROUND_OFFSET))(this);
		}

		::System::Boolean IsFinalRoundFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_ISFINALROUNDFINISH_OFFSET))(this);
		}

		::RPG::Client::ChimeraWorkRoundData* GetCurrentRoundData()
		{
			return ((::RPG::Client::ChimeraWorkRoundData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GETCURRENTROUNDDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::ChimeraWorkRoundData*>* GetCurrentDisplayRoundData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::ChimeraWorkRoundData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GETCURRENTDISPLAYROUNDDATA_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* GetGallaryUnlockedChimeras()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GETGALLARYUNLOCKEDCHIMERAS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::UInt32>* TryGetCurrentRoundOptionMainMissionData()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_TRYGETCURRENTROUNDOPTIONMAINMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* IsCurrentRoundMissionOptionFinish()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_ISCURRENTROUNDMISSIONOPTIONFINISH_OFFSET))(this);
		}

		::RPG::Client::ChimeraWorkRoundData* GetRoundData(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraWorkRoundData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_GETROUNDDATA_OFFSET))(this, a1);
		}

		::System::Void SyncUnlockedChimeras(::System::Collections::Generic::IEnumerable_1<::GADFFIFFNHM*>* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GADFFIFFNHM*>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCUNLOCKEDCHIMERAS_OFFSET))(this, a1, a2);
		}

		::System::Void SyncNewlyUnlockedChimeras(::System::Collections::Generic::IEnumerable_1<::GADFFIFFNHM*>* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GADFFIFFNHM*>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO_SYNCNEWLYUNLOCKEDCHIMERAS_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncUnlockedChimeras(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO__SYNCUNLOCKEDCHIMERAS_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _IsRoundAllSubMissionFinished(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO__ISROUNDALLSUBMISSIONFINISHED_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _IsRoundAnySubMissionFinished(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAWORKROUNDINFO__ISROUNDANYSUBMISSIONFINISHED_OFFSET))(this, a1);
		}

	};
}
