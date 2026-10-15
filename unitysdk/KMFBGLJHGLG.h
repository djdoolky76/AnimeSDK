#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TimelineControlGameWorld_LevelCellDrop.h"
#include "unitysdk/System/Object.h"

#define KMFBGLJHGLG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9089F0)

	class KMFBGLJHGLG : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::TimelineControlGameWorld_LevelCellDrop EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMFBGLJHGLG_CTOR_OFFSET))(this);
		}

	};
