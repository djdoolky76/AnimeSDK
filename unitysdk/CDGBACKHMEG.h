#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCODNLKAGHK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define CDGBACKHMEG_CTOR_OFFSET UNITYSDK_OFFSET(0xC767550)
#define CDGBACKHMEG_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xC767540)
#define CDGBACKHMEG_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xC7672F0)
#define CDGBACKHMEG_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xC767390)
#define CDGBACKHMEG_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC767250)
#define CDGBACKHMEG_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC767450)

	class CDGBACKHMEG : public ::HCODNLKAGHK
	{
	public:
		::System::Single LHIEMNLCKIF; // 0xD8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGBACKHMEG_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + CDGBACKHMEG_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + CDGBACKHMEG_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CDGBACKHMEG_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + CDGBACKHMEG_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + CDGBACKHMEG_EPPAFNJFCMH_OFFSET))(this);
		}

	};
