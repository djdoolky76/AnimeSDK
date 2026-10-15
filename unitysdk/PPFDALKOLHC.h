#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChimeraDuelTurnBasedStageType.h"
#include "unitysdk/System/Object.h"

#define PPFDALKOLHC_AOKLJHMAIOG_OFFSET UNITYSDK_OFFSET(0x1C9CAF90)
#define PPFDALKOLHC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9CAFA0)

inline static constexpr unsigned int PPFDALKOLHC_TypeDefinitionIndex = 41971;

	class PPFDALKOLHC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDALKOLHC_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType AOKLJHMAIOG()
		{
			return ((::RPG::Client::LittleGame::ChimeraDuelTurnBasedStageType(*)(::PVOID))((::PBYTE)hIl2Cpp + PPFDALKOLHC_AOKLJHMAIOG_OFFSET))(this);
		}

	};
