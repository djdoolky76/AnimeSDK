#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournRelicCocoonTeamSaveType.h"
#include "unitysdk/System/Object.h"

#define IJDMNPNMMPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1645A6A0)

	class IJDMNPNMMPI : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournRelicCocoonTeamSaveType HOPKBCJIOCD; // 0x10
		::System::UInt32 ACCJKGEKHKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJDMNPNMMPI_CTOR_OFFSET))(this);
		}

	};
