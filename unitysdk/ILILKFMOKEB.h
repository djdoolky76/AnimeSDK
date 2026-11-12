#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGamePlayMode.h"
#include "unitysdk/System/Object.h"
class DMANKEBECAE;

#define ILILKFMOKEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3E970)

inline static constexpr unsigned int ILILKFMOKEB_TypeDefinitionIndex = 43474;

	class ILILKFMOKEB : public ::System::Object
	{
	public:
		::DMANKEBECAE* FDMNBHNAEED; // 0x10
		::RPG::Client::LittleGame::ETimelineControlGamePlayMode KIIPEFJHDPO; // 0x18
		::System::Boolean KAGICIAJEEA; // 0x1C
		::System::Boolean GBCLKEAOBAC; // 0x1D
		::System::Boolean DKAFAJBFFBI; // 0x1E
		::System::Byte _padding0[0x1];
		::System::Single EIBKLJEBDDK; // 0x20
		::System::Single KNBFKLKLMDM; // 0x24
		::System::Single PKAGOKHONMP; // 0x28
		::System::Single EELLMLJMEPF; // 0x2C
		::System::Single HIOJDBBIFFG; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILILKFMOKEB_CTOR_OFFSET))(this);
		}

	};
