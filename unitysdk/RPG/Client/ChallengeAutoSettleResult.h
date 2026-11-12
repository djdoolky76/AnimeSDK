#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_ADDFINISHEDCHALLENGEID_OFFSET UNITYSDK_OFFSET(0xD2D95C0)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0xD2D9540)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_CTOR_OFFSET UNITYSDK_OFFSET(0xD2D9490)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_GETAUTOFINISHEDREWARDS_OFFSET UNITYSDK_OFFSET(0xD2D9650)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_ISVALID_OFFSET UNITYSDK_OFFSET(0xD2D9320)
#define RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_RECORDALREADYFINISHEDCHALLENGEIDS_OFFSET UNITYSDK_OFFSET(0xD2D9BE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeAutoSettleResult_TypeDefinitionIndex = 64538;

	class ChallengeAutoSettleResult : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* AlreadyFinishedChallengeIDList; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* AutoFinishedChallengeIDList; // 0x18
		::System::UInt32 CurSettledChallengeID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_ISVALID_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_CLEAR_OFFSET))(this);
		}

		::System::Void AddFinishedChallengeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_ADDFINISHEDCHALLENGEID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetAutoFinishedRewards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_GETAUTOFINISHEDREWARDS_OFFSET))(this);
		}

		::System::Void RecordAlreadyFinishedChallengeIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEAUTOSETTLERESULT_RECORDALREADYFINISHEDCHALLENGEIDS_OFFSET))(this);
		}

	};
}
