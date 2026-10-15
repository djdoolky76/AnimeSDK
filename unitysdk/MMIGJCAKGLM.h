#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBLKHFKCCBC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define MMIGJCAKGLM_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB9CB2D0)
#define MMIGJCAKGLM_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xB9CB750)
#define MMIGJCAKGLM_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB9CB0F0)
#define MMIGJCAKGLM_CTOR_OFFSET UNITYSDK_OFFSET(0xB9CB7A0)
#define MMIGJCAKGLM_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB9CB340)

inline static constexpr unsigned int MMIGJCAKGLM_TypeDefinitionIndex = 77027;

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
