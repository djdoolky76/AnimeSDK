#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellSaver.h"
#include "unitysdk/System/Object.h"

#define FDLKPAJIEGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA66C90)

	class FDLKPAJIEGG : public ::System::Object
	{
	public:
		::System::Boolean DLCPEDKHMDA; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellSaver EABKOHGCHFP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLKPAJIEGG_CTOR_OFFSET))(this);
		}

	};
