#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBHLNAHOJOH;
namespace RPG::Client { class CakeRaceFriendRankingData; }
namespace RPG::Client { class PlayerBriefDisplayData; }

#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_ADDLIKE_OFFSET UNITYSDK_OFFSET(0x1D2EE500)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D2ED690)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EEDA0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0x1D2EEE40)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_DISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1D2EEF90)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISLIKED_OFFSET UNITYSDK_OFFSET(0x1D2EEEA0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x1D2ED7C0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_LIKENUM_OFFSET UNITYSDK_OFFSET(0x1D2EEE60)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1D2EEE80)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x1D2EEE30)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0x1D2EE2C0)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETRANK_OFFSET UNITYSDK_OFFSET(0x1D2EE310)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_ACCUMULATECOIN_OFFSET UNITYSDK_OFFSET(0x1D2EEE50)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_LIKENUM_OFFSET UNITYSDK_OFFSET(0x1D2EEE70)
#define RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x1D2EEE90)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceFriendRankingData_TypeDefinitionIndex = 64467;

	class CakeRaceFriendRankingData : public ::System::Object
	{
	public:
		::RPG::Client::PlayerBriefDisplayData* _DisplayData_k__BackingField; // 0x10
		::System::UInt32 _Uid_k__BackingField; // 0x18
		::System::UInt32 _Rank_k__BackingField; // 0x1C
		::System::UInt32 _AccumulateCoin_k__BackingField; // 0x20
		::System::UInt32 _LikeNum_k__BackingField; // 0x24
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::CakeRaceFriendRankingData* Create(::JBHLNAHOJOH* a1)
		{
			return ((::RPG::Client::CakeRaceFriendRankingData*(*)(::JBHLNAHOJOH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_CREATE_OFFSET))(a1);
		}

		::System::Void AddLike(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_ADDLIKE_OFFSET))(this, a1);
		}

		::System::Void SetRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETRANK_OFFSET))(this, a1);
		}

		::System::Void SetAccumulateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SETACCUMULATECOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_AccumulateCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ACCUMULATECOIN_OFFSET))(this);
		}

		::System::Void set_AccumulateCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_ACCUMULATECOIN_OFFSET))(this, a1);
		}

		::System::UInt32 get_LikeNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_LIKENUM_OFFSET))(this);
		}

		::System::Void set_LikeNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_LIKENUM_OFFSET))(this, a1);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_SET_RANK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsLiked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISLIKED_OFFSET))(this);
		}

		::RPG::Client::PlayerBriefDisplayData* get_DisplayData()
		{
			return ((::RPG::Client::PlayerBriefDisplayData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_DISPLAYDATA_OFFSET))(this);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEFRIENDRANKINGDATA_GET_ISSELF_OFFSET))(this);
		}

	};
}
