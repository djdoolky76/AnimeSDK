#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/AOPEILFBPHP.h"
#include "unitysdk/CMJPOKJIEGP.h"
#include "unitysdk/IGKFNIEJGLM.h"
class EANJILGOKBE;
class EKCBMKJJDNL;
class FAOGNFIIOBL;
namespace RPG::Client { class PrefabLoadMeta; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KBPAADAANEO_CTOR_OFFSET UNITYSDK_OFFSET(0xB325CE0)
#define KBPAADAANEO_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB325470)
#define KBPAADAANEO_EEEDFOHGLPN_OFFSET UNITYSDK_OFFSET(0xB3257C0)
#define KBPAADAANEO_GKECGDOADNG_OFFSET UNITYSDK_OFFSET(0xB325B30)
#define KBPAADAANEO_ICPBEMGMKHJ_OFFSET UNITYSDK_OFFSET(0xB3258E0)
#define KBPAADAANEO_IGBFCGELIGI_OFFSET UNITYSDK_OFFSET(0xB325C00)
#define KBPAADAANEO_KDIKAJLHFBE_OFFSET UNITYSDK_OFFSET(0xB3256B0)
#define KBPAADAANEO_LMNHKOCHGCL_OFFSET UNITYSDK_OFFSET(0xB3254E0)
#define KBPAADAANEO_NCAOGJDNEKD_OFFSET UNITYSDK_OFFSET(0xB325700)
#define KBPAADAANEO_ONIOCDGIMIJ_OFFSET UNITYSDK_OFFSET(0xB325950)
#define KBPAADAANEO_PJHFPGBCNAJ_OFFSET UNITYSDK_OFFSET(0xB325850)
#define KBPAADAANEO__ONBIND_OFFSET UNITYSDK_OFFSET(0xB3250E0)
#define KBPAADAANEO___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0xB325D10)
#define KBPAADAANEO___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0xB325D80)

	class KBPAADAANEO : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* POANIHJOAAK; // 0x60
		::UnityEngine::GameObject* KKBENDMOCNB; // 0x68
		::EKCBMKJJDNL* FLKCLECBEGJ; // 0x70
		::EKCBMKJJDNL* KMBFFDGOCLE; // 0x78
		::FAOGNFIIOBL* POIPFGFDNAG; // 0x80
		::RPG::Client::PrefabLoadMeta* KFHDIHPEGJG; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KBPAADAANEO_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void LMNHKOCHGCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO_LMNHKOCHGCL_OFFSET))(this);
		}

		::System::Void NCAOGJDNEKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO_NCAOGJDNEKD_OFFSET))(this);
		}

		::System::Void EEEDFOHGLPN(::CMJPOKJIEGP a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMJPOKJIEGP))((::PBYTE)hIl2Cpp + KBPAADAANEO_EEEDFOHGLPN_OFFSET))(this, a1);
		}

		::System::Void PJHFPGBCNAJ(::AOPEILFBPHP a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPEILFBPHP))((::PBYTE)hIl2Cpp + KBPAADAANEO_PJHFPGBCNAJ_OFFSET))(this, a1);
		}

		::System::Void ICPBEMGMKHJ(::EANJILGOKBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EANJILGOKBE*))((::PBYTE)hIl2Cpp + KBPAADAANEO_ICPBEMGMKHJ_OFFSET))(this, a1);
		}

		::System::Void KDIKAJLHFBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO_KDIKAJLHFBE_OFFSET))(this);
		}

		::System::Void ONIOCDGIMIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO_ONIOCDGIMIJ_OFFSET))(this);
		}

		::System::Void GKECGDOADNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO_GKECGDOADNG_OFFSET))(this);
		}

		::System::Boolean IGBFCGELIGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO_IGBFCGELIGI_OFFSET))(this);
		}

		::System::Void __OnBind_b__0_0(::EANJILGOKBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EANJILGOKBE*))((::PBYTE)hIl2Cpp + KBPAADAANEO___ONBIND_B__0_0_OFFSET))(this, a1);
		}

		::System::Void __OnBind_b__0_1(::EANJILGOKBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EANJILGOKBE*))((::PBYTE)hIl2Cpp + KBPAADAANEO___ONBIND_B__0_1_OFFSET))(this, a1);
		}

	};
