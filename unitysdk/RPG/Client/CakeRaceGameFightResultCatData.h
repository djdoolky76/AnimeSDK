#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IAJMCLGLAAC;
namespace RPG::Client { class CakeRaceCatDataItem; }
namespace RPG::Client { class CakeRaceGameFightResultCatData; }
namespace RPG::Client { class CakeRaceGameFightResultParticipantData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2EF110)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EF1F0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_CATCONFIGID_OFFSET UNITYSDK_OFFSET(0x1D2EEFC0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0x1D2EEFA0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_FIGHTRESULTPARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0x1D2EF010)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_ODDS_OFFSET UNITYSDK_OFFSET(0x1D2EF050)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1D2EF0F0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_SPECIALODDS_OFFSET UNITYSDK_OFFSET(0x1D2EF0A0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0x1D2EF3A0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SET_CATDATAITEM_OFFSET UNITYSDK_OFFSET(0x1D2EEFB0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1D2EF100)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__INITPARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0x1D2EF3F0)
#define RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__INIT_OFFSET UNITYSDK_OFFSET(0x1D2EF250)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameFightResultCatData_TypeDefinitionIndex = 64462;

	class CakeRaceGameFightResultCatData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>* _FightResultParticipantDataList; // 0x10
		::RPG::Client::CakeRaceCatDataItem* _CatDataItem_k__BackingField; // 0x18
		::IAJMCLGLAAC* _FightResultCatData; // 0x20
		::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>* _ParticipantMap; // 0x28
		::System::UInt32 _Rank_k__BackingField; // 0x30
		::System::Void _ctor(::IAJMCLGLAAC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJMCLGLAAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::CakeRaceCatDataItem* get_CatDataItem()
		{
			return ((::RPG::Client::CakeRaceCatDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_CATDATAITEM_OFFSET))(this);
		}

		::System::Void set_CatDataItem(::RPG::Client::CakeRaceCatDataItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceCatDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SET_CATDATAITEM_OFFSET))(this, a1);
		}

		::System::UInt32 get_CatConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_CATCONFIGID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>* get_FightResultParticipantDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameFightResultParticipantData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_FIGHTRESULTPARTICIPANTDATALIST_OFFSET))(this);
		}

		::System::UInt32 get_Odds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_ODDS_OFFSET))(this);
		}

		::System::UInt32 get_SpecialOdds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_SPECIALODDS_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SET_RANK_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceGameFightResultCatData* Create(::IAJMCLGLAAC* a1, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>* a2)
		{
			return ((::RPG::Client::CakeRaceGameFightResultCatData*(*)(::IAJMCLGLAAC*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::RPG::Client::CakeRaceGameFightResultParticipantData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_CREATE_OFFSET))(a1, a2);
		}

		::System::Void SetRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA_SETRANK_OFFSET))(this, a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__INIT_OFFSET))(this);
		}

		::System::Void _InitParticipantDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEFIGHTRESULTCATDATA__INITPARTICIPANTDATALIST_OFFSET))(this);
		}

	};
}
