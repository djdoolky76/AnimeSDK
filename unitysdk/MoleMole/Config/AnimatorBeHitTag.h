#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorBeHitTag_TypeDefinitionIndex = 52540;

	enum class AnimatorBeHitTag : ::System::Int32
	{
		IceBreak = 505,
		ExhaustedStart = 501,
		Chaos = 34,
		Overload = 31,
		SubPartDestroy = 503,
		Strike = 35,
		Electric = 27,
		Unknown = 500,
		SwitchPhase = 504,
		Frostbite = 36,
		Stun = 1,
		Ignite = 30,
		Wind = 39,
		ExhaustedEnd = 502,
	};
}
