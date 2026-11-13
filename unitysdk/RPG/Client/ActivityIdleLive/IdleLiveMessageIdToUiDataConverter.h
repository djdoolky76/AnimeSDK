#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MessageUiData; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C9130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET UNITYSDK_OFFSET(0x1D6C8E50)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveMessageIdToUiDataConverter_TypeDefinitionIndex = 77696;

	class IdleLiveMessageIdToUiDataConverter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER_CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageUiData* ProduceMessageUiData(::System::UInt32 a1)
		{
			return ((::RPG::Client::MessageUiData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVEMESSAGEIDTOUIDATACONVERTER_PRODUCEMESSAGEUIDATA_OFFSET))(this, a1);
		}

	};
}
