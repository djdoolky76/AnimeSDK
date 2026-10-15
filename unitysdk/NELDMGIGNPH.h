#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
class OMNJCDDMLHI;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SummonSoldier; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NELDMGIGNPH_CTOR_OFFSET UNITYSDK_OFFSET(0xBB6FD90)
#define NELDMGIGNPH_FGFFFICOLCN_OFFSET UNITYSDK_OFFSET(0xBB70840)
#define NELDMGIGNPH_GONPDMJKNDG_OFFSET UNITYSDK_OFFSET(0xBB70640)
#define NELDMGIGNPH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBB70C00)
#define NELDMGIGNPH_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xBB6FEE0)
#define NELDMGIGNPH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBB70C40)

inline static constexpr unsigned int NELDMGIGNPH_TypeDefinitionIndex = 77923;

	class NELDMGIGNPH : public ::JNALBIEDNLH
	{
	public:
		::System::Collections::Generic::HashSet_1<::ALMFLCJCHKP*>* DIJCEKBNNKK; // 0x28
		::RPG::GameCore::ChenLingBattleAbility_SummonSoldier* GIEHPOMKGKG; // 0x30
		::System::Single DKOFFPPGEFI; // 0x38
		::System::Single LLNIGIGFCEA; // 0x3C
		::System::Boolean KLBDNLEGJPB; // 0x40
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + NELDMGIGNPH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELDMGIGNPH_HKKFFCBJOKM_OFFSET))(this);
		}

		::UnityEngine::Vector3 GONPDMJKNDG(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NELDMGIGNPH_GONPDMJKNDG_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean FGFFFICOLCN(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::OMNJCDDMLHI* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::OMNJCDDMLHI*))((::PBYTE)hIl2Cpp + NELDMGIGNPH_FGFFFICOLCN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NELDMGIGNPH_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NELDMGIGNPH_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
