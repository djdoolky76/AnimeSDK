#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCJOCJGHKC;
class EFCKAAKHBKG;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageMonsterDataProvider_Factory; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CREATEALL_OFFSET UNITYSDK_OFFSET(0xC9648F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CREATEONE_OFFSET UNITYSDK_OFFSET(0xC969730)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC969720)

namespace RPG::Client::Challenge::Tierce
{
	class ChallengeTierceStageViewModel_Factory : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider_Factory* _MonsterDataProviderFactory; // 0x10
		::EFCKAAKHBKG* _AvatarQueryService; // 0x18
		::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider_Factory* a1, ::EFCKAAKHBKG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageMonsterDataProvider_Factory*, ::EFCKAAKHBKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel* CreateOne(::CKCJOCJGHKC* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*(*)(::PVOID, ::CKCJOCJGHKC*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CREATEONE_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*>* CreateAll(::CKCJOCJGHKC* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::Challenge::Tierce::ChallengeTierceStageViewModel*>*(*)(::PVOID, ::CKCJOCJGHKC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGEVIEWMODEL_FACTORY_CREATEALL_OFFSET))(this, a1);
		}

	};
}
