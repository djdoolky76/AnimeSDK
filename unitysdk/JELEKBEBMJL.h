#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
class DKEFAMNAFAK;
class PNFAENKDBIJ;
namespace RPG::Client { class ChenLingBattleTeamSnapshot; }
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Split; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JELEKBEBMJL_AKFHNEKKOHN_OFFSET UNITYSDK_OFFSET(0x16640290)
#define JELEKBEBMJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1663F120)
#define JELEKBEBMJL_GHLAOLDJGJP_OFFSET UNITYSDK_OFFSET(0x16640500)
#define JELEKBEBMJL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x16640D90)
#define JELEKBEBMJL_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1663F1B0)
#define JELEKBEBMJL_IINDJFFOANG_OFFSET UNITYSDK_OFFSET(0x1663F800)
#define JELEKBEBMJL_JEJHHIFCOAE_OFFSET UNITYSDK_OFFSET(0x1663FD10)
#define JELEKBEBMJL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x16640D10)
#define JELEKBEBMJL_KMCBMMDJPHO_OFFSET UNITYSDK_OFFSET(0x166408A0)
#define JELEKBEBMJL_PEOMHKPEBLJ_OFFSET UNITYSDK_OFFSET(0x1663FA40)

	class JELEKBEBMJL : public ::JNALBIEDNLH
	{
	public:
		::DKEFAMNAFAK* NOHAHONHMIE; // 0x28
		::RPG::GameCore::ChenLingBattleAbility_Split* IIEPLNBHPDM; // 0x30
		::PNFAENKDBIJ* DDIJCCOBNLH; // 0x38
		::RPG::Client::ChenLingBattleTeamSnapshot* AFALCNGOHLE; // 0x40
		::System::Single KLAPGHNKPIP; // 0x48
		::System::Single IHNHOLJCGOB; // 0x4C
		::RPG::GameCore::FixPoint CGNHJCHPPKH; // 0x50
		::UnityEngine::Vector3 CIGDGLCHDEH; // 0x58
		::System::Int32 CIAJDNHFBKN; // 0x64
		::System::Single HBANLBGKNKP; // 0x68
		::UnityEngine::Vector3 MJGCMOMLOAC; // 0x6C
		::UnityEngine::Quaternion IGLOIJCGKPC; // 0x78
		::System::Boolean PBALABFMGND; // 0x88
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + JELEKBEBMJL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELEKBEBMJL_HKKFFCBJOKM_OFFSET))(this);
		}

		::ALMFLCJCHKP* IINDJFFOANG()
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JELEKBEBMJL_IINDJFFOANG_OFFSET))(this);
		}

		::System::Void JEJHHIFCOAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELEKBEBMJL_JEJHHIFCOAE_OFFSET))(this);
		}

		::UnityEngine::Vector3 PEOMHKPEBLJ(::ALMFLCJCHKP* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + JELEKBEBMJL_PEOMHKPEBLJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AKFHNEKKOHN(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JELEKBEBMJL_AKFHNEKKOHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GHLAOLDJGJP(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JELEKBEBMJL_GHLAOLDJGJP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* KMCBMMDJPHO(::UnityEngine::Vector3 a1, ::System::Int32 a2, ::System::Single a3, ::System::Single a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JELEKBEBMJL_KMCBMMDJPHO_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JELEKBEBMJL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JELEKBEBMJL_HADOHLNHHGB_OFFSET))(this);
		}

	};
