#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelTurnBasedPrepareStageStep.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelTurnBasedStageType.h"
#include "unitysdk/System/Object.h"

#define KCAODOCILAP_AOKLJHMAIOG_OFFSET UNITYSDK_OFFSET(0x1CBB0E80)
#define KCAODOCILAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBB0E90)

inline static constexpr unsigned int KCAODOCILAP_TypeDefinitionIndex = 41969;

	class KCAODOCILAP : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraDuelTurnBasedPrepareStageStep ELPLIEIMKLP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAODOCILAP_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType AOKLJHMAIOG()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType(*)(::PVOID))((::PBYTE)hIl2Cpp + KCAODOCILAP_AOKLJHMAIOG_OFFSET))(this);
		}

	};
