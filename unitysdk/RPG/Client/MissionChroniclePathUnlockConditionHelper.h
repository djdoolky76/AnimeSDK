#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGIFJCAJCPA;
namespace RPG::Client { class IMissionChroniclePathUnlockConditionData; }
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER_COLLECTUNLOCKCONDITIONS_OFFSET UNITYSDK_OFFSET(0xD6D5870)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER_GETLOCATIONTEXT_OFFSET UNITYSDK_OFFSET(0xD6D3660)
#define RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER__INITUNLOCKCONDITIONCOLLECTORS_OFFSET UNITYSDK_OFFSET(0xD6D6100)

namespace RPG::Client
{
	class MissionChroniclePathUnlockConditionHelper : public ::System::Object
	{
	public:
		static ::RPG::Client::Promises::IPromise* CollectUnlockConditions(::RPG::Client::MissionChronicleBasePathData* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::RPG::Client::MissionChronicleBasePathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER_COLLECTUNLOCKCONDITIONS_OFFSET))(a1);
		}

		static ::System::Void _InitUnlockConditionCollectors(::RPG::Client::MissionChronicleBasePathData* a1, ::System::Collections::Generic::ICollection_1<::HGIFJCAJCPA*>* a2)
		{
			return ((::System::Void(*)(::RPG::Client::MissionChronicleBasePathData*, ::System::Collections::Generic::ICollection_1<::HGIFJCAJCPA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER__INITUNLOCKCONDITIONCOLLECTORS_OFFSET))(a1, a2);
		}

		static ::System::String* GetLocationText(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEPATHUNLOCKCONDITIONHELPER_GETLOCATIONTEXT_OFFSET))(a1);
		}

	};
}
