#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleShowNPCLeave; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F920730)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F920740)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F921D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowNPCLeave_TypeDefinitionIndex = 16032;

	class ChimeraBattleShowNPCLeave : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* NPCPoint; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowNPCLeave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowNPCLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowNPCLeave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowNPCLeave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCLEAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
