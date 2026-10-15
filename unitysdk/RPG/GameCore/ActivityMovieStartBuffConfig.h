#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkEffectType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityMovieStartBuffConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYMOVIESTARTBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36BA80)
#define RPG_GAMECORE_ACTIVITYMOVIESTARTBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36B980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityMovieStartBuffConfig_TypeDefinitionIndex = 17538;

	class ActivityMovieStartBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ClockParkEffectType, ::System::Single>* EffectMultiplication; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMOVIESTARTBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityMovieStartBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityMovieStartBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMOVIESTARTBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
