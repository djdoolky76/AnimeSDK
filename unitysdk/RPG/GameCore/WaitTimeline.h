#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitTimeline; }
namespace System { class String; }

#define RPG_GAMECORE_WAITTIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA34E0)
#define RPG_GAMECORE_WAITTIMELINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA34F0)
#define RPG_GAMECORE_WAITTIMELINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA34A0)

namespace RPG::GameCore
{
	class WaitTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelineName; // 0x18
		::System::Single NormalizedTimeEnd; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
