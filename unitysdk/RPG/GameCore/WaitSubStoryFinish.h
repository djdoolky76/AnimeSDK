#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitSubStoryFinish; }

#define RPG_GAMECORE_WAITSUBSTORYFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA2D70)
#define RPG_GAMECORE_WAITSUBSTORYFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA2D80)
#define RPG_GAMECORE_WAITSUBSTORYFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA2D30)

namespace RPG::GameCore
{
	class WaitSubStoryFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBSTORYFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSubStoryFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSubStoryFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBSTORYFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSubStoryFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSubStoryFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBSTORYFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
