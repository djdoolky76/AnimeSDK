#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MIKBKMMKEML;
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Transform; }

#define MEEFFCDLJKD_EAPIOBPKMKK_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x95B3A0)
#define MEEFFCDLJKD_EAPIOBPKMKK_DKEDHCFJEHA_OFFSET UNITYSDK_OFFSET(0x95B3E0)
#define MEEFFCDLJKD_EAPIOBPKMKK_FBGMECDNLEF_OFFSET UNITYSDK_OFFSET(0x95B440)
#define MEEFFCDLJKD_EAPIOBPKMKK_FKMOKFNLFOA_OFFSET UNITYSDK_OFFSET(0x95B3C0)
#define MEEFFCDLJKD_EAPIOBPKMKK_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x95B430)
#define MEEFFCDLJKD_EAPIOBPKMKK_ICBJLMMEKDO_OFFSET UNITYSDK_OFFSET(0x95B2D0)
#define MEEFFCDLJKD_EAPIOBPKMKK_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x95B2C0)
#define MEEFFCDLJKD_EAPIOBPKMKK_MHNNOPICIIE_OFFSET UNITYSDK_OFFSET(0x95B400)

inline static constexpr unsigned int MEEFFCDLJKD_EAPIOBPKMKK_TypeDefinitionIndex = 96609;

struct alignas(8) MEEFFCDLJKD_EAPIOBPKMKK
{
	::System::UInt32 BKLGNCBNEGM; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::Transform* LHPFMGBDFPN; // 0x18
	::UnityEngine::Transform* IAPKEGGEOJJ; // 0x20
	::System::Boolean MANPDBEBFCK; // 0x28
	::System::Byte _padding1[0x7];
	::MIKBKMMKEML* OMKHIOICDHG; // 0x30
	::UnityEngine::SpriteRenderer* ONJBJLHFLHA; // 0x38
	::MIKBKMMKEML* ENDGPGBKIKB; // 0x40
	::UnityEngine::SpriteRenderer* DLBPKOMJJOO; // 0x48
	::UnityEngine::SpriteRenderer* MKKFNJAFCLE; // 0x50
	::MIKBKMMKEML* IDDJDDKMBDE; // 0x58

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void ICBJLMMEKDO(::UnityEngine::Color JBBFCGAMDHI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_ICBJLMMEKDO_OFFSET))(this, JBBFCGAMDHI);
	}

	/*
	::MEEFFCDLJKD_EAPIOBPKMKK BBOMJDBNHIC(::UnityEngine::Transform* KFIEOIPFDMD, ::UnityEngine::Transform* JDCNGJBBEAO)
	{
		return ((::MEEFFCDLJKD_EAPIOBPKMKK(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_BBOMJDBNHIC_OFFSET))(this, KFIEOIPFDMD, JDCNGJBBEAO);
	}
	*/

	::System::Void FKMOKFNLFOA(::UnityEngine::Quaternion KMHNMIIOGAK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_FKMOKFNLFOA_OFFSET))(this, KMHNMIIOGAK);
	}

	::UnityEngine::Vector3 DKEDHCFJEHA(::System::Int32 PGFEGMGHPAG, ::System::Boolean FKGMECIECDM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_DKEDHCFJEHA_OFFSET))(this, PGFEGMGHPAG, FKGMECIECDM);
	}

	/*
	::MEEFFCDLJKD_EAPIOBPKMKK MHNNOPICIIE(::KBKLCGKKIPI CKPGOKHECCH)
	{
		return ((::MEEFFCDLJKD_EAPIOBPKMKK(*)(::PVOID, ::KBKLCGKKIPI))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_MHNNOPICIIE_OFFSET))(this, CKPGOKHECCH);
	}
	*/

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void FBGMECDNLEF(::UnityEngine::GameObject* FEHBADDDOGM, ::System::String* HMJBMNAAGKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_EAPIOBPKMKK_FBGMECDNLEF_OFFSET))(this, FEHBADDDOGM, HMJBMNAAGKB);
	}
};
