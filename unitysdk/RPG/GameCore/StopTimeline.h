#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopTimeline; }
namespace System { class String; }

#define RPG_GAMECORE_STOPTIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED37AC0)
#define RPG_GAMECORE_STOPTIMELINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ED37AD0)
#define RPG_GAMECORE_STOPTIMELINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ED37A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StopTimeline_TypeDefinitionIndex = 20961;

	class StopTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* TimelineName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPTIMELINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPTIMELINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPTIMELINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
