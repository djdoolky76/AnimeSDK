#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ENVIRONMENTHINTMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE0050)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMazeViewModel_EnvironmentHintMessage_TypeDefinitionIndex = 84372;

	class ChallengeTierceMazeViewModel_EnvironmentHintMessage : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_ENVIRONMENTHINTMESSAGE_CTOR_OFFSET))(this);
		}

	};
}
