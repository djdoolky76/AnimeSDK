#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKIPJBKNCNB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define BELLDGMBJKK_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB156580)
#define BELLDGMBJKK_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xB156940)
#define BELLDGMBJKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB156990)
#define BELLDGMBJKK_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB156700)
#define BELLDGMBJKK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB1567F0)

inline static constexpr unsigned int BELLDGMBJKK_TypeDefinitionIndex = 77051;

	class BELLDGMBJKK : public ::GKIPJBKNCNB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELLDGMBJKK_CTOR_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + BELLDGMBJKK_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BELLDGMBJKK_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BELLDGMBJKK_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + BELLDGMBJKK_BPMGPFLHPLC_OFFSET))(this);
		}

	};
