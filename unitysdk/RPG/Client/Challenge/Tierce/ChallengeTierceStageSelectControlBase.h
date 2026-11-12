#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectViewModel; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectVoracityInvasionControl; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_CTOR_OFFSET UNITYSDK_OFFSET(0xD2BE980)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD2BC190)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0xD2BEBC0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xD2BE560)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD2BC2E0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectControlBase_TypeDefinitionIndex = 84330;

	class ChallengeTierceStageSelectControlBase : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectVoracityInvasionControl* _VoracityInvasionControl; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTCONTROLBASE__ONBINDVIEWMODEL_OFFSET))(this);
		}

	};
}
