#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TimelineEntityConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMELINEENTITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB899B0)
#define RPG_GAMECORE_TIMELINEENTITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB89880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineEntityConfig_TypeDefinitionIndex = 20631;

	class TimelineEntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x10
		::System::String* TemplateName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEENTITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimelineEntityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimelineEntityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEENTITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
