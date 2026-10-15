#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"

#define IPOPGAAKKAD_LBNMNKIELEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6EB520)

	class IPOPGAAKKAD_LBNMNKIELEH : public ::System::Object
	{
	public:
		::RPG::GameCore::CakeRaceCellType OECDFCKDPGK; // 0x10
		::System::UInt32 BDCFLFPLDAN; // 0x14
		::System::UInt32 IDGNLJPNCFD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPOPGAAKKAD_LBNMNKIELEH_CTOR_OFFSET))(this);
		}

	};
