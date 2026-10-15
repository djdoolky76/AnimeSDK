#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLNPNIOIEEL.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HFCPGANBGMI;

#define FKKKLCMEDDM_BFBAJHFIMKK_OFFSET UNITYSDK_OFFSET(0x15807830)
#define FKKKLCMEDDM_BFPJNABOKMB_OFFSET UNITYSDK_OFFSET(0x15808870)
#define FKKKLCMEDDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15808910)
#define FKKKLCMEDDM_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0x15808900)
#define FKKKLCMEDDM_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0x158073E0)
#define FKKKLCMEDDM_HBKMDEKGHNC_OFFSET UNITYSDK_OFFSET(0x15808520)
#define FKKKLCMEDDM_HDPAJONGIKN_OFFSET UNITYSDK_OFFSET(0x15807710)
#define FKKKLCMEDDM_HMCIEDIONED_1_OFFSET UNITYSDK_OFFSET(0x15808590)
#define FKKKLCMEDDM_HMCIEDIONED_OFFSET UNITYSDK_OFFSET(0x15808460)
#define FKKKLCMEDDM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15807360)
#define FKKKLCMEDDM_LFDKACODLGG_OFFSET UNITYSDK_OFFSET(0x15808660)
#define FKKKLCMEDDM_NMPLHCJKEOI_OFFSET UNITYSDK_OFFSET(0x15807670)

inline static constexpr unsigned int FKKKLCMEDDM_TypeDefinitionIndex = 76995;

	class FKKKLCMEDDM : public ::CLNPNIOIEEL
	{
	public:
		::System::Single AMOPAIHIACL; // 0xE8
		// static const ::System::Object OBIELNADJJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::HFCPGANBGMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFCPGANBGMI*))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void NMPLHCJKEOI(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_NMPLHCJKEOI_OFFSET))(this, a1, a2);
		}

		::System::Void HDPAJONGIKN(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_HDPAJONGIKN_OFFSET))(this, a1);
		}

		::System::Void BFBAJHFIMKK(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_BFBAJHFIMKK_OFFSET))(this, a1, a2);
		}

		::System::Single HBKMDEKGHNC(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_HBKMDEKGHNC_OFFSET))(this, a1);
		}

		::System::Boolean HMCIEDIONED(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_HMCIEDIONED_OFFSET))(this, a1, a2);
		}

		::System::Boolean HMCIEDIONED_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_HMCIEDIONED_1_OFFSET))(this, a1, a2);
		}

		::System::Void LFDKACODLGG(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_LFDKACODLGG_OFFSET))(this, a1);
		}

		::System::Void BFPJNABOKMB(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_BFPJNABOKMB_OFFSET))(this, a1);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + FKKKLCMEDDM_EPPAFNJFCMH_OFFSET))(this);
		}

	};
