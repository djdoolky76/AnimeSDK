#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPOEEGPIIPA.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CMPGDMEPMLB_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xDA3E230)
#define CMPGDMEPMLB_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xDA3E5A0)
#define CMPGDMEPMLB_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3E5F0)
#define CMPGDMEPMLB_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xDA3E2C0)
#define CMPGDMEPMLB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDA3E440)

inline static constexpr unsigned int CMPGDMEPMLB_TypeDefinitionIndex = 77041;

	class CMPGDMEPMLB : public ::MPOEEGPIIPA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPGDMEPMLB_CTOR_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CMPGDMEPMLB_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMPGDMEPMLB_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CMPGDMEPMLB_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CMPGDMEPMLB_BPMGPFLHPLC_OFFSET))(this);
		}

	};
