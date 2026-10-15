#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGamePlayMode.h"
#include "unitysdk/System/Object.h"
class DMANKEBECAE;

#define ILILKFMOKEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB783A0)

inline static constexpr unsigned int ILILKFMOKEB_TypeDefinitionIndex = 42499;

	class ILILKFMOKEB : public ::System::Object
	{
	public:
		::DMANKEBECAE* FDMNBHNAEED; // 0x10
		::RPG::Client::LittleGame::ETimelineControlGamePlayMode KIIPEFJHDPO; // 0x18
		::System::Single EELLMLJMEPF; // 0x1C
		::System::Single PKAGOKHONMP; // 0x20
		::System::Single HIOJDBBIFFG; // 0x24
		::System::Single KNBFKLKLMDM; // 0x28
		::System::Single EIBKLJEBDDK; // 0x2C
		::System::Boolean KAGICIAJEEA; // 0x30
		::System::Boolean DKAFAJBFFBI; // 0x31
		::System::Boolean GBCLKEAOBAC; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILILKFMOKEB_CTOR_OFFSET))(this);
		}

	};
