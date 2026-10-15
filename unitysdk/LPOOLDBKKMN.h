#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COOGNFOEJOD.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class JAODHHPIKGJ;

#define LPOOLDBKKMN_AAKNAHCILFA_OFFSET UNITYSDK_OFFSET(0xB8361B0)
#define LPOOLDBKKMN_AMAEPOLHMLG_OFFSET UNITYSDK_OFFSET(0xB836270)
#define LPOOLDBKKMN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8362E0)
#define LPOOLDBKKMN_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB8362D0)
#define LPOOLDBKKMN_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB8360E0)
#define LPOOLDBKKMN_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB836150)

	class LPOOLDBKKMN : public ::COOGNFOEJOD
	{
	public:
		::System::Int32 KBCOCDEMJDC; // 0xC8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOOLDBKKMN_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + LPOOLDBKKMN_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + LPOOLDBKKMN_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void AAKNAHCILFA(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + LPOOLDBKKMN_AAKNAHCILFA_OFFSET))(this, a1, a2);
		}

		::System::Void AMAEPOLHMLG(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + LPOOLDBKKMN_AMAEPOLHMLG_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + LPOOLDBKKMN_EPPAFNJFCMH_OFFSET))(this);
		}

	};
