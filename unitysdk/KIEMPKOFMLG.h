#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOAAFFGNCPK.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HIOEAKHGILF;
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define KIEMPKOFMLG_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0xB416A20)
#define KIEMPKOFMLG_CTOR_OFFSET UNITYSDK_OFFSET(0xB416A90)
#define KIEMPKOFMLG_DGJIJMGAHCM_OFFSET UNITYSDK_OFFSET(0xB416560)
#define KIEMPKOFMLG_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xB416A10)
#define KIEMPKOFMLG_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xB4162C0)
#define KIEMPKOFMLG_IJCLCMAJBHJ_OFFSET UNITYSDK_OFFSET(0xB416810)
#define KIEMPKOFMLG_LIFJJFCIKKA_OFFSET UNITYSDK_OFFSET(0xB416440)
#define KIEMPKOFMLG_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xB4163C0)
#define KIEMPKOFMLG_OAIIPCNKLGA_OFFSET UNITYSDK_OFFSET(0xB4168D0)
#define KIEMPKOFMLG_OCPKOILCJDC_OFFSET UNITYSDK_OFFSET(0xB416870)

inline static constexpr unsigned int KIEMPKOFMLG_TypeDefinitionIndex = 77002;

	class KIEMPKOFMLG : public ::HOAAFFGNCPK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_CTOR_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void LIFJJFCIKKA(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_LIFJJFCIKKA_OFFSET))(this, a1);
		}

		::System::Void IJCLCMAJBHJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_IJCLCMAJBHJ_OFFSET))(this, a1, a2);
		}

		::System::Void DGJIJMGAHCM(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_DGJIJMGAHCM_OFFSET))(this, a1, a2);
		}

		::System::Single OCPKOILCJDC(::RPG::GameCore::FiveDimTrampolineConfig* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::FiveDimTrampolineConfig*))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_OCPKOILCJDC_OFFSET))(this, a1);
		}

		::System::Void OAIIPCNKLGA(::HGBCMFANCOE a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_OAIIPCNKLGA_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KIEMPKOFMLG_ANMDLJPJEHA_OFFSET))(this);
		}

	};
