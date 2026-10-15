#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ILDNJGBJGPF;
class JBKNCCIENIP;
class PIMCPBPFGMB_CJHAABBOLCF;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSettleConfirmViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xC954CC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY_CTOR_OFFSET UNITYSDK_OFFSET(0xC954CB0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSettleConfirmViewModel_Factory_TypeDefinitionIndex = 81619;

	class ChallengeTierceSettleConfirmViewModel_Factory : public ::System::Object
	{
	public:
		::JBKNCCIENIP* _WindowService; // 0x10
		::PIMCPBPFGMB_CJHAABBOLCF* _ResultFactory; // 0x18
		::System::Void _ctor(::JBKNCCIENIP* a1, ::PIMCPBPFGMB_CJHAABBOLCF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JBKNCCIENIP*, ::PIMCPBPFGMB_CJHAABBOLCF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* Create(::ILDNJGBJGPF* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel*(*)(::PVOID, ::ILDNJGBJGPF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}

	};
}
