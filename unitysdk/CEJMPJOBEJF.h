#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGFGCOMABKB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"

#define CEJMPJOBEJF_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xC9DB570)
#define CEJMPJOBEJF_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xC9DC0B0)
#define CEJMPJOBEJF_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xC9DB390)
#define CEJMPJOBEJF_CTOR_OFFSET UNITYSDK_OFFSET(0xC9DC100)
#define CEJMPJOBEJF_DAJODNPGOPK_OFFSET UNITYSDK_OFFSET(0xC9DBEA0)
#define CEJMPJOBEJF_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xC9DB5F0)

inline static constexpr unsigned int CEJMPJOBEJF_TypeDefinitionIndex = 77031;

	class CEJMPJOBEJF : public ::EGFGCOMABKB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMPJOBEJF_CTOR_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CEJMPJOBEJF_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + CEJMPJOBEJF_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CEJMPJOBEJF_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void DAJODNPGOPK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMPJOBEJF_DAJODNPGOPK_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMPJOBEJF_BPMGPFLHPLC_OFFSET))(this);
		}

	};
