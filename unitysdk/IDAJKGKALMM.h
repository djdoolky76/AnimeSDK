#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLNPNIOIEEL.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
class HFCPGANBGMI;

#define IDAJKGKALMM_BFBAJHFIMKK_OFFSET UNITYSDK_OFFSET(0x15E5A780)
#define IDAJKGKALMM_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0x15E5B450)
#define IDAJKGKALMM_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5B500)
#define IDAJKGKALMM_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15E5B4F0)
#define IDAJKGKALMM_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x15E5A310)
#define IDAJKGKALMM_HDPAJONGIKN_OFFSET UNITYSDK_OFFSET(0x15E5A640)
#define IDAJKGKALMM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15E5A290)
#define IDAJKGKALMM_LFDKACODLGG_OFFSET UNITYSDK_OFFSET(0x15E5B400)
#define IDAJKGKALMM_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15E5A4A0)

inline static constexpr unsigned int IDAJKGKALMM_TypeDefinitionIndex = 76995;

	class IDAJKGKALMM : public ::CLNPNIOIEEL
	{
	public:
		::System::Single AMOPAIHIACL; // 0xE8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAJKGKALMM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + IDAJKGKALMM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + IDAJKGKALMM_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + IDAJKGKALMM_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void HDPAJONGIKN(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + IDAJKGKALMM_HDPAJONGIKN_OFFSET))(this, a1);
		}

		::System::Void BFBAJHFIMKK(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + IDAJKGKALMM_BFBAJHFIMKK_OFFSET))(this, a1, a2);
		}

		::System::Void LFDKACODLGG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + IDAJKGKALMM_LFDKACODLGG_OFFSET))(this, a1);
		}

		::System::Void BFPJNABOKMB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + IDAJKGKALMM_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + IDAJKGKALMM_EPPAFNJFCMH_OFFSET))(this);
		}

	};
