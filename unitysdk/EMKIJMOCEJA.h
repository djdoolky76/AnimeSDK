#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAFFGNCPK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define EMKIJMOCEJA_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0x187E1A40)
#define EMKIJMOCEJA_CTOR_OFFSET UNITYSDK_OFFSET(0x187E1AB0)
#define EMKIJMOCEJA_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x187E1A30)
#define EMKIJMOCEJA_JCDFALFLNJL_OFFSET UNITYSDK_OFFSET(0x187E19A0)
#define EMKIJMOCEJA_LIFJJFCIKKA_OFFSET UNITYSDK_OFFSET(0x187E18C0)
#define EMKIJMOCEJA_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x187E1780)

inline static constexpr unsigned int EMKIJMOCEJA_TypeDefinitionIndex = 79308;

	class EMKIJMOCEJA : public ::HOAAFFGNCPK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKIJMOCEJA_CTOR_OFFSET))(this);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + EMKIJMOCEJA_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void LIFJJFCIKKA(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + EMKIJMOCEJA_LIFJJFCIKKA_OFFSET))(this, a1);
		}

		::System::Void JCDFALFLNJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKIJMOCEJA_JCDFALFLNJL_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKIJMOCEJA_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKIJMOCEJA_ANMDLJPJEHA_OFFSET))(this);
		}

	};
