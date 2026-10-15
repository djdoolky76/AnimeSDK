#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGFGCOMABKB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define MAAMBDPMAKI_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xB836F10)
#define MAAMBDPMAKI_CTOR_OFFSET UNITYSDK_OFFSET(0xB836F60)

inline static constexpr unsigned int MAAMBDPMAKI_TypeDefinitionIndex = 77032;

	class MAAMBDPMAKI : public ::EGFGCOMABKB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAMBDPMAKI_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + MAAMBDPMAKI_BPMGPFLHPLC_OFFSET))(this);
		}

	};
