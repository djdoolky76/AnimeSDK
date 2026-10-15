#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchBubbleTalk; }

#define RPG_GAMECORE_SWITCHBUBBLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3F940)
#define RPG_GAMECORE_SWITCHBUBBLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB3F950)
#define RPG_GAMECORE_SWITCHBUBBLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3F910)

namespace RPG::GameCore
{
	class SwitchBubbleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBUBBLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBUBBLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchBubbleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchBubbleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHBUBBLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
