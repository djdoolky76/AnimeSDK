#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int GKHEMPJCONG_TypeDefinitionIndex = 72353;

enum class GKHEMPJCONG : ::System::UInt32
{
	OnResolvedEvent = 4000,
	OnPreEvent = 1000,
	OnResolvedEvent_Ability = 3001,
	OnEventFromAnyone_CharacterAnimator = 4002,
	OnPreEvent_Ability = 1,
	OnPostEvent_Ability = 2001,
	OnEvent_CharacterAnimator = 1003,
	OnEventFromAnyone_Ability = 4001,
	OnEventFromAnyone_Subsystem = 50001,
	NotDefined = 0,
	OnEvent = 2000,
	OnPostEvent = 3000,
	OnEvent_Battle = 1002,
	OnEvent_Ability = 1001,
	OnResolvedEvent_Battle = 3002,
	OnEventFromAnyone = 50000,
};
