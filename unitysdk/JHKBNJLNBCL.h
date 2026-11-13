#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEIEKELFLHF.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
namespace RPG::GameCore { class FiveDimMusicJumpConfig; }

#define JHKBNJLNBCL_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0x173DFBE0)
#define JHKBNJLNBCL_BIDGEIEKGLB_OFFSET UNITYSDK_OFFSET(0x173DFAD0)
#define JHKBNJLNBCL_CKPCODNOEGG_OFFSET UNITYSDK_OFFSET(0x173DFCF0)
#define JHKBNJLNBCL_CTOR_OFFSET UNITYSDK_OFFSET(0x173DFEF0)
#define JHKBNJLNBCL_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x173DFAC0)
#define JHKBNJLNBCL_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x173DFC90)
#define JHKBNJLNBCL_HKGFIGCGMFB_OFFSET UNITYSDK_OFFSET(0x173DFDD0)

inline static constexpr unsigned int JHKBNJLNBCL_TypeDefinitionIndex = 79318;

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
