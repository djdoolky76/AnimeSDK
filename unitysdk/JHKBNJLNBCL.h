#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEIEKELFLHF.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
namespace RPG::GameCore { class FiveDimMusicJumpConfig; }

#define JHKBNJLNBCL_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0xB1B2F90)
#define JHKBNJLNBCL_BIDGEIEKGLB_OFFSET UNITYSDK_OFFSET(0xB1B2E80)
#define JHKBNJLNBCL_CKPCODNOEGG_OFFSET UNITYSDK_OFFSET(0xB1B3140)
#define JHKBNJLNBCL_CTOR_OFFSET UNITYSDK_OFFSET(0xB1B33A0)
#define JHKBNJLNBCL_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB1B2E70)
#define JHKBNJLNBCL_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB1B30E0)
#define JHKBNJLNBCL_HKGFIGCGMFB_OFFSET UNITYSDK_OFFSET(0xB1B3250)

inline static constexpr unsigned int JHKBNJLNBCL_TypeDefinitionIndex = 76984;

	class JHKBNJLNBCL : public ::BEIEKELFLHF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKBNJLNBCL_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKBNJLNBCL_EPPAFNJFCMH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMusicJumpConfig* BIDGEIEKGLB()
		{
			return ((::RPG::GameCore::FiveDimMusicJumpConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKBNJLNBCL_BIDGEIEKGLB_OFFSET))(this);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKBNJLNBCL_ANMDLJPJEHA_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + JHKBNJLNBCL_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void CKPCODNOEGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKBNJLNBCL_CKPCODNOEGG_OFFSET))(this);
		}

		::System::Void HKGFIGCGMFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHKBNJLNBCL_HKGFIGCGMFB_OFFSET))(this);
		}

	};
