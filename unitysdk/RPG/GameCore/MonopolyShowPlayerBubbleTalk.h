#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyShowPlayerBubbleTalk; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AD750)
#define RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8AD760)
#define RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8AD720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShowPlayerBubbleTalk_TypeDefinitionIndex = 20929;

	class MonopolyShowPlayerBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TalkParam; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyShowPlayerBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOWPLAYERBUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
