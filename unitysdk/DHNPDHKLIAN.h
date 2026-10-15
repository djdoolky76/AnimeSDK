#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CakeRaceRegionCellConfig; }

#define DHNPDHKLIAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F12E0)

	class DHNPDHKLIAN : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceRegionCellConfig* LFOMNMOOGKJ; // 0x10
		::RPG::GameCore::CakeRaceCellType GDIGGOLJIBJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHNPDHKLIAN_CTOR_OFFSET))(this);
		}

	};
