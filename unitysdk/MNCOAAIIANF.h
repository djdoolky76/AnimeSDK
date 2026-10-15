#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIEMPKOFMLG.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
namespace RPG::GameCore { class FiveDimMusicJumpConfig; }
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define MNCOAAIIANF_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0xB9E3360)
#define MNCOAAIIANF_BIDGEIEKGLB_OFFSET UNITYSDK_OFFSET(0xB9E3250)
#define MNCOAAIIANF_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E3570)
#define MNCOAAIIANF_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB9E3240)
#define MNCOAAIIANF_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB9E34B0)
#define MNCOAAIIANF_OCPKOILCJDC_OFFSET UNITYSDK_OFFSET(0xB9E3510)

inline static constexpr unsigned int MNCOAAIIANF_TypeDefinitionIndex = 76986;

	class MNCOAAIIANF : public ::KIEMPKOFMLG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOAAIIANF_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOAAIIANF_EPPAFNJFCMH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimMusicJumpConfig* BIDGEIEKGLB()
		{
			return ((::RPG::GameCore::FiveDimMusicJumpConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOAAIIANF_BIDGEIEKGLB_OFFSET))(this);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MNCOAAIIANF_ANMDLJPJEHA_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + MNCOAAIIANF_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Single OCPKOILCJDC(::RPG::GameCore::FiveDimTrampolineConfig* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + MNCOAAIIANF_OCPKOILCJDC_OFFSET))(this, a1);
		}

	};
