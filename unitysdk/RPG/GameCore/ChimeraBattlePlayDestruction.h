#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattlePlayDestruction; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F91FCA0)
#define RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F91FCB0)
#define RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F921BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattlePlayDestruction_TypeDefinitionIndex = 16040;

	class ChimeraBattlePlayDestruction : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* DestructionComponentAttachPoint; // 0x20
		::RPG::MVector3 ForceDirection; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattlePlayDestruction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattlePlayDestruction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattlePlayDestruction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattlePlayDestruction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
