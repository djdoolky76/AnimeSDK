#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE3780)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceRecordBase_TypeDefinitionIndex = 84244;

	class ChallengeTierceRecordBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCERECORDBASE_CTOR_OFFSET))(this);
		}

	};
}
