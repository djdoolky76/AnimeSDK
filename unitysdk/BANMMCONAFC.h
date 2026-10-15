#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleEffectLifeTimeType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class BLPHOHILHPC;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_CreateLaser; }
namespace RPG::GameCore { class ChenLingBattleEffectConfig; }
namespace RPG::GameCore { class ChenLingBattleEffectTier; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BANMMCONAFC_BPMLAGNCEHH_OFFSET UNITYSDK_OFFSET(0x15E7B1B0)
#define BANMMCONAFC_CTOR_OFFSET UNITYSDK_OFFSET(0x15E7B000)
#define BANMMCONAFC_GGMAJGMFCCB_OFFSET UNITYSDK_OFFSET(0x15E7BD10)
#define BANMMCONAFC_GMCKILFFEND_OFFSET UNITYSDK_OFFSET(0x15E7D140)
#define BANMMCONAFC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x15E7B9D0)
#define BANMMCONAFC_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x15E7BA70)
#define BANMMCONAFC_JEJHHIFCOAE_OFFSET UNITYSDK_OFFSET(0x15E7C660)
#define BANMMCONAFC_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15E7B130)
#define BANMMCONAFC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15E7BA10)
#define BANMMCONAFC_LMMLLOLPACE_OFFSET UNITYSDK_OFFSET(0x15E7C0A0)
#define BANMMCONAFC_OIEKONJEHMJ_OFFSET UNITYSDK_OFFSET(0x15E7BE40)
#define BANMMCONAFC_PFLPCNPMKBD_OFFSET UNITYSDK_OFFSET(0x15E7DA50)

	class BANMMCONAFC : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_CreateLaser* AFJCHEPKFNO; // 0x28
		::System::Collections::Generic::List_1<::ALMFLCJCHKP*>* GAGHFGFDONO; // 0x30
		::BLPHOHILHPC* AFFCEKNCAHL; // 0x38
		::System::Single HBANLBGKNKP; // 0x40
		::System::Single COCJDAKNIAP; // 0x44
		::System::Boolean OELBLBCINNB; // 0x48
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + BANMMCONAFC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANMMCONAFC_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANMMCONAFC_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANMMCONAFC_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANMMCONAFC_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void BPMLAGNCEHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANMMCONAFC_BPMLAGNCEHH_OFFSET))(this);
		}

		::System::Void JEJHHIFCOAE(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + BANMMCONAFC_JEJHHIFCOAE_OFFSET))(this, a1, a2);
		}

		::System::Void LMMLLOLPACE(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + BANMMCONAFC_LMMLLOLPACE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ChenLingBattleEffectConfig* GGMAJGMFCCB(::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>* a1, ::System::String* a2, ::RPG::MVector3 a3, ::System::String* a4, ::System::Boolean a5, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType a6, ::System::UInt32 a7, ::System::Boolean a8)
		{
			return ((::RPG::GameCore::ChenLingBattleEffectConfig*(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ChenLingBattleEffectTier*>*, ::System::String*, ::RPG::MVector3, ::System::String*, ::System::Boolean, ::RPG::GameCore::ChenLingBattleEffectLifeTimeType, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + BANMMCONAFC_GGMAJGMFCCB_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void OIEKONJEHMJ(::ALMFLCJCHKP* a1, ::UnityEngine::Vector3 a2, ::RPG::GameCore::ChenLingBattleEffectConfig* a3, ::ALMFLCJCHKP* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::UnityEngine::Vector3, ::RPG::GameCore::ChenLingBattleEffectConfig*, ::ALMFLCJCHKP*, ::System::Action*))((::PBYTE)hIl2Cpp + BANMMCONAFC_OIEKONJEHMJ_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector2Int PFLPCNPMKBD(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BANMMCONAFC_PFLPCNPMKBD_OFFSET))(this, a1);
		}

		::System::Boolean GMCKILFFEND(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Object*))((::PBYTE)hIl2Cpp + BANMMCONAFC_GMCKILFFEND_OFFSET))(this, a1, a2, a3);
		}

	};
