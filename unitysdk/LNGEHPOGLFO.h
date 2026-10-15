#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelTurnBasedBattleStageStep.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelTurnBasedStageType.h"
#include "unitysdk/System/Object.h"

#define LNGEHPOGLFO_AOKLJHMAIOG_OFFSET UNITYSDK_OFFSET(0x1C91E870)
#define LNGEHPOGLFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C91E880)

inline static constexpr unsigned int LNGEHPOGLFO_TypeDefinitionIndex = 41970;

	class LNGEHPOGLFO : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraDuelTurnBasedBattleStageStep ELPLIEIMKLP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGEHPOGLFO_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType AOKLJHMAIOG()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGEHPOGLFO_AOKLJHMAIOG_OFFSET))(this);
		}

	};
