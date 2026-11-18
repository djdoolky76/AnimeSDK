#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameNpcStringValueType_TypeDefinitionIndex = 61964;

	enum class HackerGameNpcStringValueType : ::System::Int32
	{
		OnDamagedCameraShakeKey = 7,
		OnFeverDeathBodyEffectKey = 9,
		OnDeathBodyEffectKey = 8,
		OnDamagedEvent = 1,
		OnDamagedEffectKey = 5,
		OnCreatedEvent = 4,
		EntityTag = 11,
		OnDeathEvent = 2,
		OnBeforeMoveEvent = 3,
		None = 0,
		OnEscapeEffectKey = 10,
		OnFeverDamagedEffectKey = 6,
	};
}
