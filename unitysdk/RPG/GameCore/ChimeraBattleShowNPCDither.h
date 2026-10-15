#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleShowNPCDither; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56AF70)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56AF80)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56C130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowNPCDither_TypeDefinitionIndex = 15875;

	class ChimeraBattleShowNPCDither : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* NPCPoint; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowNPCDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowNPCDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowNPCDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowNPCDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCDITHER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
