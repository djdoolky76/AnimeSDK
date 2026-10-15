#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAODNLIPMEO;
class MKEGPKOGFIE;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageMonsterDataProvider; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC955720)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC955710)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageMonsterDataProvider_Factory_TypeDefinitionIndex = 81575;

	class ChallengeTierceStageMonsterDataProvider_Factory : public ::System::Object
	{
	public:
		::MKEGPKOGFIE* _Service; // 0x10
		::System::Void _ctor(::MKEGPKOGFIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKEGPKOGFIE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_FACTORY_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider* Create(::EAODNLIPMEO* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider*(*)(::PVOID, ::EAODNLIPMEO*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEMONSTERDATAPROVIDER_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}

	};
}
