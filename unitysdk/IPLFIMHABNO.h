#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IPLFIMHABNO;
namespace RPG::GameCore { class DamageDisplayData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define IPLFIMHABNO_CTOR_OFFSET UNITYSDK_OFFSET(0xC9AA9C0)
#define IPLFIMHABNO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0xC9AAA40)
#define IPLFIMHABNO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0xC9AA920)

inline static constexpr unsigned int IPLFIMHABNO_TypeDefinitionIndex = 24624;

	class IPLFIMHABNO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* JOKLPMNDMAJ; // 0x18
		::RPG::GameCore::DamageDisplayData* AIMHHKODFJN; // 0x20
		::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x28
		::RPG::GameCore::DynamicFloat* AJHHCOHFIFA; // 0x30
		::RPG::GameCore::TargetEvaluator* NFMKOFNEKLA; // 0x38
		::RPG::GameCore::AttackType HIFKEKCELFB; // 0x40
		::System::Boolean AELFMDGFAIK; // 0x44
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AttackDamageType PAIECOBACKB; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLFIMHABNO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IPLFIMHABNO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPLFIMHABNO*))((::PBYTE)hIl2Cpp + IPLFIMHABNO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IPLFIMHABNO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IPLFIMHABNO*))((::PBYTE)hIl2Cpp + IPLFIMHABNO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
