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

#define KBPAADAANEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAFED0)
#define KBPAADAANEO_EEEDFOHGLPN_OFFSET UNITYSDK_OFFSET(0xBBAF9C0)
#define KBPAADAANEO_GKECGDOADNG_OFFSET UNITYSDK_OFFSET(0xBBAFD20)
#define KBPAADAANEO_ICPBEMGMKHJ_OFFSET UNITYSDK_OFFSET(0xBBAFAE0)
#define KBPAADAANEO_IGBFCGELIGI_OFFSET UNITYSDK_OFFSET(0xBBAFDF0)
#define KBPAADAANEO_KDIKAJLHFBE_OFFSET UNITYSDK_OFFSET(0xBBAF8B0)
#define KBPAADAANEO_LMNHKOCHGCL_OFFSET UNITYSDK_OFFSET(0xBBAF6E0)
#define KBPAADAANEO_NCAOGJDNEKD_OFFSET UNITYSDK_OFFSET(0xBBAF900)
#define KBPAADAANEO_ONIOCDGIMIJ_OFFSET UNITYSDK_OFFSET(0xBBAFB50)
#define KBPAADAANEO_PJHFPGBCNAJ_OFFSET UNITYSDK_OFFSET(0xBBAFA50)
#define KBPAADAANEO__ONBIND_OFFSET UNITYSDK_OFFSET(0xBBAF1E0)
#define KBPAADAANEO__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBBAF680)
#define KBPAADAANEO___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0xBBAFF00)
#define KBPAADAANEO___ONBIND_B__0_1_OFFSET UNITYSDK_OFFSET(0xBBAFF70)

inline static constexpr unsigned int KBPAADAANEO_TypeDefinitionIndex = 74102;

	class KBPAADAANEO : public ::FMPCODLIOLG
	{
	public:
		::EKCBMKJJDNL* KMBFFDGOCLE; // 0x60
		::EKCBMKJJDNL* FLKCLECBEGJ; // 0x68
		::RPG::Client::PrefabLoadMeta* KFHDIHPEGJG; // 0x70
		::FAOGNFIIOBL* POIPFGFDNAG; // 0x78
		::UnityEngine::GameObject* KKBENDMOCNB; // 0x80
		::UnityEngine::Transform* POANIHJOAAK; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBPAADAANEO__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + KBPAADAANEO__ONINITPARAMS_OFFSET))(this, a1);
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
