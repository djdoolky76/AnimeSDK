#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHLIKDLCNKF.h"

class AODIFLIBBJA;
namespace MoleMole::Config { class PhotoCameraModeOverride; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NDLMJBCPMKD_BDHLGHAODDO_OFFSET UNITYSDK_OFFSET(0x13137900)
#define NDLMJBCPMKD_BJKGAIIEDLA_OFFSET UNITYSDK_OFFSET(0x13137770)
#define NDLMJBCPMKD_BNOHPIKKFDO_OFFSET UNITYSDK_OFFSET(0x131378F0)
#define NDLMJBCPMKD_GLCADOGHFCK_OFFSET UNITYSDK_OFFSET(0x13137560)
#define NDLMJBCPMKD_IDNCOKIKHFK_OFFSET UNITYSDK_OFFSET(0x13137500)
#define NDLMJBCPMKD_IGBNFHBDCBG_OFFSET UNITYSDK_OFFSET(0x131378E0)
#define NDLMJBCPMKD_KEFMBIMDCNB_OFFSET UNITYSDK_OFFSET(0x13137860)
#define NDLMJBCPMKD_MHHJPBJILBJ_OFFSET UNITYSDK_OFFSET(0x13137810)
#define NDLMJBCPMKD_OMMKJJIPGKL_OFFSET UNITYSDK_OFFSET(0x13137910)
#define NDLMJBCPMKD__CTOR_OFFSET UNITYSDK_OFFSET(0x131378D0)

inline static constexpr unsigned int NDLMJBCPMKD_TypeDefinitionIndex = 54687;

class NDLMJBCPMKD : public ::JHLIKDLCNKF
{
public:
	::System::String* _LLFCIJEIFIG_k__BackingField; // 0x18
	::UnityEngine::GameObject* _BCMNDNFODHD_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMJBCPMKD__CTOR_OFFSET))(this);
	}

	::System::Void IDNCOKIKHFK(::AODIFLIBBJA* GEJCKFFFKCL)
	{
		return ((::System::Void(*)(::PVOID, ::AODIFLIBBJA*))((::PBYTE)hIl2Cpp + NDLMJBCPMKD_IDNCOKIKHFK_OFFSET))(this, GEJCKFFFKCL);
	}

	::System::Void MHHJPBJILBJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMJBCPMKD_MHHJPBJILBJ_OFFSET))(this);
	}

	::System::Void KEFMBIMDCNB(::MoleMole::Config::PhotoCameraModeOverride* EKPAIOGJEPO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::PhotoCameraModeOverride*))((::PBYTE)hIl2Cpp + NDLMJBCPMKD_KEFMBIMDCNB_OFFSET))(this, EKPAIOGJEPO);
	}

	::System::Void GLCADOGHFCK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMJBCPMKD_GLCADOGHFCK_OFFSET))(this);
	}

	::System::Void IGBNFHBDCBG(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NDLMJBCPMKD_IGBNFHBDCBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BJKGAIIEDLA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMJBCPMKD_BJKGAIIEDLA_OFFSET))(this);
	}

	::System::Void BNOHPIKKFDO(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NDLMJBCPMKD_BNOHPIKKFDO_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* BDHLGHAODDO()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMJBCPMKD_BDHLGHAODDO_OFFSET))(this);
	}

	::System::String* OMMKJJIPGKL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDLMJBCPMKD_OMMKJJIPGKL_OFFSET))(this);
	}
};
