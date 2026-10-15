#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGFGCOMABKB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define MNLFLIENPPP_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBA0C3C0)
#define MNLFLIENPPP_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xBA0C020)
#define MNLFLIENPPP_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBA0C070)
#define MNLFLIENPPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBA0C680)
#define MNLFLIENPPP_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBA0C480)
#define MNLFLIENPPP_KFKCMNKIGDL_OFFSET UNITYSDK_OFFSET(0xBA0C4F0)
#define MNLFLIENPPP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBA0C5B0)

inline static constexpr unsigned int MNLFLIENPPP_TypeDefinitionIndex = 77034;

	class MNLFLIENPPP : public ::EGFGCOMABKB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLFLIENPPP_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLFLIENPPP_BPMGPFLHPLC_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + MNLFLIENPPP_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + MNLFLIENPPP_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNLFLIENPPP_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MNLFLIENPPP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KFKCMNKIGDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLFLIENPPP_KFKCMNKIGDL_OFFSET))(this);
		}

	};
