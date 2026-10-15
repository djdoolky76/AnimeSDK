#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimelineIntermediaStateConfig; }
namespace System { class String; }

#define RPG_GAMECORE_TIMELINEINTERMEDIASTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB89C60)
#define RPG_GAMECORE_TIMELINEINTERMEDIASTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB89B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimelineIntermediaStateConfig_TypeDefinitionIndex = 16610;

	class TimelineIntermediaStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* StateName; // 0x10
		::System::Single Percentage; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEINTERMEDIASTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimelineIntermediaStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimelineIntermediaStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMELINEINTERMEDIASTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
