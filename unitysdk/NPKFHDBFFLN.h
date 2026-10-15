#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGFGCOMABKB.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define NPKFHDBFFLN_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBD0E2C0)
#define NPKFHDBFFLN_BDFCGNBMJKI_OFFSET UNITYSDK_OFFSET(0xBD0E430)
#define NPKFHDBFFLN_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xBD0DD80)
#define NPKFHDBFFLN_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBD0DF90)
#define NPKFHDBFFLN_CTOR_OFFSET UNITYSDK_OFFSET(0xBD0E710)
#define NPKFHDBFFLN_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBD0E340)
#define NPKFHDBFFLN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBD0DDD0)
#define NPKFHDBFFLN_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBD0E680)

	class NPKFHDBFFLN : public ::EGFGCOMABKB
	{
	public:
		::System::Single JIFNJODLFBG; // 0x30
		::System::Single LJLABGMAPBK; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFHDBFFLN_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFHDBFFLN_BPMGPFLHPLC_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + NPKFHDBFFLN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + NPKFHDBFFLN_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + NPKFHDBFFLN_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPKFHDBFFLN_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPKFHDBFFLN_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void BDFCGNBMJKI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPKFHDBFFLN_BDFCGNBMJKI_OFFSET))(this, a1);
		}

	};
