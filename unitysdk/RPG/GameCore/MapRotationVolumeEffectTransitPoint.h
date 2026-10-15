#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class MapRotationVolumeEffectTransitPoint; }

#define RPG_GAMECORE_MAPROTATIONVOLUMEEFFECTTRANSITPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D802E50)
#define RPG_GAMECORE_MAPROTATIONVOLUMEEFFECTTRANSITPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D802D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationVolumeEffectTransitPoint_TypeDefinitionIndex = 22304;

	class MapRotationVolumeEffectTransitPoint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicString* TriggerName; // 0x10
		::RPG::GameCore::DynamicString* EnergyTrailEffectTransitPoint; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMEEFFECTTRANSITPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationVolumeEffectTransitPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationVolumeEffectTransitPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONVOLUMEEFFECTTRANSITPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
