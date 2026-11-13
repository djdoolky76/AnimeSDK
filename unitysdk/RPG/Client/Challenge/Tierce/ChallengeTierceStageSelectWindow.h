#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaWindow.h"
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectControlBase; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceStageSelectViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW_CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E6780)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW_GET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1B6E66C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW_SET__TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1B6E6770)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1B6E6D10)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1B6E72C0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW__ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0x1B6E7390)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1B6E6A50)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectWindow_TypeDefinitionIndex = 84342;

	class ChallengeTierceStageSelectWindow : public ::Sofa::BaseSofaWindow
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectControlBase* _Content; // 0x48
		::System::Void _ctor(::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* get__TypedDataContext()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW_GET__TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set__TypedDataContext(::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceStageSelectViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW_SET__TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTWINDOW__ONINCONTROLEXIT_OFFSET))(this);
		}

	};
}
