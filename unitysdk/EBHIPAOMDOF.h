#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define EBHIPAOMDOF_CTOR_OFFSET UNITYSDK_OFFSET(0x12CF53D0)
#define EBHIPAOMDOF_GMKENGMMLKP_OFFSET UNITYSDK_OFFSET(0x12CF53C0)

	class EBHIPAOMDOF : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint FIJLEDEKBJP; // 0x10
		::RPG::GameCore::FixPoint FEGAGJHIKLO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHIPAOMDOF_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::DawnsEyeWeatherUIType GMKENGMMLKP()
		{
			return ((::RPG::GameCore::DawnsEyeWeatherUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + EBHIPAOMDOF_GMKENGMMLKP_OFFSET))(this);
		}

	};
