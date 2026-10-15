#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattlePlayDestruction; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D597F80)
#define RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D597F90)
#define RPG_GAMECORE_CHIMERABATTLEPLAYDESTRUCTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5999F0)

namespace RPG::GameCore
{
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
