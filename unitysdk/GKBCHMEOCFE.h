#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/FightSoftStopReason.h"
#include "unitysdk/System/Object.h"

#define GKBCHMEOCFE_CHAJOPCNHKI_OFFSET UNITYSDK_OFFSET(0x1C614F60)
#define GKBCHMEOCFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C614FB0)

inline static constexpr unsigned int GKBCHMEOCFE_TypeDefinitionIndex = 37323;

	class GKBCHMEOCFE : public ::System::Object
	{
	public:
		::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason DELIDEGBBKP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKBCHMEOCFE_CTOR_OFFSET))(this);
		}

		::System::Boolean CHAJOPCNHKI(::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::FightSoftStopReason))((::PBYTE)hIl2Cpp + GKBCHMEOCFE_CHAJOPCNHKI_OFFSET))(this, a1);
		}

	};
