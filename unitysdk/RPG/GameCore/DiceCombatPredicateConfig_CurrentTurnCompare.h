#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_CurrentTurnCompare; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60BCC0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60BCD0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60F370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_CurrentTurnCompare_TypeDefinitionIndex = 16113;

	class DiceCombatPredicateConfig_CurrentTurnCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentTurnCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTTURNCOMPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
