#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILDNJGBJGPF;
class OBJANKHLNGO;
namespace RPG::Client { class ChallengeData; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceMazeViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC942920)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC942910)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceMazeViewModel_Factory_TypeDefinitionIndex = 81593;

	class ChallengeTierceMazeViewModel_Factory : public ::System::Object
	{
	public:
		::OBJANKHLNGO* _Messenger; // 0x10
		::System::Void _ctor(::OBJANKHLNGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel* Create(::RPG::Client::ChallengeData* a1, ::ILDNJGBJGPF* a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceMazeViewModel*(*)(::PVOID, ::RPG::Client::ChallengeData*, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEMAZEVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}

	};
}
