#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOGEMKKBMLP.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define BJJECBCJIKK_CTOR_OFFSET UNITYSDK_OFFSET(0xC0F26F0)
#define BJJECBCJIKK_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xC0F26E0)
#define BJJECBCJIKK_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xC0F24D0)
#define BJJECBCJIKK_HFCEOPLGJGL_OFFSET UNITYSDK_OFFSET(0xC0F2690)
#define BJJECBCJIKK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC0F23E0)
#define BJJECBCJIKK_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xC0F2570)
#define BJJECBCJIKK_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xC0F25E0)

inline static constexpr unsigned int BJJECBCJIKK_TypeDefinitionIndex = 79298;

	class BJJECBCJIKK : public ::EOGEMKKBMLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJECBCJIKK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + BJJECBCJIKK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + BJJECBCJIKK_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + BJJECBCJIKK_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + BJJECBCJIKK_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Single HFCEOPLGJGL(::HGBCMFANCOE a1)
		{
			return ((::System::Single(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + BJJECBCJIKK_HFCEOPLGJGL_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJECBCJIKK_EPPAFNJFCMH_OFFSET))(this);
		}

	};
