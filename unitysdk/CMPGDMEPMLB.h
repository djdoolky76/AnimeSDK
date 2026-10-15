#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MPOEEGPIIPA.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CMPGDMEPMLB_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xDA45880)
#define CMPGDMEPMLB_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xDA45C00)
#define CMPGDMEPMLB_CTOR_OFFSET UNITYSDK_OFFSET(0xDA45C50)
#define CMPGDMEPMLB_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xDA45910)
#define CMPGDMEPMLB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xDA45A90)

inline static constexpr unsigned int CMPGDMEPMLB_TypeDefinitionIndex = 77042;

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
