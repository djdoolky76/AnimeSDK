#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_PROGRESSHINTMESSAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xC94A1C0)

namespace RPG::Client::Challenge::Tierce
{
	class ChallengeTierceMazeViewModel_ProgressHintMessage : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_PROGRESSHINTMESSAGE_CTOR_OFFSET))(this);
		}

	};
}
