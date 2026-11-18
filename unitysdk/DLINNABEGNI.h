#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ODLENAABEIH.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FGCOIBFFCHB;
class IOOIHHOJOPI;
class LGINJIKKBJA;
namespace System { class String; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define DLINNABEGNI_AHNIJJNCCHC_OFFSET UNITYSDK_OFFSET(0x1208C2E0)
#define DLINNABEGNI_DEAEFFDGMCN_OFFSET UNITYSDK_OFFSET(0x1208C430)
#define DLINNABEGNI_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x1208B4B0)
#define DLINNABEGNI_FNMMGHLFPKP_OFFSET UNITYSDK_OFFSET(0x1208C1F0)
#define DLINNABEGNI_GIDCAPLNALF_OFFSET UNITYSDK_OFFSET(0x1208C080)
#define DLINNABEGNI_HAEEPMMHBGJ_OFFSET UNITYSDK_OFFSET(0x1208C240)
#define DLINNABEGNI_JOJLALGKEKE_OFFSET UNITYSDK_OFFSET(0x1208BE60)
#define DLINNABEGNI_PGMHOMLCHMF_OFFSET UNITYSDK_OFFSET(0x1208BBD0)
#define DLINNABEGNI__CTOR_OFFSET UNITYSDK_OFFSET(0x1208BB80)

inline static constexpr unsigned int DLINNABEGNI_TypeDefinitionIndex = 83017;

class DLINNABEGNI : public ::PBJOCICFNGK
{
public:
	::UnityEngine::RectTransform* EFBFGNMLFJL; // 0x50
	::LGINJIKKBJA* PMGINAMIFCA; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* HIAIKHDFCLN; // 0x60
	::UnityEngine::RectTransform* LPJCAKAHBBP; // 0x68
	::UnityEngine::RectTransform* LHCKNKMDBDN; // 0x70
	::UnityEngine::UI::Extension::UITabButton* JNMAEDAAGAK; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* MBBANKCLDOA; // 0x80
	::FGCOIBFFCHB* AOOLNBKIHAG; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLINNABEGNI__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + DLINNABEGNI_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void PGMHOMLCHMF(::System::String* ALOPDCAFGCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DLINNABEGNI_PGMHOMLCHMF_OFFSET))(this, ALOPDCAFGCP);
	}

	::System::Void JOJLALGKEKE(::System::Int32 APMOMAECNPH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLINNABEGNI_JOJLALGKEKE_OFFSET))(this, APMOMAECNPH);
	}

	::System::Void GIDCAPLNALF(::Foundation::AssetPath JBNBMFNNELP)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + DLINNABEGNI_GIDCAPLNALF_OFFSET))(this, JBNBMFNNELP);
	}

	::System::Void FNMMGHLFPKP(::System::Int32 KEMFICIHIGH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DLINNABEGNI_FNMMGHLFPKP_OFFSET))(this, KEMFICIHIGH);
	}

	::System::Void HAEEPMMHBGJ(::System::Boolean LIEJIGMGGOL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DLINNABEGNI_HAEEPMMHBGJ_OFFSET))(this, LIEJIGMGGOL);
	}

	::UnityEngine::UI::Extension::UITabButton* AHNIJJNCCHC()
	{
		return ((::UnityEngine::UI::Extension::UITabButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLINNABEGNI_AHNIJJNCCHC_OFFSET))(this);
	}

	::System::Void DEAEFFDGMCN(::ODLENAABEIH JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::ODLENAABEIH))((::PBYTE)hIl2Cpp + DLINNABEGNI_DEAEFFDGMCN_OFFSET))(this, JKBLDFBGBPK);
	}
};
