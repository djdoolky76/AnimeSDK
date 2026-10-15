#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EFCKAAKHBKG;
class KHPENGJFKBB;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamInfoProviderViewModel; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC965190)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC971D50)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamInfoProviderViewModel_Factory_TypeDefinitionIndex = 81585;

	class ChallengeTierceTeamInfoProviderViewModel_Factory : public ::System::Object
	{
	public:
		::EFCKAAKHBKG* _AvatarQueryService; // 0x10
		::System::Void _ctor(::EFCKAAKHBKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFCKAAKHBKG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamInfoProviderViewModel* Create(::System::Collections::Generic::IEnumerable_1<::KHPENGJFKBB*>* a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceTeamInfoProviderViewModel*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::KHPENGJFKBB*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMINFOPROVIDERVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1, a2);
		}

	};
}
