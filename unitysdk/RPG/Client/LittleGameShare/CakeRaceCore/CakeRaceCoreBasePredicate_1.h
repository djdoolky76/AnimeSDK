#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJFCABOOKCA.h"
class PBGNKMMDBGD;

namespace RPG::Client::LittleGameShare::CakeRaceCore
{
	inline static constexpr unsigned int CakeRaceCoreBasePredicate_1_TypeDefinitionIndex = 37406;

	template <typename T>
	class CakeRaceCoreBasePredicate_1 : public ::AJFCABOOKCA
	{
	public:
		::PBGNKMMDBGD* _Services; // 0x0
		T _Config; // 0x0
	};
}
