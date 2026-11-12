#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class LocalizedText; }

#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD115D90)
#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD115CC0)
#define RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD115C40)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingResidentRewardPageControl_TypeDefinitionIndex = 84744;

	class B51RacingResidentRewardPageControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::LocalizedText* _NumText; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGRESIDENTREWARDPAGECONTROL_SETUPVIEW_OFFSET))(this);
		}

	};
}
