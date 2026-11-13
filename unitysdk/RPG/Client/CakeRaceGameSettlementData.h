#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGJAKGPJCKB;
namespace RPG::Client { class CakeRaceGameSettlementData; }
namespace RPG::Client { class CakeRaceGameSettlementTitleData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2F71F0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F72C0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_GAMEEND_OFFSET UNITYSDK_OFFSET(0x1D2F6FB0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITCOIN_OFFSET UNITYSDK_OFFSET(0x1D2F70C0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITSCORE_OFFSET UNITYSDK_OFFSET(0x1D2F7110)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1D2F6FD0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SCORE_OFFSET UNITYSDK_OFFSET(0x1D2F7160)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SETTLEMENTTITLEDATALIST_OFFSET UNITYSDK_OFFSET(0x1D2F71B0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITCOIN_OFFSET UNITYSDK_OFFSET(0x1D2F7020)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITSCORE_OFFSET UNITYSDK_OFFSET(0x1D2F7070)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_SET_GAMEEND_OFFSET UNITYSDK_OFFSET(0x1D2F6FC0)
#define RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__INIT_OFFSET UNITYSDK_OFFSET(0x1D2F7320)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameSettlementData_TypeDefinitionIndex = 64502;

	class CakeRaceGameSettlementData : public ::System::Object
	{
	public:
		::FGJAKGPJCKB* _GameEnd_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceGameSettlementTitleData*>* _SettlementTitleDataList; // 0x18
		::System::Void _ctor(::FGJAKGPJCKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGJAKGPJCKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_CTOR_OFFSET))(this, a1);
		}

		::FGJAKGPJCKB* get_GameEnd()
		{
			return ((::FGJAKGPJCKB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_GAMEEND_OFFSET))(this);
		}

		::System::Void set_GameEnd(::FGJAKGPJCKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGJAKGPJCKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_SET_GAMEEND_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_RANK_OFFSET))(this);
		}

		::System::Int32 get_TotalProfitCoin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITCOIN_OFFSET))(this);
		}

		::System::UInt32 get_TotalProfitScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_TOTALPROFITSCORE_OFFSET))(this);
		}

		::System::Int32 get_MaxProfitCoin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITCOIN_OFFSET))(this);
		}

		::System::UInt32 get_MaxProfitScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_MAXPROFITSCORE_OFFSET))(this);
		}

		::System::UInt32 get_Score()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SCORE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameSettlementTitleData*>* get_SettlementTitleDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceGameSettlementTitleData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_GET_SETTLEMENTTITLEDATALIST_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameSettlementData* Create(::FGJAKGPJCKB* a1)
		{
			return ((::RPG::Client::CakeRaceGameSettlementData*(*)(::FGJAKGPJCKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA_CREATE_OFFSET))(a1);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMESETTLEMENTDATA__INIT_OFFSET))(this);
		}

	};
}
