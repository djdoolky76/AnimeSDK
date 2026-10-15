#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/COOGNFOEJOD.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
class HFCPGANBGMI;
class JAODHHPIKGJ;

#define KEEPPDNKAEB_BJNDPMKGIMC_OFFSET UNITYSDK_OFFSET(0xB36ED10)
#define KEEPPDNKAEB_BPOLDDMJGCO_OFFSET UNITYSDK_OFFSET(0xB36F600)
#define KEEPPDNKAEB_CTOR_OFFSET UNITYSDK_OFFSET(0xB36F910)
#define KEEPPDNKAEB_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB36F900)
#define KEEPPDNKAEB_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB36EC90)
#define KEEPPDNKAEB_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xB36F280)
#define KEEPPDNKAEB_JOEDOLEBHAG_OFFSET UNITYSDK_OFFSET(0xB36EF20)
#define KEEPPDNKAEB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB36EB60)
#define KEEPPDNKAEB_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB36F1A0)

inline static constexpr unsigned int KEEPPDNKAEB_TypeDefinitionIndex = 76790;

	class KEEPPDNKAEB : public ::COOGNFOEJOD
	{
	public:
		::System::Single PFAPMAAMAED; // 0xC8
		::System::Single MIEJEOMAEFN; // 0xCC
		::System::Single MKGJONGAIFD; // 0xD0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPPDNKAEB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + KEEPPDNKAEB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KEEPPDNKAEB_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::JAODHHPIKGJ* a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KEEPPDNKAEB_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + KEEPPDNKAEB_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void BPOLDDMJGCO(::JAODHHPIKGJ* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*, ::System::Single))((::PBYTE)hIl2Cpp + KEEPPDNKAEB_BPOLDDMJGCO_OFFSET))(this, a1, a2);
		}

		::System::Void BJNDPMKGIMC(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + KEEPPDNKAEB_BJNDPMKGIMC_OFFSET))(this, a1);
		}

		::System::Void JOEDOLEBHAG(::JAODHHPIKGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JAODHHPIKGJ*))((::PBYTE)hIl2Cpp + KEEPPDNKAEB_JOEDOLEBHAG_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KEEPPDNKAEB_EPPAFNJFCMH_OFFSET))(this);
		}

	};
