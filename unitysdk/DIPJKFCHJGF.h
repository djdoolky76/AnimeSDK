#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFALJMOJFCA.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HFCPGANBGMI;
class HIOEAKHGILF;

#define DIPJKFCHJGF_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0xF22A330)
#define DIPJKFCHJGF_BKPODIJNGEP_OFFSET UNITYSDK_OFFSET(0xF227680)
#define DIPJKFCHJGF_CLDOKGJKAHI_OFFSET UNITYSDK_OFFSET(0xF227C10)
#define DIPJKFCHJGF_CLEAR_OFFSET UNITYSDK_OFFSET(0xF2278E0)
#define DIPJKFCHJGF_CMPIODAPAJC_OFFSET UNITYSDK_OFFSET(0xF229EF0)
#define DIPJKFCHJGF_CTOR_OFFSET UNITYSDK_OFFSET(0xF22A3A0)
#define DIPJKFCHJGF_DCIECFJLJML_OFFSET UNITYSDK_OFFSET(0xF227A00)
#define DIPJKFCHJGF_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xF22A390)
#define DIPJKFCHJGF_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xF226F50)
#define DIPJKFCHJGF_FGMOCIDIOOC_OFFSET UNITYSDK_OFFSET(0xF2277C0)
#define DIPJKFCHJGF_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xF228EF0)
#define DIPJKFCHJGF_GJGPKOOLKKB_OFFSET UNITYSDK_OFFSET(0xF22A130)
#define DIPJKFCHJGF_GPANCPBCMEC_OFFSET UNITYSDK_OFFSET(0xF227240)
#define DIPJKFCHJGF_HHGPBFCBKFD_OFFSET UNITYSDK_OFFSET(0xF22A0B0)
#define DIPJKFCHJGF_HHJBKIJAEAG_OFFSET UNITYSDK_OFFSET(0xF228C00)
#define DIPJKFCHJGF_HHPDINNBPML_OFFSET UNITYSDK_OFFSET(0xF227DF0)
#define DIPJKFCHJGF_HIILJJFKFJM_OFFSET UNITYSDK_OFFSET(0xF229A80)
#define DIPJKFCHJGF_IBPPFMPCMHA_OFFSET UNITYSDK_OFFSET(0xF229450)
#define DIPJKFCHJGF_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xF227970)
#define DIPJKFCHJGF_JEOFGPFKLAI_OFFSET UNITYSDK_OFFSET(0xF22A030)
#define DIPJKFCHJGF_JLCAGLGJNMJ_OFFSET UNITYSDK_OFFSET(0xF228E70)
#define DIPJKFCHJGF_KJLGNBNKNKC_OFFSET UNITYSDK_OFFSET(0xF228570)
#define DIPJKFCHJGF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF226DF0)
#define DIPJKFCHJGF_LNNALBIGFED_OFFSET UNITYSDK_OFFSET(0xF2285F0)
#define DIPJKFCHJGF_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0xF2275C0)
#define DIPJKFCHJGF_OBCDLIOFIGL_OFFSET UNITYSDK_OFFSET(0xF227170)
#define DIPJKFCHJGF_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xF228070)

inline static constexpr unsigned int DIPJKFCHJGF_TypeDefinitionIndex = 76965;

	class DIPJKFCHJGF : public ::PFALJMOJFCA
	{
	public:
		::System::Single FNPPODCHKMM; // 0x110
		::System::Boolean CNJJOAEHHAH; // 0x114
		::System::Byte _padding0[0x3];
		::System::Single OMFHBLMOPNP; // 0x118
		::System::Single FEHDGPAOIIN; // 0x11C
		// static const ::System::String* OFKOOLHKMFE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void BKPODIJNGEP(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_BKPODIJNGEP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_CLEAR_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void LNNALBIGFED(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_LNNALBIGFED_OFFSET))(this, a1, a2);
		}

		::System::Void HHJBKIJAEAG(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_HHJBKIJAEAG_OFFSET))(this, a1, a2);
		}

		::System::Void GPANCPBCMEC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_GPANCPBCMEC_OFFSET))(this, a1);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::System::Void FGMOCIDIOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_FGMOCIDIOOC_OFFSET))(this);
		}

		::System::Void DCIECFJLJML(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_DCIECFJLJML_OFFSET))(this, a1);
		}

		::System::Void CLDOKGJKAHI(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_CLDOKGJKAHI_OFFSET))(this, a1, a2);
		}

		::System::Void HHPDINNBPML(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_HHPDINNBPML_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 IBPPFMPCMHA(::HGBCMFANCOE a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_IBPPFMPCMHA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 HIILJJFKFJM(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_HIILJJFKFJM_OFFSET))(this, a1, a2);
		}

		::System::Boolean CMPIODAPAJC(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_CMPIODAPAJC_OFFSET))(this, a1, a2);
		}

		::System::Boolean JEOFGPFKLAI(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_JEOFGPFKLAI_OFFSET))(this, a1);
		}

		::System::Boolean HHGPBFCBKFD(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_HHGPBFCBKFD_OFFSET))(this, a1);
		}

		::System::Boolean GJGPKOOLKKB(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_GJGPKOOLKKB_OFFSET))(this, a1);
		}

		::System::Void KJLGNBNKNKC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_KJLGNBNKNKC_OFFSET))(this, a1);
		}

		::System::Void JLCAGLGJNMJ(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_JLCAGLGJNMJ_OFFSET))(this, a1);
		}

		::System::Void BFPJNABOKMB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::System::Void OBCDLIOFIGL(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_OBCDLIOFIGL_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + DIPJKFCHJGF_EPPAFNJFCMH_OFFSET))(this);
		}

	};
