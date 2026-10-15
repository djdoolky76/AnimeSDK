#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayAnimationClip; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYANIMATIONCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D92C8A0)
#define RPG_GAMECORE_PLAYANIMATIONCLIP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D92C8B0)
#define RPG_GAMECORE_PLAYANIMATIONCLIP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D92C870)

namespace RPG::GameCore
{
	class PlayAnimationClip : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Name; // 0x18
		::System::String* Path; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANIMATIONCLIP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayAnimationClip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayAnimationClip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANIMATIONCLIP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayAnimationClip* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayAnimationClip*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYANIMATIONCLIP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
