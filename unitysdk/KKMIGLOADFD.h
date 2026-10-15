#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KBLKHFKCCBC.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/PropMoveState.h"
class POHNBOACDHB;

#define KKMIGLOADFD_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB4CE4D0)
#define KKMIGLOADFD_BPMGPFLHPLC_OFFSET UNITYSDK_OFFSET(0xB4CF030)
#define KKMIGLOADFD_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB4CDE70)
#define KKMIGLOADFD_CTOR_OFFSET UNITYSDK_OFFSET(0xB4CF080)
#define KKMIGLOADFD_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB4CE5F0)
#define KKMIGLOADFD_KMNJKMGDPPA_OFFSET UNITYSDK_OFFSET(0xB4CE280)
#define KKMIGLOADFD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB4CDC90)
#define KKMIGLOADFD_NDJEGHKIAEG_OFFSET UNITYSDK_OFFSET(0xB4CEFE0)

inline static constexpr unsigned int KKMIGLOADFD_TypeDefinitionIndex = 77024;

	class KKMIGLOADFD : public ::KBLKHFKCCBC
	{
	public:
		::System::Single IBMCIMIJCGK; // 0x38
		::System::Single HFCABLLKNMC; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMIGLOADFD_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + KKMIGLOADFD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void CLJEBKODGHK(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + KKMIGLOADFD_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::System::Void AHEEAFKFALM(::RPG::Client::LittleGame::FiveDim::PropMoveState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::PropMoveState))((::PBYTE)hIl2Cpp + KKMIGLOADFD_AHEEAFKFALM_OFFSET))(this, a1);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKMIGLOADFD_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Single KMNJKMGDPPA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMIGLOADFD_KMNJKMGDPPA_OFFSET))(this);
		}

		::System::Single NDJEGHKIAEG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMIGLOADFD_NDJEGHKIAEG_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FiveDim::PropMoveState BPMGPFLHPLC()
		{
			return ((::RPG::Client::LittleGame::FiveDim::PropMoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KKMIGLOADFD_BPMGPFLHPLC_OFFSET))(this);
		}

	};
