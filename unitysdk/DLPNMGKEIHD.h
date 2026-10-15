#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEIEKELFLHF.h"
#include "unitysdk/RPG/Client/LittleGame/Move/MoveState.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOCEBNDIALE;
namespace RPG::GameCore { class MiniGameFlappyBirdConfig; }

#define DLPNMGKEIHD_AKLIHMFMLCM_OFFSET UNITYSDK_OFFSET(0xFEB5FC0)
#define DLPNMGKEIHD_ANMDLJPJEHA_OFFSET UNITYSDK_OFFSET(0xF8BCCA0)
#define DLPNMGKEIHD_CTOR_OFFSET UNITYSDK_OFFSET(0xFEB6440)
#define DLPNMGKEIHD_EPPAFNJFCMH_OFFSET UNITYSDK_OFFSET(0xF8BCC40)
#define DLPNMGKEIHD_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xFEB45D0)
#define DLPNMGKEIHD_FGMPKCGFJKK_OFFSET UNITYSDK_OFFSET(0xFEB6280)
#define DLPNMGKEIHD_FPOLGECAENN_OFFSET UNITYSDK_OFFSET(0xFEB4A20)
#define DLPNMGKEIHD_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xFEB6220)
#define DLPNMGKEIHD_GMABPIDBNJB_OFFSET UNITYSDK_OFFSET(0xFEB5460)
#define DLPNMGKEIHD_HBJBCBJAHOJ_OFFSET UNITYSDK_OFFSET(0xFEB5260)
#define DLPNMGKEIHD_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xFEB4940)
#define DLPNMGKEIHD_KIBBEHGDBAC_OFFSET UNITYSDK_OFFSET(0xFEB5B30)
#define DLPNMGKEIHD_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xF8BCD40)
#define DLPNMGKEIHD_LJNLNFKABFM_OFFSET UNITYSDK_OFFSET(0xFEB4BB0)
#define DLPNMGKEIHD_LNHLPLCOOKB_OFFSET UNITYSDK_OFFSET(0xFEB4800)
#define DLPNMGKEIHD_MCLAJLDHEOJ_OFFSET UNITYSDK_OFFSET(0xFEB4AD0)
#define DLPNMGKEIHD_MPKLLPIMPBE_OFFSET UNITYSDK_OFFSET(0xFEB5DA0)
#define DLPNMGKEIHD_NIOOHGFAKIL_OFFSET UNITYSDK_OFFSET(0xF8BCC50)
#define DLPNMGKEIHD_OIHADJDBPMH_OFFSET UNITYSDK_OFFSET(0xFEB5AB0)
#define DLPNMGKEIHD_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xFEB5CD0)

inline static constexpr unsigned int DLPNMGKEIHD_TypeDefinitionIndex = 47131;

	class DLPNMGKEIHD : public ::BEIEKELFLHF
	{
	public:
		::RPG::GameCore::MiniGameFlappyBirdConfig* IGHAHBNLIJA; // 0x128
		::System::Boolean LEIMJFBNABN; // 0x130
		::System::Boolean NPAFLIKMGHA; // 0x131
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_CTOR_OFFSET))(this);
		}

		::RPG::Client::LittleGame::Move::MoveState EPPAFNJFCMH()
		{
			return ((::RPG::Client::LittleGame::Move::MoveState(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_EPPAFNJFCMH_OFFSET))(this);
		}

		::System::Boolean NIOOHGFAKIL(::HGBCMFANCOE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_NIOOHGFAKIL_OFFSET))(this, a1);
		}

		::System::Single ANMDLJPJEHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_ANMDLJPJEHA_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::FOCEBNDIALE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOCEBNDIALE*))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void FFKBFPKEPEN(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_FFKBFPKEPEN_OFFSET))(this, a1, a2);
		}

		::System::Void ICNEKGBHIHP(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_ICNEKGBHIHP_OFFSET))(this, a1, a2);
		}

		::System::Void HBJBCBJAHOJ(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_HBJBCBJAHOJ_OFFSET))(this, a1, a2);
		}

		::System::Void OIHADJDBPMH(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_OIHADJDBPMH_OFFSET))(this, a1, a2);
		}

		::System::Void PAGKOAEOLKA(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_PAGKOAEOLKA_OFFSET))(this, a1, a2);
		}

		::System::Void MPKLLPIMPBE(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_MPKLLPIMPBE_OFFSET))(this, a1, a2);
		}

		::System::Void MCLAJLDHEOJ(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_MCLAJLDHEOJ_OFFSET))(this, a1);
		}

		::System::Void LJNLNFKABFM(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_LJNLNFKABFM_OFFSET))(this, a1);
		}

		::System::Boolean AKLIHMFMLCM(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_AKLIHMFMLCM_OFFSET))(this, a1);
		}

		::System::Void KIBBEHGDBAC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_KIBBEHGDBAC_OFFSET))(this, a1);
		}

		::System::Void LNHLPLCOOKB(::HGBCMFANCOE a1, ::RPG::Client::LittleGame::Move::MoveState a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::RPG::Client::LittleGame::Move::MoveState))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_LNHLPLCOOKB_OFFSET))(this, a1, a2);
		}

		::System::Boolean GMABPIDBNJB(::HGBCMFANCOE a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGBCMFANCOE, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_GMABPIDBNJB_OFFSET))(this, a1, a2);
		}

		::System::Void GBCHFFLMIIC(::HGBCMFANCOE a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_GBCHFFLMIIC_OFFSET))(this, a1);
		}

		::System::Void FGMPKCGFJKK(::HGBCMFANCOE a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::System::Single))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_FGMPKCGFJKK_OFFSET))(this, a1, a2);
		}

		::System::Boolean FPOLGECAENN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPNMGKEIHD_FPOLGECAENN_OFFSET))(this);
		}

	};
