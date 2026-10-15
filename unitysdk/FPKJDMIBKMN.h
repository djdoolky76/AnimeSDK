#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define FPKJDMIBKMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1591E090)
#define FPKJDMIBKMN_GMKENGMMLKP_OFFSET UNITYSDK_OFFSET(0x1591E080)

	class FPKJDMIBKMN : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint IGPMMGEFGHC; // 0x10
		::RPG::GameCore::FixPoint ONBHMEBAAKG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKJDMIBKMN_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::DawnsEyeWeatherUIType GMKENGMMLKP()
		{
			return ((::RPG::GameCore::DawnsEyeWeatherUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + FPKJDMIBKMN_GMKENGMMLKP_OFFSET))(this);
		}

	};
