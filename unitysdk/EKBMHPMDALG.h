#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBLKHFKCCBC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define EKBMHPMDALG_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x16444830)
#define EKBMHPMDALG_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x16444FB0)
#define EKBMHPMDALG_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x164445C0)
#define EKBMHPMDALG_CTOR_OFFSET UNITYSDK_OFFSET(0x16445000)
#define EKBMHPMDALG_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x164448A0)

inline static constexpr unsigned int EKBMHPMDALG_TypeDefinitionIndex = 79361;

	class EKBMHPMDALG : public ::KBLKHFKCCBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBMHPMDALG_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + EKBMHPMDALG_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + EKBMHPMDALG_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKBMHPMDALG_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + EKBMHPMDALG_BPMGPFLHPLC_OFFSET))(this);
		}

	};
