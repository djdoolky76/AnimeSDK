#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAEFBCNPANK.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define ONPPCIEGDJN_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xBF613E0)
#define ONPPCIEGDJN_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xBF61830)
#define ONPPCIEGDJN_CEIGHKFGAKL_OFFSET UNITYSDK_OFFSET(0xBF61620)
#define ONPPCIEGDJN_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBF612E0)
#define ONPPCIEGDJN_CTOR_OFFSET UNITYSDK_OFFSET(0xBF61880)
#define ONPPCIEGDJN_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0xBF61680)
#define ONPPCIEGDJN_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBF614C0)
#define ONPPCIEGDJN_IPCAPLLMHFP_OFFSET UNITYSDK_OFFSET(0xBF61580)
#define ONPPCIEGDJN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBF61200)

	class ONPPCIEGDJN : public ::GAEFBCNPANK
	{
	public:
		::System::Single FLHOEGBFPJB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPPCIEGDJN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + ONPPCIEGDJN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + ONPPCIEGDJN_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + ONPPCIEGDJN_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONPPCIEGDJN_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void CEIGHKFGAKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPPCIEGDJN_CEIGHKFGAKL_OFFSET))(this);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPPCIEGDJN_FNJCKCNKBKC_OFFSET))(this);
		}

		::System::Void IPCAPLLMHFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPPCIEGDJN_IPCAPLLMHFP_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + ONPPCIEGDJN_BPMGPFLHPLC_OFFSET))(this);
		}

	};
