#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowIntensity.h"
#include "unitysdk/RPG/GameCore/HitTimeSlowType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HitTimeSlowConfig; }
namespace System { class String; }

#define RPG_GAMECORE_HITTIMESLOWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D770CC0)
#define RPG_GAMECORE_HITTIMESLOWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D770B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HitTimeSlowConfig_TypeDefinitionIndex = 17099;

	class HitTimeSlowConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HitTimeSlowType Type; // 0x10
		::RPG::GameCore::HitTimeSlowIntensity Intensity; // 0x14
		::System::String* CurveName; // 0x18
		::System::Single Duration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITTIMESLOWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HitTimeSlowConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HitTimeSlowConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITTIMESLOWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
