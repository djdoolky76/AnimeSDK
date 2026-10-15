#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/ChallengeEnvironmentHintViewModelBase.h"
namespace RPG::Client { class ChallengeStoryInstance; }
namespace System { class Nullable; }

#define RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xC93E830)
#define RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGEBUFFID_OFFSET UNITYSDK_OFFSET(0xC9402A0)
#define RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGENUMBER_OFFSET UNITYSDK_OFFSET(0xC940290)

namespace RPG::Client::Challenge
{
	inline static constexpr unsigned int ChallengeStoryEnvironmentHintViewModel_TypeDefinitionIndex = 81433;

	class ChallengeStoryEnvironmentHintViewModel : public ::RPG::Client::Challenge::ChallengeEnvironmentHintViewModelBase
	{
	public:
		::System::Nullable* _CurrentStageBuffID_k__BackingField; // 0x18
		::System::Int32 _CurrentStageNumber_k__BackingField; // 0x20
		::System::Void _ctor(::RPG::Client::ChallengeStoryInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeStoryInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentStageNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGENUMBER_OFFSET))(this);
		}

		::System::Nullable* get_CurrentStageBuffID()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_CHALLENGESTORYENVIRONMENTHINTVIEWMODEL_GET_CURRENTSTAGEBUFFID_OFFSET))(this);
		}

	};
}
