#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfBoom; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFFFFAEBNOI_CCBFBLMACLA_OFFSET UNITYSDK_OFFSET(0xCF0A5A0)
#define AFFFFAEBNOI_CTOR_OFFSET UNITYSDK_OFFSET(0xCF09090)
#define AFFFFAEBNOI_EDOMALELMED_OFFSET UNITYSDK_OFFSET(0xCF0A490)
#define AFFFFAEBNOI_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xCF0AE30)
#define AFFFFAEBNOI_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xCF091A0)
#define AFFFFAEBNOI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCF0AF10)

inline static constexpr unsigned int AFFFFAEBNOI_TypeDefinitionIndex = 77913;

	class AFFFFAEBNOI : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_SelfBoom* EOOLHMDBDFA; // 0x28
		::System::Collections::Generic::List_1<::System::Int32>* DLLFLMBCNEN; // 0x30
		::System::Single LDJONAIFFOB; // 0x38
		::System::Single LLNIGIGFCEA; // 0x3C
		::System::Boolean NEGOBENGEFK; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single COAELIHGAHH; // 0x44
		::System::Single LFFKDKCGGOE; // 0x48
		::System::Single KBELPMJNDMB; // 0x4C
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + AFFFFAEBNOI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFFFFAEBNOI_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void CCBFBLMACLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFFFFAEBNOI_CCBFBLMACLA_OFFSET))(this);
		}

		::System::Void EDOMALELMED(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + AFFFFAEBNOI_EDOMALELMED_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFFFFAEBNOI_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AFFFFAEBNOI_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
