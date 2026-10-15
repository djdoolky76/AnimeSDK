#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitUIAnim; }
namespace System { class String; }

#define RPG_GAMECORE_WAITUIANIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA4500)
#define RPG_GAMECORE_WAITUIANIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA4510)
#define RPG_GAMECORE_WAITUIANIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA44C0)

namespace RPG::GameCore
{
	class WaitUIAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* Path; // 0x18
		::System::String* NodeID; // 0x20
		::System::String* AnimStateName; // 0x28
		::System::Single MaxWaitingTime; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIANIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUIAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUIAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIANIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitUIAnim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitUIAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITUIANIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
