#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMIOHCMPBJB.h"

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int CakeRaceCoreBaseSelector_1_TypeDefinitionIndex = 37421;

	template <typename T>
	class CakeRaceCoreBaseSelector_1 : public ::LMIOHCMPBJB
	{
	public:
		T _Config; // 0x0
	};
}
