#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAFFGNCPK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define EIMKPMGJKCH_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0x164125E0)
#define EIMKPMGJKCH_CTOR_OFFSET UNITYSDK_OFFSET(0x16412650)
#define EIMKPMGJKCH_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x164125D0)
#define EIMKPMGJKCH_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x16412300)
#define EIMKPMGJKCH_JCDFALFLNJL_OFFSET UNITYSDK_OFFSET(0x16412270)
#define EIMKPMGJKCH_LIFJJFCIKKA_OFFSET UNITYSDK_OFFSET(0x164124F0)
#define EIMKPMGJKCH_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x164123B0)

inline static constexpr unsigned int EIMKPMGJKCH_TypeDefinitionIndex = 79342;

	class EIMKPMGJKCH : public ::HOAAFFGNCPK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMKPMGJKCH_CTOR_OFFSET))(this);
		}

		::System::Void JCDFALFLNJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMKPMGJKCH_JCDFALFLNJL_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EIMKPMGJKCH_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EIMKPMGJKCH_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void LIFJJFCIKKA(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EIMKPMGJKCH_LIFJJFCIKKA_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMKPMGJKCH_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EIMKPMGJKCH_ANMDLJPJEHA_OFFSET))(this);
		}

	};
