#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDicePair; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3BD710)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F3BD770)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F3BF7F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDicePair_TypeDefinitionIndex = 16254;

	class DiceCombatPredicateConfig_HasDicePair : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* PairCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDicePair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICEPAIR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
