#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerAfterImageEffect; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC429A0)
#define RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC429B0)
#define RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC42970)

namespace RPG::GameCore
{
	class TriggerAfterImageEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* EffectPrefab; // 0x18
		::RPG::GameCore::CharacterMotionFlag LimitMotionFlag; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAfterImageEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAfterImageEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAfterImageEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAfterImageEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAFTERIMAGEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
