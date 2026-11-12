#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBLKHFKCCBC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define MMIGJCAKGLM_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xC28CB50)
#define MMIGJCAKGLM_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xC28CFD0)
#define MMIGJCAKGLM_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xC28C970)
#define MMIGJCAKGLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC28D020)
#define MMIGJCAKGLM_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xC28CBC0)

inline static constexpr unsigned int MMIGJCAKGLM_TypeDefinitionIndex = 79362;

	class MMIGJCAKGLM : public ::KBLKHFKCCBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGJCAKGLM_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + MMIGJCAKGLM_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + MMIGJCAKGLM_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MMIGJCAKGLM_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + MMIGJCAKGLM_BPMGPFLHPLC_OFFSET))(this);
		}

	};
