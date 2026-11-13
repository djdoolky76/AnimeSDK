#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGFGCOMABKB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define IPDLDHCNBOG_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0x192FDBF0)
#define IPDLDHCNBOG_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0x192FD9D0)
#define IPDLDHCNBOG_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x192FDA20)
#define IPDLDHCNBOG_CTOR_OFFSET UNITYSDK_OFFSET(0x192FE380)
#define IPDLDHCNBOG_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x192FDC40)

inline static constexpr unsigned int IPDLDHCNBOG_TypeDefinitionIndex = 79364;

	class IPDLDHCNBOG : public ::EGFGCOMABKB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPDLDHCNBOG_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + IPDLDHCNBOG_BPMGPFLHPLC_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + IPDLDHCNBOG_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + IPDLDHCNBOG_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IPDLDHCNBOG_ICNEKGBHIHP_OFFSET))(this, a1);
		}

	};
