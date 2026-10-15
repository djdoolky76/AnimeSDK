#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Marble/MarbleActionSource.h"
#include "unitysdk/System/Object.h"

#define IOCAFIDJADI_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5C0E0)

inline static constexpr unsigned int IOCAFIDJADI_TypeDefinitionIndex = 43065;

	class IOCAFIDJADI : public ::System::Object
	{
	public:
		::System::UInt32 ENJKAIJDPIP; // 0x10
		::System::UInt32 AOLDKFBGNKJ; // 0x14
		::RPG::Client::LittleGame::Marble::MarbleActionSource MIAJNJNECOG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOCAFIDJADI_CTOR_OFFSET))(this);
		}

	};
