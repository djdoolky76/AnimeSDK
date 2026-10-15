#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueDLC1Dot3ImmediateNotifyType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLC1Dot3ImmediateNotify; }

#define RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B3710)
#define RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B3720)
#define RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B36E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLC1Dot3ImmediateNotify_TypeDefinitionIndex = 22272;

	class RogueDLC1Dot3ImmediateNotify : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3ImmediateNotifyType NotifyType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLC1Dot3ImmediateNotify*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLC1DOT3IMMEDIATENOTIFY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
