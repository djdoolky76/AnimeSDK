#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LIELJCGKNJN;
namespace RPG::Client { class CakeRaceGameVoteEffectData; }
namespace RPG::Client { class CakeRaceParticipantData; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC91AC50)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xC91ADB0)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_EFFECTID_OFFSET UNITYSDK_OFFSET(0xC91AD20)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_PARTICIPANTDATALIST_OFFSET UNITYSDK_OFFSET(0xC91AD70)
#define RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_VOTEPLAYERIDLIST_OFFSET UNITYSDK_OFFSET(0xC91ACD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceGameVoteEffectData_TypeDefinitionIndex = 63069;

	class CakeRaceGameVoteEffectData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeRaceParticipantData*>* _ParticipantDataList; // 0x10
		::LIELJCGKNJN* _VoteData; // 0x18
		::System::Void _ctor(::LIELJCGKNJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIELJCGKNJN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_VotePlayerIdList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_VOTEPLAYERIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_EffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_EFFECTID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceParticipantData*>* get_ParticipantDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::CakeRaceParticipantData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_GET_PARTICIPANTDATALIST_OFFSET))(this);
		}

		static ::RPG::Client::CakeRaceGameVoteEffectData* Create(::LIELJCGKNJN* a1)
		{
			return ((::RPG::Client::CakeRaceGameVoteEffectData*(*)(::LIELJCGKNJN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACEGAMEVOTEEFFECTDATA_CREATE_OFFSET))(a1);
		}

	};
}
