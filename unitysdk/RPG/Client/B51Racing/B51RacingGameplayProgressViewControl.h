#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYPROGRESSVIEWCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xD101500)
#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYPROGRESSVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD101410)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplayProgressViewControl_TypeDefinitionIndex = 84678;

	class B51RacingGameplayProgressViewControl : public ::Sofa::BaseSofaControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYPROGRESSVIEWCONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYPROGRESSVIEWCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

	};
}
