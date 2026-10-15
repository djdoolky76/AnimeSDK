#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TimeRewindParentPropStateConfig; }

#define RPG_GAMECORE_TIMEREWINDPARENTPROPSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5B7A0)
#define RPG_GAMECORE_TIMEREWINDPARENTPROPSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5B660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindParentPropStateConfig_TypeDefinitionIndex = 20655;

	class TimeRewindParentPropStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PropState PropState; // 0x10
		::System::Single RotateAngle; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPARENTPROPSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindParentPropStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindParentPropStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDPARENTPROPSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
