#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAFFGNCPK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
namespace RPG::GameCore { class FiveDimMusicJumpConfig; }

#define NCLFAOLGJGH_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0x151027F0)
#define NCLFAOLGJGH_BIDGEIEKGLB_OFFSET UNITYSDK_OFFSET(0x151026E0)
#define NCLFAOLGJGH_CKPCODNOEGG_OFFSET UNITYSDK_OFFSET(0x15102900)
#define NCLFAOLGJGH_CTOR_OFFSET UNITYSDK_OFFSET(0x15102B00)
#define NCLFAOLGJGH_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x151026D0)
#define NCLFAOLGJGH_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x151028A0)
#define NCLFAOLGJGH_HKGFIGCGMFB_OFFSET UNITYSDK_OFFSET(0x151029E0)

inline static constexpr unsigned int NCLFAOLGJGH_TypeDefinitionIndex = 79317;

	class NCLFAOLGJGH : public ::HOAAFFGNCPK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFAOLGJGH_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFAOLGJGH_EPPAFNJFCMH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMusicJumpConfig* BIDGEIEKGLB()
		{
			return ((::RPG::GameCore::FiveDimMusicJumpConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFAOLGJGH_BIDGEIEKGLB_OFFSET))(this);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFAOLGJGH_ANMDLJPJEHA_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + NCLFAOLGJGH_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void CKPCODNOEGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFAOLGJGH_CKPCODNOEGG_OFFSET))(this);
		}

		::System::Void HKGFIGCGMFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLFAOLGJGH_HKGFIGCGMFB_OFFSET))(this);
		}

	};
