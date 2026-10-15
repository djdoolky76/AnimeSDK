#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitTimelineFinish; }
namespace System { class String; }

#define RPG_GAMECORE_WAITTIMELINEFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA3680)
#define RPG_GAMECORE_WAITTIMELINEFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA3690)
#define RPG_GAMECORE_WAITTIMELINEFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA3650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTimelineFinish_TypeDefinitionIndex = 23732;

	class WaitTimelineFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelineName; // 0x18
		::System::Boolean TriggerBeforeFinish; // 0x20
		::System::Boolean IgnoreWarning; // 0x21
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINEFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTimelineFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTimelineFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINEFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitTimelineFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitTimelineFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMELINEFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
