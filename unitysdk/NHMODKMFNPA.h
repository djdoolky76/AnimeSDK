#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEPAJLGHCKE.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define NHMODKMFNPA_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBBD3330)
#define NHMODKMFNPA_BDFCGNBMJKI_OFFSET UNITYSDK_OFFSET(0xBBD3580)
#define NHMODKMFNPA_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xBBD38C0)
#define NHMODKMFNPA_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBBD30D0)
#define NHMODKMFNPA_CTOR_OFFSET UNITYSDK_OFFSET(0xBBD3910)
#define NHMODKMFNPA_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBBD3510)
#define NHMODKMFNPA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBBD3000)
#define NHMODKMFNPA_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xBBD3830)

inline static constexpr unsigned int NHMODKMFNPA_TypeDefinitionIndex = 77059;

	class NHMODKMFNPA : public ::KEPAJLGHCKE
	{
	public:
		::System::Single MFPPNCEAGAO; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMODKMFNPA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + NHMODKMFNPA_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + NHMODKMFNPA_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + NHMODKMFNPA_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHMODKMFNPA_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHMODKMFNPA_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void BDFCGNBMJKI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHMODKMFNPA_BDFCGNBMJKI_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMODKMFNPA_BPMGPFLHPLC_OFFSET))(this);
		}

	};
