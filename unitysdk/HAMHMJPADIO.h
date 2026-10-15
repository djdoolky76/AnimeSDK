#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFALJMOJFCA.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;
namespace RPG::GameCore { class FiveDimEffectItem; }

#define HAMHMJPADIO_ABLPFGPPHNP_OFFSET UNITYSDK_OFFSET(0x15B94860)
#define HAMHMJPADIO_AKHNLAGHFKE_OFFSET UNITYSDK_OFFSET(0x15B94A90)
#define HAMHMJPADIO_BFEFPIPFLBL_OFFSET UNITYSDK_OFFSET(0x15B94C40)
#define HAMHMJPADIO_CCNCAMIABDA_OFFSET UNITYSDK_OFFSET(0x15B94F00)
#define HAMHMJPADIO_CTOR_OFFSET UNITYSDK_OFFSET(0x15B96570)
#define HAMHMJPADIO_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15B96560)
#define HAMHMJPADIO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15B94710)
#define HAMHMJPADIO_GGJNALGJCML_OFFSET UNITYSDK_OFFSET(0x15B95FC0)
#define HAMHMJPADIO_GJEJEEAOFID_OFFSET UNITYSDK_OFFSET(0x15B95F40)
#define HAMHMJPADIO_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0x15B96350)
#define HAMHMJPADIO_HCBAHOEHCFI_OFFSET UNITYSDK_OFFSET(0x15B951C0)
#define HAMHMJPADIO_HFFLOGPKKGG_OFFSET UNITYSDK_OFFSET(0x15B95D60)
#define HAMHMJPADIO_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0x15B95140)
#define HAMHMJPADIO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15B946C0)
#define HAMHMJPADIO_LAMEIHHHNKE_OFFSET UNITYSDK_OFFSET(0x15B94EA0)
#define HAMHMJPADIO_LBLHLBKEEKI_OFFSET UNITYSDK_OFFSET(0x15B96410)
#define HAMHMJPADIO_NJMHHDHHLLN_OFFSET UNITYSDK_OFFSET(0x15B94D90)
#define HAMHMJPADIO_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15B94AF0)
#define HAMHMJPADIO_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15B955B0)
#define HAMHMJPADIO_PMHEMEACHOC_OFFSET UNITYSDK_OFFSET(0x15B95B80)

	class HAMHMJPADIO : public ::PFALJMOJFCA
	{
	public:
		::System::Single HPPIOJBNOCL; // 0x110
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMHMJPADIO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + HAMHMJPADIO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + HAMHMJPADIO_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + HAMHMJPADIO_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void ABLPFGPPHNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HAMHMJPADIO_ABLPFGPPHNP_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>* CCNCAMIABDA()
		{
			return ((::Il2CppArray<::RPG::GameCore::FiveDimEffectItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMHMJPADIO_CCNCAMIABDA_OFFSET))(this);
		}

		::System::Void AKHNLAGHFKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMHMJPADIO_AKHNLAGHFKE_OFFSET))(this);
		}

		::System::Void LAMEIHHHNKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMHMJPADIO_LAMEIHHHNKE_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HAMHMJPADIO_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void HCBAHOEHCFI(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HAMHMJPADIO_HCBAHOEHCFI_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HAMHMJPADIO_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void PMHEMEACHOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMHMJPADIO_PMHEMEACHOC_OFFSET))(this);
		}

		::System::Void HFFLOGPKKGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMHMJPADIO_HFFLOGPKKGG_OFFSET))(this);
		}

		::System::Void GJEJEEAOFID(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HAMHMJPADIO_GJEJEEAOFID_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + HAMHMJPADIO_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void BFEFPIPFLBL(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HAMHMJPADIO_BFEFPIPFLBL_OFFSET))(this, a1);
		}

		::System::Void LBLHLBKEEKI(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HAMHMJPADIO_LBLHLBKEEKI_OFFSET))(this, a1);
		}

		::System::Void NJMHHDHHLLN(::HGBCMFANCOE a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Boolean))((::PBYTE)hIl2Cpp + HAMHMJPADIO_NJMHHDHHLLN_OFFSET))(this, a1, a2);
		}

		::System::Void GGJNALGJCML(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + HAMHMJPADIO_GGJNALGJCML_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMHMJPADIO_EPPAFNJFCMH_OFFSET))(this);
		}

	};
