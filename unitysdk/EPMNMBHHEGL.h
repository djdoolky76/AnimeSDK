#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DawnsEyeWeatherUIType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define EPMNMBHHEGL_CTOR_OFFSET UNITYSDK_OFFSET(0x155D8FF0)
#define EPMNMBHHEGL_GMKENGMMLKP_OFFSET UNITYSDK_OFFSET(0x155D8FE0)

	class EPMNMBHHEGL : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint FIJLEDEKBJP; // 0x10
		::System::Boolean JIKMGAHLNMF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNMBHHEGL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::DawnsEyeWeatherUIType GMKENGMMLKP()
		{
			return ((::RPG::GameCore::DawnsEyeWeatherUIType(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMNMBHHEGL_GMKENGMMLKP_OFFSET))(this);
		}

	};
