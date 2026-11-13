#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGamePlayMode.h"
#include "unitysdk/System/Object.h"
class DMANKEBECAE;

#define ILILKFMOKEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC36EC0)

inline static constexpr unsigned int ILILKFMOKEB_TypeDefinitionIndex = 43474;

	class ILILKFMOKEB : public ::System::Object
	{
	public:
		::DMANKEBECAE* FDMNBHNAEED; // 0x10
		::System::Single HIOJDBBIFFG; // 0x18
		::System::Single KNBFKLKLMDM; // 0x1C
		::System::Single EIBKLJEBDDK; // 0x20
		::System::Boolean KAGICIAJEEA; // 0x24
		::System::Boolean GBCLKEAOBAC; // 0x25
		::System::Boolean DKAFAJBFFBI; // 0x26
		::System::Byte _padding0[0x1];
		::RPG::Client::LittleGame::ETimelineControlGamePlayMode KIIPEFJHDPO; // 0x28
		::System::Single PKAGOKHONMP; // 0x2C
		::System::Single EELLMLJMEPF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILILKFMOKEB_CTOR_OFFSET))(this);
		}

	};
