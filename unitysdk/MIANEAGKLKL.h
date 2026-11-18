#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CFLJOMGPODL.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

class GLFBAHGPEFO;
class MIANEAGKLKL_LPCNLLCJFLN;
namespace UnityEngine { class Transform; }

#define MIANEAGKLKL_AKAKFLDAIIP_OFFSET UNITYSDK_OFFSET(0x12D8B470)
#define MIANEAGKLKL_CBIIAFHMHFF_OFFSET UNITYSDK_OFFSET(0x12D8ABB0)
#define MIANEAGKLKL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12D89210)
#define MIANEAGKLKL_GEGKOCEICPK_OFFSET UNITYSDK_OFFSET(0x12D8AF40)
#define MIANEAGKLKL_HBLEBCNPABB_OFFSET UNITYSDK_OFFSET(0x12D8B440)
#define MIANEAGKLKL_IMKEMPBBDJB_OFFSET UNITYSDK_OFFSET(0x12D892E0)
#define MIANEAGKLKL_ONCREATE_OFFSET UNITYSDK_OFFSET(0x12D89130)
#define MIANEAGKLKL_ONGFIMHLBJF_OFFSET UNITYSDK_OFFSET(0x12D8B530)
#define MIANEAGKLKL_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x12D89370)
#define MIANEAGKLKL__CTOR_OFFSET UNITYSDK_OFFSET(0x12D892C0)

inline static constexpr unsigned int MIANEAGKLKL_TypeDefinitionIndex = 76127;

class MIANEAGKLKL
{
public:
	::MIANEAGKLKL_LPCNLLCJFLN* AOMEKLKOPJA; // 0x10
	::GLFBAHGPEFO* LBBMPIIHJJI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANEAGKLKL__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANEAGKLKL_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANEAGKLKL_DISPOSE_OFFSET))(this);
	}

	::CFLJOMGPODL IMKEMPBBDJB(::System::Int32 KKIIJGFNHOD)
	{
		return ((::CFLJOMGPODL(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIANEAGKLKL_IMKEMPBBDJB_OFFSET))(this, KKIIJGFNHOD);
	}

	::System::Void PLCJNBHECGC(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIANEAGKLKL_PLCJNBHECGC_OFFSET))(this, PMNLNNGEIFM);
	}

	::Unity::Jobs::JobHandle HBLEBCNPABB()
	{
		return ((::Unity::Jobs::JobHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANEAGKLKL_HBLEBCNPABB_OFFSET))(this);
	}

	::System::Void AKAKFLDAIIP(::System::Int32 KKIIJGFNHOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIANEAGKLKL_AKAKFLDAIIP_OFFSET))(this, KKIIJGFNHOD);
	}

	::System::Void ONGFIMHLBJF(::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MIANEAGKLKL_ONGFIMHLBJF_OFFSET))(this, GKBJOPJKCLB);
	}

	::System::Void GEGKOCEICPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANEAGKLKL_GEGKOCEICPK_OFFSET))(this);
	}

	::System::Void CBIIAFHMHFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIANEAGKLKL_CBIIAFHMHFF_OFFSET))(this);
	}
};
