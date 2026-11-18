#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGPAGGILINE_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define JKHKHKJEGMI_BBFALONAGNP_OFFSET UNITYSDK_OFFSET(0x18741770)
#define JKHKHKJEGMI_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x7CF500)
#define JKHKHKJEGMI_POKLCBMEJBC_1_OFFSET UNITYSDK_OFFSET(0x187414F0)
#define JKHKHKJEGMI_POKLCBMEJBC_OFFSET UNITYSDK_OFFSET(0x187413C0)
#define JKHKHKJEGMI__CTOR_OFFSET UNITYSDK_OFFSET(0x7CF420)

inline static constexpr unsigned int JKHKHKJEGMI_TypeDefinitionIndex = 63520;

struct alignas(8) JKHKHKJEGMI
{
	::System::Boolean HNKCAHIIEOH; // 0x10
	::System::Boolean EECEEGGDBDF; // 0x11
	::System::Boolean MDKGHBFJMPF; // 0x12
	::System::Byte _padding0[0x1];
	::UnityEngine::Vector2 BKCLFOHPDHC; // 0x14
	::UnityEngine::Vector2 HLPIGIFNCJM; // 0x1C
	::UnityEngine::Vector3 JEJMGCNBMAD; // 0x24
	::System::Single AHHEFJMNOED; // 0x30
	::System::Boolean KKIHPMHACIN; // 0x34
	::System::Boolean EHIEDIIMCBM; // 0x35
	::System::Boolean FHDHHENCECK; // 0x36
	::System::Boolean FGFMDINNFGE; // 0x37
	::System::Boolean DLJNKEHBKEH; // 0x38
	::System::Byte _padding1[0x3];
	::System::Single MLHEIBBAHBO; // 0x3C
	::System::Single IMKGNNOBBND; // 0x40
	::KGPAGGILINE_1<::System::Boolean> GGPCJELFOKH; // 0x44

	::System::Void _ctor(::System::Boolean PLEHLLEGGPL, ::System::Boolean DFCAKJGMJIO, ::System::Boolean DAHHJLMNDFN, ::UnityEngine::Vector2 KHELDPEJAAK, ::UnityEngine::Vector2 LGADIBABPHP, ::UnityEngine::Vector3 CLMNLPKFBFA, ::System::Single HKGFIEJDJJH, ::System::Boolean KFHGDEHJFEK, ::System::Boolean DBPEHBMHOIA, ::System::Boolean BLCFNNKPNMC, ::System::Boolean DIMMCKMODJF, ::System::Boolean NBGCOIILDOF, ::System::Single ECMMLDOBOCM, ::System::Single FLCHEBGJNGK, ::KGPAGGILINE_1<::System::Boolean> KKIMDPFDBID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Single, ::System::Single, ::KGPAGGILINE_1<::System::Boolean>))((::PBYTE)hIl2Cpp + JKHKHKJEGMI__CTOR_OFFSET))(this, PLEHLLEGGPL, DFCAKJGMJIO, DAHHJLMNDFN, KHELDPEJAAK, LGADIBABPHP, CLMNLPKFBFA, HKGFIEJDJJH, KFHGDEHJFEK, DBPEHBMHOIA, BLCFNNKPNMC, DIMMCKMODJF, NBGCOIILDOF, ECMMLDOBOCM, FLCHEBGJNGK, KKIMDPFDBID);
	}

	::System::Void GPKMPDHNCGL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHKHKJEGMI_GPKMPDHNCGL_OFFSET))(this);
	}

	static ::System::Void POKLCBMEJBC(::UnityEngine::Vector2 EGEGIMGMJHN, ::System::String* HIONLFKEGIA)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2, ::System::String*))((::PBYTE)hIl2Cpp + JKHKHKJEGMI_POKLCBMEJBC_OFFSET))(EGEGIMGMJHN, HIONLFKEGIA);
	}

	static ::System::Boolean BBFALONAGNP(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + JKHKHKJEGMI_BBFALONAGNP_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void POKLCBMEJBC_1(::UnityEngine::Vector3 EGEGIMGMJHN, ::System::String* HIONLFKEGIA)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + JKHKHKJEGMI_POKLCBMEJBC_1_OFFSET))(EGEGIMGMJHN, HIONLFKEGIA);
	}
};
