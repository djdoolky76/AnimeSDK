#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkPopDirection.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleShowNPCTalkBubble; }
namespace RPG::GameCore { class ChimeraTalkContent; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56B110)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56B120)
#define RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56C1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowNPCTalkBubble_TypeDefinitionIndex = 15872;

	class ChimeraBattleShowNPCTalkBubble : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::System::String* AttachPoint; // 0x18
		::Il2CppArray<::RPG::GameCore::ChimeraTalkContent*>* TalkContents; // 0x20
		::System::Single ShowTime; // 0x28
		::RPG::GameCore::ChimeraTalkPopDirection Direction; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowNPCTalkBubble*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWNPCTALKBUBBLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
