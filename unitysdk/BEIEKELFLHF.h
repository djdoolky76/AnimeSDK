#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAFFGNCPK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define BEIEKELFLHF_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0x16323C20)
#define BEIEKELFLHF_CTOR_OFFSET UNITYSDK_OFFSET(0x16323C90)
#define BEIEKELFLHF_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x16323C10)
#define BEIEKELFLHF_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x16323890)
#define BEIEKELFLHF_GOCMBBKBIBH_OFFSET UNITYSDK_OFFSET(0x16323B20)
#define BEIEKELFLHF_JCDFALFLNJL_OFFSET UNITYSDK_OFFSET(0x16323B80)
#define BEIEKELFLHF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16323830)

	class BEIEKELFLHF : public ::HOAAFFGNCPK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIEKELFLHF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + BEIEKELFLHF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + BEIEKELFLHF_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void GOCMBBKBIBH(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + BEIEKELFLHF_GOCMBBKBIBH_OFFSET))(this, a1);
		}

		::System::Void JCDFALFLNJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIEKELFLHF_JCDFALFLNJL_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIEKELFLHF_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BEIEKELFLHF_ANMDLJPJEHA_OFFSET))(this);
		}

	};
