#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchStoryLine; }

#define RPG_GAMECORE_SWITCHSTORYLINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB46E00)
#define RPG_GAMECORE_SWITCHSTORYLINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB46E10)
#define RPG_GAMECORE_SWITCHSTORYLINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB46DD0)

namespace RPG::GameCore
{
	class SwitchStoryLine : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StoryLineID; // 0x18
		::System::UInt32 EntryID; // 0x1C
		::System::UInt32 LoadingType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHSTORYLINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchStoryLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchStoryLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHSTORYLINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchStoryLine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchStoryLine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHSTORYLINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
