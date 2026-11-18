#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define GGHKECHINNA_CBCHOEOCBMB_OFFSET UNITYSDK_OFFSET(0x4B0310)
#define GGHKECHINNA_CIBONHMNLEN_OFFSET UNITYSDK_OFFSET(0xBB8DAE0)
#define GGHKECHINNA_CLDONDNACKN_OFFSET UNITYSDK_OFFSET(0x4B02A0)
#define GGHKECHINNA_DIHFCICIHNO_OFFSET UNITYSDK_OFFSET(0x4B0290)
#define GGHKECHINNA_KPGGEAEJNKG_OFFSET UNITYSDK_OFFSET(0x4B0170)
#define GGHKECHINNA_NAMOOAOPCDN_OFFSET UNITYSDK_OFFSET(0x4B0280)
#define GGHKECHINNA_NDOHPCHJABB_OFFSET UNITYSDK_OFFSET(0x4B02C0)
#define GGHKECHINNA_OAGBICNMOID_OFFSET UNITYSDK_OFFSET(0x4B02F0)
#define GGHKECHINNA__CTOR_OFFSET UNITYSDK_OFFSET(0x4B0130)

inline static constexpr unsigned int GGHKECHINNA_TypeDefinitionIndex = 46829;

struct alignas(4) GGHKECHINNA
{
	::UnityEngine::Vector2 BEPMDFENBMH; // 0x10
	::UnityEngine::Vector2 OHOGDOMNHNK; // 0x18
	::UnityEngine::Vector2 OKEHKGLODCO; // 0x20

	::System::Void _ctor(::UnityEngine::Vector2 OHOGDOMNHNK, ::UnityEngine::Vector2 BEPMDFENBMH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GGHKECHINNA__CTOR_OFFSET))(this, OHOGDOMNHNK, BEPMDFENBMH);
	}

	::System::Boolean KPGGEAEJNKG(::UnityEngine::Vector2 CKPGOKHECCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + GGHKECHINNA_KPGGEAEJNKG_OFFSET))(this, CKPGOKHECCH);
	}

	/*
	static ::GGHKECHINNA CIBONHMNLEN(::GGHKECHINNA EJCBEJMGFAJ, ::GGHKECHINNA EBFCACIEKBC)
	{
		return ((::GGHKECHINNA(*)(::GGHKECHINNA, ::GGHKECHINNA))((::PBYTE)hIl2Cpp + GGHKECHINNA_CIBONHMNLEN_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
	*/

	::System::Single NAMOOAOPCDN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHKECHINNA_NAMOOAOPCDN_OFFSET))(this);
	}

	::System::Single DIHFCICIHNO()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHKECHINNA_DIHFCICIHNO_OFFSET))(this);
	}

	::System::Single CLDONDNACKN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHKECHINNA_CLDONDNACKN_OFFSET))(this);
	}

	::UnityEngine::Vector2 NDOHPCHJABB()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHKECHINNA_NDOHPCHJABB_OFFSET))(this);
	}

	::System::Single OAGBICNMOID()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHKECHINNA_OAGBICNMOID_OFFSET))(this);
	}

	::UnityEngine::Vector2 CBCHOEOCBMB()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHKECHINNA_CBCHOEOCBMB_OFFSET))(this);
	}
};
