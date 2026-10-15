#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirEventType.h"
#include "unitysdk/System/Object.h"
class KPILLBAALJO;

#define BAKAMEFHCHA_JOKCJKOHIAJ_OFFSET UNITYSDK_OFFSET(0x15E71080)

inline static constexpr unsigned int BAKAMEFHCHA_TypeDefinitionIndex = 77296;

	class BAKAMEFHCHA : public ::System::Object
	{
	public:
		static ::KPILLBAALJO* JOKCJKOHIAJ(::RPG::GameCore::PixAirEventType a1)
		{
			return ((::KPILLBAALJO*(*)(::RPG::GameCore::PixAirEventType))((::PBYTE)hIl2Cpp + BAKAMEFHCHA_JOKCJKOHIAJ_OFFSET))(a1);
		}

	};
