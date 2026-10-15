#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FECGDOJFDIM;
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CYCLESCOREREWARDCLAIMEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE5690)

namespace RPG::Client
{
	inline static constexpr unsigned int CycleScoreRewardClaimEvent_TypeDefinitionIndex = 63545;

	class CycleScoreRewardClaimEvent : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ClaimedItemDisplayDatas; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* ExceedLimitScoreRanks; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* ExceedItemDisplayDatas; // 0x20
		::System::Void _ctor(::FECGDOJFDIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FECGDOJFDIM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CYCLESCOREREWARDCLAIMEVENT_CTOR_OFFSET))(this, a1);
		}

	};
}
