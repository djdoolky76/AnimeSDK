#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkPopDirection.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleShowBubbleTalk; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }
namespace RPG::GameCore { class ChimeraTalkContent; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5985B0)
#define RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5985C0)
#define RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D599AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleShowBubbleTalk_TypeDefinitionIndex = 15881;

	class ChimeraBattleShowBubbleTalk : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::RPG::GameCore::ChimeraBattleTargetEvaluator* Target; // 0x18
		::System::String* TalkAttachPoint; // 0x20
		::Il2CppArray<::RPG::GameCore::ChimeraTalkContent*>* TalkContents; // 0x28
		::System::Single ShowTime; // 0x30
		::RPG::GameCore::ChimeraTalkPopDirection Direction; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleShowBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleShowBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLESHOWBUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
