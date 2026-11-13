#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleActionSource.h"
#include "unitysdk/System/Object.h"

#define IOCAFIDJADI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC48F30)

inline static constexpr unsigned int IOCAFIDJADI_TypeDefinitionIndex = 44046;

	class IOCAFIDJADI : public ::System::Object
	{
	public:
		::System::UInt32 AOLDKFBGNKJ; // 0x10
		::RPG::Client::LittleGame::Marble::MarbleActionSource MIAJNJNECOG; // 0x14
		::System::UInt32 ENJKAIJDPIP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCAFIDJADI_CTOR_OFFSET))(this);
		}

	};
