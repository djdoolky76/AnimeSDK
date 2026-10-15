#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGPBKHHDEJ.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define DHPIGCCLEOE_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0xEBE7390)
#define DHPIGCCLEOE_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE7630)
#define DHPIGCCLEOE_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xEBE7620)
#define DHPIGCCLEOE_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xEBE6590)
#define DHPIGCCLEOE_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xEBE75D0)
#define DHPIGCCLEOE_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xEBE72F0)
#define DHPIGCCLEOE_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xEBE6F90)
#define DHPIGCCLEOE_INCNHABDIOJ_OFFSET UNITYSDK_OFFSET(0xEBE7200)
#define DHPIGCCLEOE_MHJNJHOJMLB_OFFSET UNITYSDK_OFFSET(0xEBE71A0)
#define DHPIGCCLEOE_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xEBE6CE0)
#define DHPIGCCLEOE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xEBE7260)

inline static constexpr unsigned int DHPIGCCLEOE_TypeDefinitionIndex = 76998;

	class DHPIGCCLEOE : public ::DIGPBKHHDEJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void BFPJNABOKMB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::System::Void MHJNJHOJMLB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_MHJNJHOJMLB_OFFSET))(this, a1);
		}

		::System::Void INCNHABDIOJ(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_INCNHABDIOJ_OFFSET))(this, a1);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + DHPIGCCLEOE_EPPAFNJFCMH_OFFSET))(this);
		}

	};
