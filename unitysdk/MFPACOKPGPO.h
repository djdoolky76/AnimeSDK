#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/ONMDKEDOKED.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Ray.h"

class DJGGAKHLGON;
namespace MoleMole { class MonoPhotoWallEdge; }
namespace MoleMole::Config { class ConfigPhotoWall; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MFPACOKPGPO_AFMJDLODHKB_OFFSET UNITYSDK_OFFSET(0x16C7C940)
#define MFPACOKPGPO_AOIIEIOHABL_OFFSET UNITYSDK_OFFSET(0x16C7DF20)
#define MFPACOKPGPO_BPLNPNMENEJ_OFFSET UNITYSDK_OFFSET(0x16C7C6D0)
#define MFPACOKPGPO_ELPFAFFJNKI_OFFSET UNITYSDK_OFFSET(0x16C7D780)
#define MFPACOKPGPO_FJIGJJFGEDE_OFFSET UNITYSDK_OFFSET(0x16C7E450)
#define MFPACOKPGPO_FNPAHEKGDNH_OFFSET UNITYSDK_OFFSET(0x16C7C0F0)
#define MFPACOKPGPO_FPFHBOHDAAM_OFFSET UNITYSDK_OFFSET(0x16C7E580)
#define MFPACOKPGPO_GPHHCJFIKPK_OFFSET UNITYSDK_OFFSET(0x16C7DBF0)
#define MFPACOKPGPO_HAEPBCFIKIN_OFFSET UNITYSDK_OFFSET(0x16C7E440)
#define MFPACOKPGPO_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x16C7D130)
#define MFPACOKPGPO_LEFBOPIPPIK_OFFSET UNITYSDK_OFFSET(0x16C7C920)
#define MFPACOKPGPO_LEMOCJONLNJ_OFFSET UNITYSDK_OFFSET(0x16C7E3B0)
#define MFPACOKPGPO_LMKOALDMGHK_OFFSET UNITYSDK_OFFSET(0x16C7CF50)
#define MFPACOKPGPO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x16C7D790)
#define MFPACOKPGPO_LOCAAOOANIM_OFFSET UNITYSDK_OFFSET(0x16C7CD60)
#define MFPACOKPGPO_MIGIDIFMKIO_OFFSET UNITYSDK_OFFSET(0x16C7BA00)
#define MFPACOKPGPO_NLBDICMBJAA_OFFSET UNITYSDK_OFFSET(0x16C7BA10)
#define MFPACOKPGPO_ODMFMIIJDBG_OFFSET UNITYSDK_OFFSET(0x16C7E1B0)
#define MFPACOKPGPO_OJHOGKOEMPI_OFFSET UNITYSDK_OFFSET(0x16C7E3C0)
#define MFPACOKPGPO__CTOR_OFFSET UNITYSDK_OFFSET(0x16C7B9F0)

inline static constexpr unsigned int MFPACOKPGPO_TypeDefinitionIndex = 68132;

class MFPACOKPGPO : public ::System::Object
{
public:
	// static const ::System::Boolean KGPKJPOMHLF = 0x0; // 0x0
	::Foundation::AssetPath OJEHGNPNDIO; // 0x10
	::UnityEngine::GameObject* OPOLMJLMHCD; // 0x20
	::MoleMole::MonoPhotoWallEdge* HKANOMGCHCH; // 0x28
	::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* AANIDLOMFOB; // 0x30
	::Foundation::AssetPath LENEHFHJJAH; // 0x38
	::Foundation::AssetPath _EMFNGPCECMO_k__BackingField; // 0x48
	::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* CIJECJKFBPD; // 0x58
	::UnityEngine::Vector3 IOFGAFHDCKI; // 0x60
	::UnityEngine::Quaternion DECHGNFPCED; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPACOKPGPO__CTOR_OFFSET))(this);
	}

	::System::Void MIGIDIFMKIO(::Foundation::AssetPath EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MFPACOKPGPO_MIGIDIFMKIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NLBDICMBJAA(::ONMDKEDOKED JKBLDFBGBPK, ::MoleMole::Config::ConfigPhotoWall* NOPELKKHCNN)
	{
		return ((::System::Void(*)(::PVOID, ::ONMDKEDOKED, ::MoleMole::Config::ConfigPhotoWall*))((::PBYTE)hIl2Cpp + MFPACOKPGPO_NLBDICMBJAA_OFFSET))(this, JKBLDFBGBPK, NOPELKKHCNN);
	}

	::System::Boolean FNPAHEKGDNH(::UnityEngine::Ray IMBDAEHJOMD, ::MFPACOKPGPO* NKHHGPHJMNP)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Ray, ::MFPACOKPGPO*))((::PBYTE)hIl2Cpp + MFPACOKPGPO_FNPAHEKGDNH_OFFSET))(this, IMBDAEHJOMD, NKHHGPHJMNP);
	}

	::UnityEngine::Vector3 LEFBOPIPPIK()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPACOKPGPO_LEFBOPIPPIK_OFFSET))(this);
	}

	::System::Boolean AFMJDLODHKB(::UnityEngine::Plane& KIJGEEDPBJD, ::System::Int32 KMOHKCADPNA)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Plane&, ::System::Int32))((::PBYTE)hIl2Cpp + MFPACOKPGPO_AFMJDLODHKB_OFFSET))(this, KIJGEEDPBJD, KMOHKCADPNA);
	}

	::System::Boolean LOCAAOOANIM(::UnityEngine::GameObject* HODAIDNDKHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MFPACOKPGPO_LOCAAOOANIM_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void LMKOALDMGHK(::Foundation::AssetPath OIIHCACKLHD, ::UnityEngine::GameObject* NIDBLOCIBPC)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MFPACOKPGPO_LMKOALDMGHK_OFFSET))(this, OIIHCACKLHD, NIDBLOCIBPC);
	}

	::Foundation::AssetPath ELPFAFFJNKI()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPACOKPGPO_ELPFAFFJNKI_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG(::Foundation::AssetPath CJBJONJDOLI, ::UnityEngine::Vector3 BGMOKMCKIIA, ::UnityEngine::Quaternion APANMPCMFFL, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>* ADNIDJNEDGO)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Action_2<::Foundation::AssetPath, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MFPACOKPGPO_LNFENFDLMIG_OFFSET))(this, CJBJONJDOLI, BGMOKMCKIIA, APANMPCMFFL, ADNIDJNEDGO);
	}

	::System::Boolean GPHHCJFIKPK(::UnityEngine::Vector3 BAECLPHLLHO, ::UnityEngine::Quaternion AIDNPCBEIKH, ::UnityEngine::Vector3& GBAHDKCCELK, ::UnityEngine::Quaternion& JAGGJNMPGGC)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MFPACOKPGPO_GPHHCJFIKPK_OFFSET))(this, BAECLPHLLHO, AIDNPCBEIKH, GBAHDKCCELK, JAGGJNMPGGC);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPACOKPGPO_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void AOIIEIOHABL(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MFPACOKPGPO_AOIIEIOHABL_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Void ODMFMIIJDBG(::UnityEngine::Vector3 AMKHCCDFJAF, ::UnityEngine::Quaternion KEFFDFBFNJI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MFPACOKPGPO_ODMFMIIJDBG_OFFSET))(this, AMKHCCDFJAF, KEFFDFBFNJI);
	}

	::UnityEngine::Quaternion LEMOCJONLNJ()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPACOKPGPO_LEMOCJONLNJ_OFFSET))(this);
	}

	::System::Void OJHOGKOEMPI(::UnityEngine::Vector3 AMKHCCDFJAF, ::UnityEngine::Quaternion KEFFDFBFNJI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MFPACOKPGPO_OJHOGKOEMPI_OFFSET))(this, AMKHCCDFJAF, KEFFDFBFNJI);
	}

	::UnityEngine::GameObject* HAEPBCFIKIN()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPACOKPGPO_HAEPBCFIKIN_OFFSET))(this);
	}

	::System::Void FJIGJJFGEDE(::UnityEngine::Vector3 AMKHCCDFJAF, ::UnityEngine::Quaternion KEFFDFBFNJI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MFPACOKPGPO_FJIGJJFGEDE_OFFSET))(this, AMKHCCDFJAF, KEFFDFBFNJI);
	}

	::DJGGAKHLGON* BPLNPNMENEJ(::MFPACOKPGPO* PHEDDJEOFIG)
	{
		return ((::DJGGAKHLGON*(*)(::PVOID, ::MFPACOKPGPO*))((::PBYTE)hIl2Cpp + MFPACOKPGPO_BPLNPNMENEJ_OFFSET))(this, PHEDDJEOFIG);
	}

	::System::Boolean FPFHBOHDAAM(::UnityEngine::Vector3 GBAHDKCCELK, ::UnityEngine::Quaternion JAGGJNMPGGC, ::UnityEngine::Vector3& BAECLPHLLHO, ::UnityEngine::Quaternion& AIDNPCBEIKH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + MFPACOKPGPO_FPFHBOHDAAM_OFFSET))(this, GBAHDKCCELK, JAGGJNMPGGC, BAECLPHLLHO, AIDNPCBEIKH);
	}
};
