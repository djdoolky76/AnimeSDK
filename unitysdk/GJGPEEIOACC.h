#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesJoyStickState.h"
#include "unitysdk/System/Object.h"

#define GJGPEEIOACC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A694B0)

inline static constexpr unsigned int GJGPEEIOACC_TypeDefinitionIndex = 81282;

	class GJGPEEIOACC : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState CGDIHAOAKDC; // 0x10
		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesJoyStickState GAMKDICCNGG; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJGPEEIOACC_CTOR_OFFSET))(this);
		}

	};
