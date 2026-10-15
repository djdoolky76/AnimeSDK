#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOGEMKKBMLP.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"

#define GJOOECCJLFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A73610)
#define GJOOECCJLFH_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15A73600)
#define GJOOECCJLFH_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15A73280)
#define GJOOECCJLFH_HFCEOPLGJGL_OFFSET UNITYSDK_OFFSET(0x15A735B0)
#define GJOOECCJLFH_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15A73490)
#define GJOOECCJLFH_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15A73500)

inline static constexpr unsigned int GJOOECCJLFH_TypeDefinitionIndex = 76979;

	class GJOOECCJLFH : public ::EOGEMKKBMLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOOECCJLFH_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + GJOOECCJLFH_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + GJOOECCJLFH_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + GJOOECCJLFH_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Single HFCEOPLGJGL(::HGBCMFANCOE a1)
		{
			return ((::System::Single(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + GJOOECCJLFH_HFCEOPLGJGL_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOOECCJLFH_EPPAFNJFCMH_OFFSET))(this);
		}

	};
